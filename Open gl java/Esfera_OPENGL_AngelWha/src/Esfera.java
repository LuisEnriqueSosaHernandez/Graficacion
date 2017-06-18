import com.jogamp.opengl.util.gl2.GLUT;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import javax.media.opengl.GL;
import javax.media.opengl.GL2;
import javax.media.opengl.GLAutoDrawable;
import javax.media.opengl.GLCapabilities;
import javax.media.opengl.GLEventListener;
import javax.media.opengl.awt.GLCanvas;
import javax.media.opengl.glu.GLU;

public class Esfera extends GLCanvas implements GLEventListener, KeyListener  {
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
    float vz = 1f;
  
   
    
  
    Esfera(GLCapabilities cap){
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

    @Override
    public void init(GLAutoDrawable glad) {
      GL2 gl = glad.getGL().getGL2();
      
        global_gl = gl;
        
        gl.glClearColor(1.0f,1.0f,1.0f,0.0f);   

        gl.glMatrixMode(gl.GL_PROJECTION);
       
        gl.glLoadIdentity();
        //gl.glOrthof(5, -2, 2, -2, 1.5f, 1000);
        gl.glFrustum (5,-5,5,-5,8,1000);          
        
        gl.glMatrixMode(gl.GL_MODELVIEW);  
        gl.glLoadIdentity();
        glu.gluLookAt(-2,2,0.3f     ,0, 0,0,    0,0,1);
        
        gl.glEnable(GL2.GL_DEPTH_TEST);
    }
    @Override
    public void dispose(GLAutoDrawable glad) {
       
    }

    @Override
    public void display(GLAutoDrawable glad) {
       GL2 gl = glad.getGL().getGL2();
        global_gl = gl;
        gl.glLoadIdentity();
        gl.glClearColor(0,0,0, 0);

        gl.glClear(GL.GL_COLOR_BUFFER_BIT | GL.GL_DEPTH_BUFFER_BIT);
        gl.glEnable(GL.GL_DEPTH_TEST);
        
        gl.glPushMatrix();
        
       
       gl.glTranslatef(vx,vy,vz -40);          
       gl.glTranslatef(-0f,0f,-0); 
       gl.glRotatef(90,0,0,1);
       gl.glRotatef(angulox,1,0,0);
       gl.glRotatef(anguloy,0,1,0);
       gl.glRotatef(anguloz,0,0,1);
      
       MisGraficos.esfera(gl, 0,0,0,20,3);
       
       //gl.glRotatef(90,0,1,0);
    //   MisGraficos.esfer(gl, 1,2,9,20,2);
       
     //MisGraficos.esferi(gl, 1,2,13.5f,20,0.5f);
//       gl.glTranslatef(-0f,-3f,-15);
//       gl.glRotatef(90,0,1,0);
//       MisGraficos.esfera(gl, 0,0,1, 20,1.5f);
//      gl.glScalef(1f, 1f, 1f);
        
      gl.glPopMatrix();
        
       //MisGraficos.cuadrilla3D(gl, glu, glut, Lx, Rx, By, Uy, Nz, Fz);
       gl.glFlush();
    }

    @Override
    public void reshape(GLAutoDrawable glad, int i, int i1, int i2, int i3) {
    }
    
   public void keyTyped(KeyEvent e){
        switch( e.getKeyChar() ){
/*            case 'a':
                System.out.println("dfsdfsdf");
                break;
  */      
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
            case 'e':
                System.out.print("no se nada");
                anguloz--;
                break;
            case 'w':
                vz++;
                break;
            case 'r':
                vz--;
                break;
            case 'a':
                vx--;
                break;
            case 's':
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
                //System.out.println("sdfsdf");
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