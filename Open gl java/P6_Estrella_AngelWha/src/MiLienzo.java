import javax.media.opengl.GL;
import javax.media.opengl.GL2;
import javax.media.opengl.GLAutoDrawable;
import javax.media.opengl.GLCapabilities;
import javax.media.opengl.GLEventListener;
import javax.media.opengl.awt.GLCanvas;

public class MiLienzo extends GLCanvas implements GLEventListener {
   
    
    MiLienzo(GLCapabilities cap){
        super (cap);
        this.addGLEventListener(this);
        
    }

    @Override
    public void init(GLAutoDrawable glad) {
         GL2 gl=glad.getGL().getGL2();
         
         gl.glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
         gl.glClear(GL2.GL_COLOR_BUFFER_BIT);
         gl.glMatrixMode(GL2.GL_PROJECTION);
         
         gl.glLoadIdentity();
       
        gl.glFrustum(-4.0, 4.0, -4.0, 4.0, 1.5, 100);
        gl.glTranslatef(0.0f, 0.0f, -4.0f);
         gl.glMatrixMode(GL2.GL_MODELVIEW);         
    }

    @Override
    public void dispose(GLAutoDrawable glad) {
        
    }

    @Override

    public void display(GLAutoDrawable glad) {

        GL2 gl = glad.getGL().getGL2();
 
        gl.glClear(gl.GL_COLOR_BUFFER_BIT);
        
        
gl.glColor3f(1.0f, 1.0f, 1.0f);
gl.glLineWidth(3f);
gl.glBegin(GL2.GL_LINE_LOOP);

//ESTRELLA 1
gl.glVertex3f(-5.0f, 7.0f, 0.0f); 
gl.glVertex3f(-4.0f, 3.0f, 0.0f); 
gl.glVertex3f(0.0f, 4.0f, 0.0f); 
gl.glVertex3f(-3.0f, 1.0f, 0.0f); 
gl.glVertex3f(-1.0f,-3.0f, 0.0f);
gl.glVertex3f(-5.0f, -1.0f, 0.0f);
gl.glVertex3f(-9.0f, -3.0f, 0.0f);
gl.glVertex3f(-7.0f, 1.0f, 0.0f);
gl.glVertex3f(-10.0f, 4.0f, 0.0f);
gl.glVertex3f(-6.0f, 3.0f, 0.0f);
gl.glVertex3f(-5.0f, 7.0f, 0.0f);
gl.glEnd();        
        
        
//------------------------------------------------------        
        
                
        
gl.glColor3f(1.0f, 1.0f, 1.0f);
gl.glLineWidth(3f);
gl.glBegin(GL2.GL_LINE_STRIP);

//ESTRELLA 2
gl.glVertex3f(5.0f, 7.0f, 0.0f); 
gl.glVertex3f(6.0f, 3.0f, 0.0f); 
gl.glVertex3f(10.0f, 4.0f, 0.0f); 
gl.glVertex3f(7.0f, 1.0f, 0.0f); 
gl.glVertex3f(9.0f,-3.0f, 0.0f);
gl.glVertex3f(5.0f, -1.0f, 0.0f);
gl.glVertex3f(1.0f, -3.0f, 0.0f);
gl.glVertex3f(3.0f, 1.0f, 0.0f);
gl.glVertex3f(0.0f, 4.0f, 0.0f);
gl.glVertex3f(4.0f, 3.0f, 0.0f);
gl.glVertex3f(5.0f, 7.0f, 0.0f);
gl.glEnd();

       
gl.glColor3f(1.0f, 1.0f, 1.0f);
gl.glLineWidth(3f);
gl.glBegin(GL2.GL_LINE_STRIP);

//LINEAS INTERNAS ESTRELLA 2
gl.glVertex3f(5.0f, 7.0f, 0.0f); 
gl.glVertex3f(5.0f, 1.0f, 0.0f);
gl.glVertex3f(6.0f, 3.0f, 0.0f); 
gl.glVertex3f(5.0f, 1.0f, 0.0f);
gl.glVertex3f(10.0f, 4.0f, 0.0f); 
gl.glVertex3f(5.0f, 1.0f, 0.0f);
gl.glVertex3f(7.0f, 1.0f, 0.0f); 
gl.glVertex3f(5.0f, 1.0f, 0.0f);
gl.glVertex3f(9.0f,-3.0f, 0.0f);
gl.glVertex3f(5.0f, 1.0f, 0.0f);
gl.glVertex3f(5.0f, -1.0f, 0.0f);
gl.glVertex3f(5.0f, 1.0f, 0.0f);
gl.glVertex3f(1.0f, -3.0f, 0.0f);
gl.glVertex3f(5.0f, 1.0f, 0.0f);
gl.glVertex3f(3.0f, 1.0f, 0.0f);
gl.glVertex3f(5.0f, 1.0f, 0.0f);
gl.glVertex3f(0.0f, 4.0f, 0.0f);
gl.glVertex3f(5.0f, 1.0f, 0.0f);
gl.glVertex3f(4.0f, 3.0f, 0.0f);
gl.glVertex3f(5.0f, 1.0f, 0.0f);
gl.glVertex3f(5.0f, 7.0f, 0.0f);
gl.glVertex3f(5.0f, 1.0f, 0.0f);
gl.glEnd();











/*
gl.glColor3f(1.0f, 1.0f, 1.0f);
gl.glLineWidth(3f);
gl.glBegin(GL2.GL_LINE);


//ESTRELLA 2
gl.glVertex3f(0.0f, 12.0f, 0.0f);
gl.glVertex3f(3.0f, 4.0f, 0.0f); 
gl.glVertex3f(3.0f, 4.0f, 0.0f); 
gl.glVertex3f(12.0f, 2.0f, 0.0f); 
gl.glVertex3f(4.0f, 0.0f, 0.0f); 
gl.glVertex3f(8.0f,-10.0f, 0.0f);
gl.glVertex3f(0.0f, -2.0f, 0.0f);
gl.glVertex3f(-8.0f, -10.0f, 0.0f);
gl.glVertex3f(-4.0f, 0.0f, 0.0f);
gl.glVertex3f(-12.0f, 2.0f, 0.0f);
gl.glVertex3f(-3.0f, 4.0f, 0.0f);
gl.glVertex3f(0.0f, 12.0f, 0.0f);
gl.glEnd();
*/







}
    
    @Override
    public void reshape(GLAutoDrawable glad, int i, int i1, int i2, int i3) {
      
    }
}
