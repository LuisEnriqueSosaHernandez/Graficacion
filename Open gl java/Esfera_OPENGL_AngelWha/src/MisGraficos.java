

import com.jogamp.opengl.util.gl2.GLUT;
import java.util.Random;
import javax.media.opengl.GL2;
import javax.media.opengl.glu.GLU;

public class MisGraficos {

    private static final int X = 0;
    private static final int Y = 1;
    private static final int Z = 2;
    private static final int SIZE = 10;

    public static void cuadrilla3D(GL2 gl, GLU glu, GLUT glut, float Lx, float Rx, float By, float Uy, float Nz, float Fz) {
        int i, j;

        gl.glPolygonMode(GL2.GL_FRONT_AND_BACK, GL2.GL_FILL);

        gl.glColor3f(0.5f, 0.5f, 0.5f);

        //Ejes
        gl.glBegin(GL2.GL_LINES);
        gl.glVertex3f(Lx, 0, 0);
        gl.glVertex3f(Rx, 0, 0);
        gl.glVertex3f(0, By, 0);
        gl.glVertex3f(0, Uy, 0);
        gl.glVertex3f(0, 0, Lx);
        gl.glVertex3f(0, 0, Rx);
        gl.glEnd();

       /* drawString(gl, glut, Lx - 8f, 0, 0, "-X");
        drawString(gl, glut, Rx + 8f, 0, 0, "+X");
        drawString(gl, glut, 0, By - 8f, 0, "-Y");
        drawString(gl, glut, 0, Uy + 8f, 0, "+Y");
        drawString(gl, glut, 0, 0, Lx - 8f, "-Z");
        drawString(gl, glut, 0, 0, Rx + 8f, "+Z");*/
    }

