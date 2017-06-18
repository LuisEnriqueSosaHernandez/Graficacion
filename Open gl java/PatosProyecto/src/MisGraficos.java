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

       
    }
    public static void patitos(GL2 gl, float x, float y, float z){
        	float z1=15, z2=-15;
	
	
		gl.glPushMatrix();
		//gl.glRotatef(i,0,0,1);
		gl.glTranslatef(0,50,0);
		gl.glScalef((float).4,(float).4,1);
                gl.glRotatef(90, 0, 0, 1);
		/////////////////////////////
		/////////PATO FRONTAL////////
		/////////////////////////////
		gl.glColor3f((float)1.0,(float)1.0,1);
		//Cabeza
		gl.glBegin(GL2.GL_TRIANGLES);
		gl.glVertex3f(0,40,z1);
		gl.glVertex3f(-80,40,z1);
		gl.glVertex3f(-40,80,z1);
		gl.glEnd();
		//Cuello
                gl.glColor3f((float)0.976,(float)1,(float)0.368);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(0,-5,z1);
		gl.glVertex3f(-40,-5,z1);
		gl.glVertex3f(-40,40,z1);
		gl.glVertex3f( 0,40,z1);
		gl.glEnd();
		//Pecho
                gl.glColor3f((float)0.976,(float)1,(float)0.368);
		gl.glBegin(GL2.GL_TRIANGLES);
		gl.glVertex3f(-40,-5,z1);
		gl.glVertex3f(0,-5,z1);
		gl.glVertex3f(0,-40,z1);
		gl.glEnd();
		//Cuerpo
                gl.glColor3f(1,(float)0.8745098039,(float)0.4274509804);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(-0,-5,z1);
		gl.glVertex3f(40,-5,z1);
		gl.glVertex3f(40,-40,z1);
		gl.glVertex3f(0,-40,z1);
		gl.glEnd();
		//Cola
                gl.glColor3f((float)0.5098039216,(float)0.1725490196,(float)0.262745098);
		gl.glBegin(GL2.GL_TRIANGLES);
		gl.glVertex3f(40,-5,z1);
		gl.glVertex3f(75,-5,z1);
		gl.glVertex3f(40,-40,z1);
		gl.glEnd();
		//Pata Izquierda
		gl.glColor3f((float)0.9764705882+(float)0.6745098039,(float) 0.9764705882,1);
		gl.glBegin(GL2.GL_TRIANGLES);
		gl.glVertex3f(0,-40,z1);
		gl.glVertex3f(-40,-80,z1);
		gl.glVertex3f(0,-80,z1);
		gl.glEnd();
		//Pata Derecha
                gl.glColor3f((float)0.9764705882+(float)0.6745098039,(float) 0.9764705882,1);
		gl.glBegin(GL2.GL_TRIANGLES);
		gl.glVertex3f(40,-40,z1);
		gl.glVertex3f(80,-40,z1);
		gl.glVertex3f(80,-80,z1);
		gl.glEnd();
		///////////////////////////
		////////PATO TRASERO///////
		///////////////////////////
		gl.glColor3f((float)1.0,(float)1.0,1);
		//Cabeza
		gl.glBegin(GL2.GL_TRIANGLES);
		gl.glVertex3f(0,40,z2);
		gl.glVertex3f(-80,40,z2);
		gl.glVertex3f(-40,80,z2);
		gl.glEnd();
		//Cuello
                gl.glColor3f((float)1.0,(float)1.0,1);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(0,-5,z2);
		gl.glVertex3f(-40,-5,z2);
		gl.glVertex3f(-40,40,z2);
		gl.glVertex3f( 0,40,z2);
		gl.glEnd();
		//Pecho 
                gl.glColor3f((float)1.0,(float)1.0,1);
		gl.glBegin(GL2.GL_TRIANGLES);
		gl.glVertex3f(-40,-5,z2);
		gl.glVertex3f(0,-5,z2);
		gl.glVertex3f(0,-40,z2);
		gl.glEnd();
		//Cuerpo 
                gl.glColor3f(1,(float)0.8745098039,(float)0.4274509804);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(0,-5,z2);
		gl.glVertex3f(40,-5,z2);
		gl.glVertex3f(40,-40,z2);
		gl.glVertex3f(0,-40,z2);
		gl.glEnd();
		//Cola 
                gl.glColor3f((float)1.0,(float)1.0,1);
		gl.glBegin(GL2.GL_TRIANGLES);
		gl.glVertex3f(40,-5,z2);
		gl.glVertex3f(75,-5,z2);
		gl.glVertex3f(40,-40,z2);
		gl.glEnd();
		//Pata Izquierda 
		gl.glColor3f((float)0.9764705882+(float)0.6745098039,(float) 0.9764705882,1);
		gl.glBegin(GL2.GL_TRIANGLES);
		gl.glVertex3f(0,-40,z2);
		gl.glVertex3f(-40,-80,z2);
		gl.glVertex3f(0,-80,z2);
		gl.glEnd();
		//Pata Derecha
                gl.glColor3f((float)0.9764705882+(float)0.6745098039,(float) 0.9764705882,1);
		gl.glBegin(GL2.GL_TRIANGLES);
		gl.glVertex3f(40,-40,z2);
		gl.glVertex3f(80,-40,z2);
		gl.glVertex3f(80,-80,z2);
		gl.glEnd();
		///////////////////////////
		//RELLENO DE CAJA DE PATO//
		///////////////////////////
		//Relleno cabezza lado iquierdo
                gl.glColor3f((float)1.0,(float)1.0,1);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(-80,40,z1);
		gl.glVertex3f(-40,80,z1);
		gl.glVertex3f(-40,80,z2);
		gl.glVertex3f(-80,40,z2);
		gl.glEnd();
		//Relleno cabeza lado derecho
                gl.glColor3f((float)1.0,(float)1.0,1);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(-40,80,z2);
		gl.glVertex3f(0,40,z2);
		gl.glVertex3f(0,40,z1);
		gl.glVertex3f(-40,80,z1);
		gl.glEnd();
		//Relleno cabeza abajo
                gl.glColor3f((float)1.0,(float)1.0,1);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(-80,40,z1);
		gl.glVertex3f(-80,40,z2);
		gl.glVertex3f(-40,40,z2);
		gl.glVertex3f(-40,40,z1);
		gl.glEnd();
		//Relleno cuello lado izquierdo
                gl.glColor3f((float)0.976,(float)1,(float)0.368);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(-40,40,z2);
		gl.glVertex3f(-40,40,z1);
		gl.glVertex3f(-40,-5,z1);
		gl.glVertex3f(-40,-5,z2);
		gl.glEnd();
		//Relleno cuello lado derecho
                gl.glColor3f((float)0.976,(float)1,(float)0.368);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(0,40,z2);
		gl.glVertex3f(0,40,z1);
		gl.glVertex3f(0,-5,z1);
		gl.glVertex3f(0,-5,z2);
		gl.glEnd();
		//Relleno pecho -40 -5, 0 -40
                gl.glColor3f((float)0.976,(float)1,(float)0.368);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(-40,-5,z2);
		gl.glVertex3f(-40,-5,z1);
		gl.glVertex3f(0,-40,z1);
		gl.glVertex3f(0,-40,z2);
		gl.glEnd();
		//Relleno cuerpo arriba
                gl.glColor3f(1,(float)0.8745098039,(float)0.4274509804);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(0,-5,z2);
		gl.glVertex3f(75,-5,z2);
		gl.glVertex3f(75,-5,z1);
		gl.glVertex3f(0,-5,z1);
		gl.glEnd();
		//Relleno cola 
                gl.glColor3f((float)0.5098039216,(float)0.1725490196,(float)0.262745098);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(75,-5,z2);
		gl.glVertex3f(75,-5,z1);
		gl.glVertex3f(40,-40,z1);
		gl.glVertex3f(40,-40,z2);
		gl.glEnd();
		//Relleno cuerpo abajo 
                gl.glColor3f(1,(float)0.8745098039,(float)0.4274509804);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(0,-40,z2);
		gl.glVertex3f(40,-40,z2);
		gl.glVertex3f(40,-40,z1);
		gl.glVertex3f(0,-40,z1);
		gl.glEnd();
		//Relleno pata izquierda parte izquierda
                gl.glColor3f((float)0.9764705882+(float)0.6745098039,(float) 0.9764705882,1);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(0,-40,z2);
		gl.glVertex3f(0,-40,z1);
		gl.glVertex3f(-40,-80,z1);
		gl.glVertex3f(-40,-80,z2);
		gl.glEnd();
		//Relleno pata izquierda parte derecha
                gl.glColor3f((float)0.9764705882+(float)0.6745098039,(float) 0.9764705882,1);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(0,-40,z2);
		gl.glVertex3f(0,-40,z1);
		gl.glVertex3f(0,-80,z1);
		gl.glVertex3f(0,-80,z2);
		gl.glEnd();
		//Relleno pata izquierda parte abajo
                gl.glColor3f((float)0.9764705882+(float)0.6745098039,(float) 0.9764705882,1);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(0,-80,z2);
		gl.glVertex3f(0,-80,z1);
		gl.glVertex3f(-40,-80,z1);
		gl.glVertex3f(-40,-80,z2);
		gl.glEnd();
		//Relleno pata derecha parte arriba
                gl.glColor3f((float)0.9764705882+(float)0.6745098039,(float) 0.9764705882,1);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(40,-40,z2);
		gl.glVertex3f(80,-40,z2);
		gl.glVertex3f(80,-40,z1);
		gl.glVertex3f(40,-40,z1);
		gl.glEnd();
		//Relleno pata derecha parte derecha 
                gl.glColor3f((float)0.9764705882+(float)0.6745098039,(float) 0.9764705882,1);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(80,-40,z2);
		gl.glVertex3f(80,-40,z1);
		gl.glVertex3f(80,-80,z1);
		gl.glVertex3f(80,-80,z2);
		gl.glEnd();
		//Relleno pata derecha parte izquierda
                gl.glColor3f((float)0.9764705882+(float)0.6745098039,(float) 0.9764705882,1);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(40,-40,z2);
		gl.glVertex3f(40,-40,z1);
		gl.glVertex3f(80,-80,z1);
		gl.glVertex3f(80,-80,z2);
		gl.glEnd();
		/////////////////////////////////////////
		//////////////PATO CHIQUITO//////////////
		/////////////////////////////////////////
		gl.glColor3f((float)1,(float)1.0,1);
		gl.glTranslatef(125,0,0);
		gl.glScalef((float).5,(float).5,(float)1);
		//Cabeza
                gl.glColor3f((float)1.0,(float)1.0,1);
		gl.glBegin(GL2.GL_TRIANGLES);
		gl.glVertex3f(0,40,z1);
		gl.glVertex3f(-80,40,z1);
		gl.glVertex3f(-40,80,z1);
		gl.glEnd();
		//Cuello
                gl.glColor3f((float)1.0,(float)1.0,1);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(0,-5,z1);
		gl.glVertex3f(-40,-5,z1);
		gl.glVertex3f(-40,40,z1);
		gl.glVertex3f( 0,40,z1);
		gl.glEnd();
		//Pecho
                gl.glColor3f((float)1.0,(float)1.0,1);
		gl.glBegin(GL2.GL_TRIANGLES);
		gl.glVertex3f(-40,-5,z1);
		gl.glVertex3f(0,-5,z1);
		gl.glVertex3f(0,-40,z1);
		gl.glEnd();
		//Cuerpo
                gl.glColor3f(1,(float)0.8745098039,(float)0.4274509804);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(-0,-5,z1);
		gl.glVertex3f(40,-5,z1);
		gl.glVertex3f(40,-40,z1);
		gl.glVertex3f(0,-40,z1);
		gl.glEnd();
		//Cola
                gl.glColor3f((float)1.0,(float)1.0,1);
		gl.glBegin(GL2.GL_TRIANGLES);
		gl.glVertex3f(40,-5,z1);
		gl.glVertex3f(75,-5,z1);
		gl.glVertex3f(40,-40,z1);
		gl.glEnd();
		//Pata Izquierda
		gl.glColor3f((float)0.9764705882+(float)0.6745098039,(float) 0.9764705882,1);
		gl.glBegin(GL2.GL_TRIANGLES);
		gl.glVertex3f(0,-40,z1);
		gl.glVertex3f(-40,-80,z1);
		gl.glVertex3f(0,-80,z1);
		gl.glEnd();
		//Pata Derecha
                gl.glColor3f((float)0.9764705882+(float)0.6745098039,(float) 0.9764705882,1);
		gl.glBegin(GL2.GL_TRIANGLES);
		gl.glVertex3f(40,-40,z1);
		gl.glVertex3f(80,-40,z1);
		gl.glVertex3f(80,-80,z1);
		gl.glEnd();
		///////////////////////////
		////////PATO TRASERO///////
		///////////////////////////
		gl.glColor3f((float)1.0,(float)1.0,1);
		//Cabeza
                gl.glColor3f((float)1.0,(float)1.0,1);
		gl.glBegin(GL2.GL_TRIANGLES);
		gl.glVertex3f(0,40,z2);
		gl.glVertex3f(-80,40,z2);
		gl.glVertex3f(-40,80,z2);
		gl.glEnd();
		//Cuello
                gl.glColor3f((float)0.976,(float)1,(float)0.368);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(0,-5,z2);
		gl.glVertex3f(-40,-5,z2);
		gl.glVertex3f(-40,40,z2);
		gl.glVertex3f( 0,40,z2);
		gl.glEnd();
		//Pecho 
                gl.glColor3f((float)0.976,(float)1,(float)0.368);
		gl.glBegin(GL2.GL_TRIANGLES);
		gl.glVertex3f(-40,-5,z2);
		gl.glVertex3f(0,-5,z2);
		gl.glVertex3f(0,-40,z2);
		gl.glEnd();
		//Cuerpo 
                gl.glColor3f(1,(float)0.8745098039,(float)0.4274509804);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(0,-5,z2);
		gl.glVertex3f(40,-5,z2);
		gl.glVertex3f(40,-40,z2);
		gl.glVertex3f(0,-40,z2);
		gl.glEnd();
		//Cola 
                gl.glColor3f((float)0.5098039216,(float)0.1725490196,(float)0.262745098);
		gl.glBegin(GL2.GL_TRIANGLES);
		gl.glVertex3f(40,-5,z2);
		gl.glVertex3f(75,-5,z2);
		gl.glVertex3f(40,-40,z2);
		gl.glEnd();
		//Pata Izquierda 
                gl.glColor3f((float)0.9764705882+(float)0.6745098039,(float) 0.9764705882,1);
		gl.glColor3f((float)0.9764705882+(float)0.6745098039,(float) 0.9764705882,1);
		gl.glBegin(GL2.GL_TRIANGLES);
		gl.glVertex3f(0,-40,z2);
		gl.glVertex3f(-40,-80,z2);
		gl.glVertex3f(0,-80,z2);
		gl.glEnd();
		//Pata Derecha
                gl.glColor3f((float)0.9764705882+(float)0.6745098039,(float) 0.9764705882,1);
                gl.glColor3f((float)0.9764705882+(float)0.6745098039,(float) 0.9764705882,1);
		gl.glBegin(GL2.GL_TRIANGLES);
		gl.glVertex3f(40,-40,z2);
		gl.glVertex3f(80,-40,z2);
		gl.glVertex3f(80,-80,z2);
		gl.glEnd();
		///////////////////////////
		//RELLENO DE CAJA DE PATO//
		///////////////////////////
		//Relleno cabezza lado iquierdo
                gl.glColor3f((float)1.0,(float)1.0,1);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(-80,40,z1);
		gl.glVertex3f(-40,80,z1);
		gl.glVertex3f(-40,80,z2);
		gl.glVertex3f(-80,40,z2);
		gl.glEnd();
		//Relleno cabeza lado derecho
                gl.glColor3f((float)1.0,(float)1.0,1);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(-40,80,z2);
		gl.glVertex3f(0,40,z2);
		gl.glVertex3f(0,40,z1);
		gl.glVertex3f(-40,80,z1);
		gl.glEnd();
		//Relleno cabeza abajo
                gl.glColor3f((float)1.0,(float)1.0,1);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(-80,40,z1);
		gl.glVertex3f(-80,40,z2);
		gl.glVertex3f(-40,40,z2);
		gl.glVertex3f(-40,40,z1);
		gl.glEnd();
		//Relleno cuello lado izquierdo
                gl.glColor3f((float)0.976,(float)1,(float)0.368);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(-40,40,z2);
		gl.glVertex3f(-40,40,z1);
		gl.glVertex3f(-40,-5,z1);
		gl.glVertex3f(-40,-5,z2);
		gl.glEnd();
		//Relleno cuello lado derecho
                gl.glColor3f((float)0.976,(float)1,(float)0.368);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(0,40,z2);
		gl.glVertex3f(0,40,z1);
		gl.glVertex3f(0,-5,z1);
		gl.glVertex3f(0,-5,z2);
		gl.glEnd();
		//Relleno pecho -40 -5, 0 -40
                gl.glColor3f((float)0.976,(float)1,(float)0.368);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(-40,-5,z2);
		gl.glVertex3f(-40,-5,z1);
		gl.glVertex3f(0,-40,z1);
		gl.glVertex3f(0,-40,z2);
		gl.glEnd();
		//Relleno cuerpo arriba
                gl.glColor3f(1,(float)0.8745098039,(float)0.4274509804);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(0,-5,z2);
		gl.glVertex3f(75,-5,z2);
		gl.glVertex3f(75,-5,z1);
		gl.glVertex3f(0,-5,z1);
		gl.glEnd();
		//Relleno cola 
                gl.glColor3f((float)0.5098039216,(float)0.1725490196,(float)0.262745098);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(75,-5,z2);
		gl.glVertex3f(75,-5,z1);
		gl.glVertex3f(40,-40,z1);
		gl.glVertex3f(40,-40,z2);
		gl.glEnd();
		//Relleno cuerpo abajo 
                gl.glColor3f(1,(float)0.8745098039,(float)0.4274509804);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(0,-40,z2);
		gl.glVertex3f(40,-40,z2);
		gl.glVertex3f(40,-40,z1);
		gl.glVertex3f(0,-40,z1);
		gl.glEnd();
		//Relleno pata izquierda parte izquierda
                gl.glColor3f((float)0.9764705882+(float)0.6745098039,(float) 0.9764705882,1);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(0,-40,z2);
		gl.glVertex3f(0,-40,z1);
		gl.glVertex3f(-40,-80,z1);
		gl.glVertex3f(-40,-80,z2);
		gl.glEnd();
		//Relleno pata izquierda parte derecha
                gl.glColor3f((float)0.9764705882+(float)0.6745098039,(float) 0.9764705882,1);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(0,-40,z2);
		gl.glVertex3f(0,-40,z1);
		gl.glVertex3f(0,-80,z1);
		gl.glVertex3f(0,-80,z2);
		gl.glEnd();
		//Relleno pata izquierda parte abajo
                gl.glColor3f((float)0.9764705882+(float)0.6745098039,(float) 0.9764705882,1);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(0,-80,z2);
		gl.glVertex3f(0,-80,z1);
		gl.glVertex3f(-40,-80,z1);
		gl.glVertex3f(-40,-80,z2);
		gl.glEnd();
		//Relleno pata derecha parte arriba
                gl.glColor3f((float)0.9764705882+(float)0.6745098039,(float) 0.9764705882,1);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(40,-40,z2);
		gl.glVertex3f(80,-40,z2);
		gl.glVertex3f(80,-40,z1);
		gl.glVertex3f(40,-40,z1);
		gl.glEnd();
		//Relleno pata derecha parte derecha 
                gl.glColor3f((float)0.9764705882+(float)0.6745098039,(float) 0.9764705882,1);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(80,-40,z2);
		gl.glVertex3f(80,-40,z1);
		gl.glVertex3f(80,-80,z1);
		gl.glVertex3f(80,-80,z2);
		gl.glEnd();
		//Relleno pata derecha parte izquierda
                gl.glColor3f((float)0.9764705882+(float)0.6745098039,(float) 0.9764705882,1);
		gl.glBegin(GL2.GL_QUADS);
		gl.glVertex3f(40,-40,z2);
		gl.glVertex3f(40,-40,z1);
		gl.glVertex3f(80,-80,z1);
		gl.glVertex3f(80,-80,z2);
		gl.glEnd();	
		gl.glPopMatrix();
        }
        }

        


    

    

    
    