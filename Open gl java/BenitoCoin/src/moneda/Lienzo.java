package moneda;

import com.jogamp.opengl.util.gl2.GLUT;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import javax.media.opengl.GL2;
import javax.media.opengl.GLAutoDrawable;
import javax.media.opengl.GLCapabilities;
import javax.media.opengl.GLEventListener;
import javax.media.opengl.awt.GLCanvas;
import javax.media.opengl.glu.GLU;
import java.lang.Object;
//Librerias para las texturas
import java.io.File;
import com.jogamp.opengl.util.texture.Texture;
import com.jogamp.opengl.util.texture.TextureIO;
import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.media.opengl.GL;
import javax.media.opengl.GLException;

public class Lienzo  extends GLCanvas implements GLEventListener, KeyListener {
    private float Lx, Rx, By, Uy, Nz, Fz;
    GLU glu;
    GLUT glut;
    GL2 global_gl;
  boolean estado;
    float velocidad=10;
    float desplazamientoz;
    float angulo = 0.0f;
    float angulo1 = 0.0f;
    float SX = 1.0f, SY = 1.0f, SZ = 1.0f,color=0.5f;
    int ini=1;

    float AnguloX=0.0f,AnguloY=0.0f,AnguloZ=0.0f;
    float x,y,z;

    float PX=0f, PY=0.0f, PZ = 6.0f;
    float MX, MY, MZ;


    private Texture benito;
    private Texture benito2;


    Lienzo(GLCapabilities cap){
       super(cap);
      Lx = -6.5f;
       Rx = 6.5f;
       By = -6.5f;
       Uy = 6.5f;
       Nz = 0.5f;
       Fz = 10.5f;
       glu = new GLU();
       glut = new GLUT();
       this.addGLEventListener(this);
       this.addKeyListener(this);
    }

    @Override
    public void init(GLAutoDrawable glad) {
        GL2 gl = glad.getGL().getGL2();

        gl.glClearColor(1f,0.4f,0.4f,0.0f);

        gl.glMatrixMode(gl.GL_PROJECTION);

        gl.glLoadIdentity();

        gl.glOrthof (Lx, Rx, By, Uy, Nz, Fz);
        //gl.glFrustum (Lx, Rx, By, Uy, Nz, Fz);

        gl.glMatrixMode(gl.GL_MODELVIEW);
        try {
            benito=TextureIO.newTexture(new File("src/moneda/benito.jpg"),true);
            benito2=TextureIO.newTexture(new File("src/moneda/benito2.jpg"),true);
        } catch (IOException ex) {
            Logger.getLogger(Lienzo.class.getName()).log(Level.SEVERE, null, ex);
        } catch (GLException ex) {
            Logger.getLogger(Lienzo.class.getName()).log(Level.SEVERE, null, ex);
        }
        gl.glEnable(GL2.GL_DEPTH_TEST);
    }

    @Override
    public void dispose(GLAutoDrawable glad) {

    }

