import com.jogamp.opengl.util.gl2.GLUT;
import com.jogamp.opengl.util.texture.Texture;
import com.jogamp.opengl.util.texture.awt.AWTTextureIO;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;
import javax.imageio.ImageIO;
import javax.media.opengl.GL;
import javax.media.opengl.GL2;
import javax.media.opengl.GLAutoDrawable;
import javax.media.opengl.GLCapabilities;
import javax.media.opengl.GLEventListener;
import javax.media.opengl.GLProfile;
import javax.media.opengl.awt.GLCanvas;
import javax.media.opengl.glu.GLU;

public class Patos extends GLCanvas implements GLEventListener, KeyListener  {
//public class Patitos extends GLCancas implements GLEventListener, KeyListener{
    private float Lx, Rx, By, Uy, Nz, Fz;
    
    private static final int S = 2;
    GLU glu;
    GLUT glut;
    GL2 global_gl;
    float angulox = 0.0f;
    float anguloy = 0.0f;
    float anguloz = 0.0f;
    float vx = 1f;
    float vy = 1f;
    float vz = -200f;
  
   
    Texture textura1;
  
    Patos(GLCapabilities cap){
    //Patitos(GLCapabilities cap){
        super(cap);
       Lx = -0f;
        Rx = 0f;
        By = -0f;
        Uy = 0f;
        Nz = -1.5f;
        Fz = 100f;
        
        glu = new GLU();
        glut = new GLUT();
        this.addGLEventListener(this);
        this.addKeyListener(this);
}

    Texture loadTexture(String imageFile){
       Texture text1 = null;
       try {
            BufferedImage buffImage = ImageIO.read(new File(imageFile));           
            text1 = AWTTextureIO.newTexture(GLProfile.getDefault(),buffImage,false);
       } catch (IOException ioe){
           System.out.println("Problema al cargar el archivo "+imageFile);
       }  
       return text1;
   }
    public void init(GLAutoDrawable glad) {
      GL2 gl = glad.getGL().getGL2();
      
        global_gl = gl;
        
        //gl.glClearColor(0.0f,0.0f,0.0f,0.0f);   

        gl.glMatrixMode(gl.GL_PROJECTION);
       
        gl.glLoadIdentity();
        
        gl.glFrustum (5,-5,5,-5,8,1000);          
        
        gl.glMatrixMode(gl.GL_MODELVIEW);  
        gl.glLoadIdentity();
        glu.gluLookAt(-2,2,0.3f     ,0, 0,0,    0,0,1);
        
        gl.glEnable(GL2.GL_DEPTH_TEST);
        gl.glShadeModel(GL.GL_SMOOTH_LINE_WIDTH_RANGE);
        float[] whiteMaterial={1.0f, 1.0f, 1.0f};
         gl.glMaterialfv(GL.GL_FRONT_AND_BACK, GL2.GL_AMBIENT, whiteMaterial,0);
     // gl.glShadeModel(); // blends colors nicely, and smoothes out lighting
         float[] ambientLight = { 0.5f, .5f, .5f,0.5f };  // weak RED ambient 
      gl.glLightfv(GL2.GL_LIGHT0, GL2.GL_AMBIENT, ambientLight, 0); 
      float[] diffuseLight = { .8f,.8f,.8f,0f };  // multicolor diffuse 
      gl.glLightfv(GL2.GL_LIGHT0, GL2.GL_DIFFUSE, diffuseLight, 0); 
      float[] specularLight = { 1f,1f,1f,0f };  // specular 
      gl.glLightfv(GL2.GL_LIGHT0, GL2.GL_SPECULAR, specularLight, 0);       
              
      gl.glEnable(GL2.GL_LIGHTING);      
      gl.glEnable(GL2.GL_LIGHT0);
         this.textura1 = this.loadTexture("nubes.jpg");
          gl.glEnable(GL2.GL_TEXTURE_2D);
      gl.glEnable(GL2.GL_BLEND);
       gl.glBlendFunc(GL2.GL_ONE, GL2.GL_ONE_MINUS_SRC_ALPHA);  
    }
    @Override
    public void dispose(GLAutoDrawable glad) {
       
    }

    @Override
    public void display(GLAutoDrawable glad) {
       GL2 gl = glad.getGL().getGL2();
        global_gl = gl;
        gl.glLoadIdentity();
       // gl.glClearColor((float)0.30980392,(float)0.83921569,(float)0.08235294,(float)0.5);

        gl.glClear(GL.GL_COLOR_BUFFER_BIT | GL.GL_DEPTH_BUFFER_BIT);
        gl.glEnable(GL.GL_DEPTH_TEST);
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

        // Asociar la textura con el canvas
        gl.glPushMatrix();
        this.textura1.bind(gl);
        this.textura1.enable(gl); 
        gl.glTexCoord1f(4);
        glut.glutSolidTeapot(1);
          gl.glTranslatef(vx,vy,vz -40);          
       gl.glTranslatef(-0f,0f,-0); 
       gl.glRotatef(90,0,0,1);
       gl.glRotatef(angulox,1,0,0);
       gl.glRotatef(anguloy,0,1,0);
       gl.glRotatef(anguloz,0,0,1);
      MisGraficos.patitos(gl, 0,0,0);
        //this.textura1.disable(gl);
      gl.glPopMatrix();
       gl.glPushMatrix();
        this.textura1.bind(gl);
        this.textura1.enable(gl); 
        gl.glTexCoord1f(4);
        glut.glutSolidTeapot(1);
      gl.glBegin(GL2.GL_QUADS);
      gl.glVertex3f(-100, 100, -80);
      gl.glVertex3f(100, 100, -80);
      gl.glVertex3f(100, -100, -80);
      gl.glVertex3f(-100, 100, -80);
      gl.glEnd();
     
        this.textura1.disable(gl);
      gl.glPopMatrix();
        
       MisGraficos.cuadrilla3D(gl, glu, glut, Lx, Rx, By, Uy, Nz, Fz);
       gl.glFlush();
    }

    @Override
    public void reshape(GLAutoDrawable glad, int i, int i1, int i2, int i3) {
    }
    
   public void keyTyped(KeyEvent e){
        switch( e.getKeyChar() ){
        }
        
        this.display();
    }

    @Override
    public void keyPressed(KeyEvent e) {
        
        switch (e.getKeyChar())
        {
            case 'q':
                
                anguloz++;
                break;
                 case 'Q':
                
                anguloz++;
                break;
            case 'e':
                
                anguloz--;
                break;
                case 'E':
                
                anguloz--;
                break;
            case 'w':
                vz++;
                break;
                case 'W':
                vz++;
                break;
            case 'r':
                vz--;
                break;
                case 'R':
                vz--;
                break;
            case 'a':
                vx--;
                break;
                case 'A':
                vx--;
                break;
            case 's':
                vx++;
                break;
                case 'S':
                vx++;
                break;
                //a y b
            case '+':
                vy++;
                break;
            case '-':
                vy--;
                break;
                                                
        }
        
        switch( e.getKeyCode()){
            case KeyEvent.VK_UP:
                angulox++;
                
                break;                
            case KeyEvent.VK_DOWN:
               anguloy++;
                
                break;                      
                
            case KeyEvent.VK_LEFT:
               anguloz++;
                break;     
                
            case KeyEvent.VK_RIGHT:
                angulox--;
                break;     
                
            case KeyEvent.VK_X:
                anguloy--;
                break;          
                
            case KeyEvent.VK_Y:
                anguloz--;
                break; 
        }
        
        this.display();
    }

    @Override
    public void keyReleased(KeyEvent ke) {
    }
    
}