    /*public static void drawString(GL2 gl, GLUT glut, float x, float y, float z, String string) {
        char c;
        int i;
        gl.glColor3f(0.0f, 0.0f, 0.0f);

        gl.glRasterPos3f(x, y, z);
        for (i = 0; i < string.length(); ++i) {
            c = string.charAt(i);

            gl.glColor3f(0.0f, 0.0f, 0.0f);
            glut.glutBitmapCharacter(GLUT.BITMAP_TIMES_ROMAN_10, c);
        }
    }*/
    public static void esfera(GL2 gl, float x, float y, float z,int lados, float radio) {
         gl.glPushMatrix();
        gl.glTranslatef(x,y, z);
        gl.glRotatef(90, 0, 1, 0);
        gl.glPolygonMode(GL2.GL_FRONT_AND_BACK, GL2.GL_FILL);

        //gl.glColor3f(0, 0.f, 0);
		float  [][] colores= {{1,1,0},{0.839f,0.733f,0.003f},{1,1,0},{0.839f,0.733f,0.003f},{1,1,0},{0.839f,0.733f,0.003f}};
               Random rand = new Random();
		//glutSolidSphere(1,10,10);
		for(float i=(float) -Math.PI;i<Math.PI;i+=Math.PI/lados)
		{
			gl.glBegin(GL2.GL_QUAD_STRIP);
			for(int j=0;j<lados+1;j++)
			{
//                          gl.glColor3f(0, 1, 0);
                            float color [] = colores[rand.nextInt(6)];
                           gl.glColor3f(color[1],color[0],color[1]);
                            gl.glVertex3d(
                            (Math.sqrt(Math.cos(i))/.6)*radio * Math.cos(2 * j * Math.PI/lados),
                            (Math.sqrt(Math.cos(i))/.6)*radio * Math.sin(2 * j * Math.PI/lados),
                            i*radio);
                            gl.glVertex3d(
                            (Math.sqrt(Math.cos(i+(Math.PI/lados)))/.6)*radio * Math.cos(2 * j * Math.PI/lados),
                            (Math.sqrt(Math.cos(i+(Math.PI/lados)))/.6)*radio * Math.sin(2 * j * Math.PI/lados),
                            (i+Math.PI/lados)*radio);
			}
			gl.glEnd();
		}
	gl.glPopMatrix();
    }
/*
    public static void esfer(GL2 gl, float x, float y, float z,int lados, float radio) {
         gl.glPushMatrix();
        gl.glTranslatef(x,y, z);
        gl.glRotatef(90, 0, 1, 0);
        gl.glPolygonMode(GL2.GL_FRONT_AND_BACK, GL2.GL_FILL);

        //gl.glColor3f(0, 0.f, 0);
		float  [][] colores= {{0.023f,0.815f,0.282f},{0.407f,0.949f,0.08f},{0.023f,0.815f,0.282f},{0.407f,0.949f,0.08f},{0.023f,0.815f,0.282f},{0.407f,0.949f,0.08f}};
               Random rand = new Random();
	//	gl.glColor3f(1.0f,0f,0f);
               //glutSolidSphere(1,10,10);
		for(float i=(float) -Math.PI;i<Math.PI;i+=Math.PI/lados)
		{
			gl.glBegin(GL2.GL_QUAD_STRIP);
			for(int j=0;j<lados+1;j++)
			{
//                          gl.glColor3f(0, 1, 0);
                            float color [] = colores[rand.nextInt(6)];
                      //     gl.glColor3f(color[0],color[1],color[2]);
                            gl.glVertex3d(
                            (Math.sqrt(Math.cos(i))/.6)*radio * Math.cos(2 * j * Math.PI/lados),
                            (Math.sqrt(Math.cos(i))/.6)*radio * Math.sin(2 * j * Math.PI/lados),
                            i*radio);
                            gl.glVertex3d(
                            (Math.sqrt(Math.cos(i+(Math.PI/lados)))/.6)*radio * Math.cos(2 * j * Math.PI/lados),
                            (Math.sqrt(Math.cos(i+(Math.PI/lados)))/.6)*radio * Math.sin(2 * j * Math.PI/lados),
                            (i+Math.PI/lados)*radio);
			}
			gl.glEnd();
		}
	gl.glPopMatrix();
        
      
}
    /*
public static void esferi(GL2 gl, float x, float y, float z,int lados, float radio) {
         gl.glPushMatrix();
        gl.glTranslatef(x,y, z);
        gl.glRotatef(90, 0, 1, 0);
        gl.glPolygonMode(GL2.GL_FRONT_AND_BACK, GL2.GL_FILL);

        //gl.glColor3f(0, 0.f, 0);
//		float  [][] colores= {{0.023f,0.815f,0.282f},{0.407f,0.949f,0.08f},{0.023f,0.815f,0.282f},{0.407f,0.949f,0.08f},{0.023f,0.815f,0.282f},{0.407f,0.949f,0.08f}};
//               Random rand = new Random();
		//glutSolidSphere(1,10,10);
		for(float i=(float) -Math.PI;i<Math.PI;i+=Math.PI/lados)
		{
			gl.glBegin(GL2.GL_QUAD_STRIP);
			for(int j=0;j<lados+1;j++)
			{
//                          gl.glColor3f(0, 1, 0);
//                            float color [] = colores[rand.nextInt(6)];
                            gl.glColor3f(0.4f,0.4f,0.4f);
                            gl.glVertex3d(
                            (Math.sqrt(Math.cos(i))/.6)*radio * Math.cos(2 * j * Math.PI/lados),
                            (Math.sqrt(Math.cos(i))/.6)*radio * Math.sin(2 * j * Math.PI/lados),
                            i*radio);
                            gl.glVertex3d(
                            (Math.sqrt(Math.cos(i+(Math.PI/lados)))/.6)*radio * Math.cos(2 * j * Math.PI/lados),
                            (Math.sqrt(Math.cos(i+(Math.PI/lados)))/.6)*radio * Math.sin(2 * j * Math.PI/lados),
                            (i+Math.PI/lados)*radio);
			}
			gl.glEnd();
		}
	gl.glPopMatrix();
        
    } */ 
}

    

    

    
    