    @Override
    public void display(GLAutoDrawable glad) {
        GL2 gl = glad.getGL().getGL2();
        global_gl = gl;
        gl.glClear(gl.GL_COLOR_BUFFER_BIT | gl.GL_DEPTH_BUFFER_BIT);

        float[] whiteMaterial={1.0f, 1.0f, 1.0f};
      gl.glMaterialfv(GL.GL_FRONT_AND_BACK, GL2.GL_AMBIENT, whiteMaterial,0);
     // gl.glShadeModel(GL_SMOOTH); // blends colors nicely, and smoothes out lighting
 
      // ----- Your OpenGL initialization code here -----
      float[] ambientLight = { 0.5f, .5f, .5f,0.5f };  // weak RED ambient 
      gl.glLightfv(GL2.GL_LIGHT0, GL2.GL_AMBIENT, ambientLight, 0); 
      float[] diffuseLight = { .8f,.8f,.8f,0f };  // multicolor diffuse 
      gl.glLightfv(GL2.GL_LIGHT0, GL2.GL_DIFFUSE, diffuseLight, 0); 
      float[] specularLight = { 1f,1f,1f,0f };  // specular 
      gl.glLightfv(GL2.GL_LIGHT0, GL2.GL_SPECULAR, specularLight, 0);       
              
      gl.glEnable(GL2.GL_LIGHTING);      
      gl.glEnable(GL2.GL_LIGHT0);
       float no_mat[] = { 0.0f, 0.0f, 0.0f, 1.0f };
        float mat_ambient[] = { 0.5f, 0.5f, 0.5f, 1.0f };
        float mat_ambient_color[] = { 0.0f, 0.8f, 0.0f, 1.0f };
        float mat_diffuse[] = { 0.5f, 0.5f, 0.5f, 1.0f };
        float mat_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
        float no_shininess[] = { 0.0f };
        float low_shininess[] = { 5.0f };
        float high_shininess[] = { 100.0f };
        float mat_emission[] = { 0.3f, 0.2f, 0.2f, 0.0f };

        gl.glMaterialfv(GL.GL_FRONT, GL2.GL_AMBIENT, no_mat, 0);
        gl.glMaterialfv(GL.GL_FRONT, GL2.GL_DIFFUSE, mat_diffuse, 0);
        gl.glMaterialfv(GL.GL_FRONT, GL2.GL_SPECULAR, no_mat, 0);
        gl.glMaterialfv(GL.GL_FRONT, GL2.GL_SHININESS, high_shininess, 0);
        gl.glMaterialfv(GL.GL_FRONT, GL2.GL_EMISSION, mat_emission, 0);
 
      gl.glPushMatrix();
        glu.gluLookAt(PX,PY,PZ, MX, MY,MZ, 0, 1,0);
        if(estado){
            
        gl.glRotatef(AnguloY,1,0,0);
        AnguloY+=velocidad;
        }
         if(!estado){
            
        gl.glRotatef(AnguloY,0,1,0);
        AnguloY+=velocidad;
        }
      
        moneda(gl,benito2,benito);
       gl.glPopMatrix();
    }

    @Override
    public void reshape(GLAutoDrawable glad, int i, int i1, int i2, int i3) {
    }

    @Override
    public void keyTyped(KeyEvent e) {
        switch( e.getKeyChar() ){
        }

        this.display();
    }

    @Override
    public void keyPressed(KeyEvent e) {
        switch( e.getKeyCode() ){
            
            case KeyEvent.VK_S:
                AnguloX = (AnguloX - 1) % 360;
                break;
            case KeyEvent.VK_W:
                AnguloX = (AnguloX + 1) % 360;
                break;
            case KeyEvent.VK_D:
                AnguloY = (AnguloY - 1) % 360;
                break;
            case KeyEvent.VK_A:
                AnguloY = (AnguloY + 1) % 360;
                break;
            case KeyEvent.VK_UP:
                //PZ = PZ - 0.1f;
                PZ = (float) (PZ - 0.1f*Math.cos(angulo));
                PX = (float) (PX + 0.1f*Math.sin(angulo));
                MZ = (float) (MZ - 0.1f*Math.cos(angulo));
                MX = (float) (MX + 0.1f*Math.sin(angulo));
                break;

            case KeyEvent.VK_DOWN:
                //PZ = PZ + 0.1f;
                PZ = (float) (PZ + 0.1f*Math.cos(angulo));
                PX = (float) (PX - 0.1f*Math.sin(angulo));
                MZ = (float) (MZ + 0.1f*Math.cos(angulo));
                MX = (float) (MX - 0.1f*Math.sin(angulo));
                break;

            case KeyEvent.VK_1:
                PY-= 0.5f;
                MY-= 0.5f;
                break;
           case KeyEvent.VK_2:
                PY+= 0.5f;
                MY+= 0.5f;
                break;
                 case KeyEvent.VK_3:
                PX+= 0.5f;
                MX+= 0.5f;
                break;
           case KeyEvent.VK_4:
                PX-= 0.5f;
                MX-= 0.5f;
                break;
                case KeyEvent.VK_5:
                estado=false;
                break;
                  case KeyEvent.VK_6:
                estado=true;
                break;
                 case KeyEvent.VK_7:
                velocidad-=1;
                break;
                  case KeyEvent.VK_8:
                velocidad+=1;
                
                break;
                
              }
        
        //this.init();
        this.display();
    }

    @Override
    public void keyReleased(KeyEvent e) {

    }
     public static void moneda(GL2 gl,Texture benito2,Texture benito){
     float AnguloX=0;
     gl.glRotatef(AnguloX,1,0,0);
     AnguloX+=2;
     gl.glTranslatef(0, 1, 0);
     Moneda.benito2(gl, 2,0,0,0.11f, 30,benito2);
     Moneda.benito(gl, 2,0,0,-0.11f, 30,benito);
    
}   
}
