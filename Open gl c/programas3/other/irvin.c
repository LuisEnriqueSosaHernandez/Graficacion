#include <math.h>
#include <stdio.h>
#include <GL/glut.h>
#include <math.h>
#include <stdlib.h>

static float rotar=0;
static int mover=0;
void reshape(int width, int height){
		glViewport(0, 0, width, height);
		glMatrixMode(GL_PROJECTION);
		glClear(GL_COLOR_BUFFER_BIT);
		glColor3f(1,1,1);
		glLoadIdentity();
		glOrtho(-200, 200, -200, 200, -200, 200);
		/*
		  aqui cambiamos la pisicion de la camara
		  *los primeros 3 valores son el punto alcual estamos miranto
		  * los sig 3 valores son la pasicion de la camara
		  * y los ultimos 3 son del vector pocicion de la figura*/
		//gluLookAt(0,0,0,300,300,300,0,1,0);
		glMatrixMode(GL_MODELVIEW);

		glEnd();
		glFlush();
	}

	float  aX[30];
	float  aY[30];
	int gatito()
	{

		glColor3f(1,0,0);

		glBegin(GL_TRIANGLES);
		glVertex3f( 0-57.5, 0+60,0);
		glVertex3f(25-57.5,15+60,0);
		glVertex3f(45-57.5, 0+60,0);
		
		
		/*todas tus figuras tineen lo mismo, un duplicado
		 para la parte de atraz del dibujo en este caso el eje z marcaria el 
		 grosor del dibujo*/ 
		
		glVertex3f( 0-57.5, 0+60,-30);
		glVertex3f(25-57.5,15+60,-30);
		glVertex3f(45-57.5, 0+60,-30);
		glEnd();

		glBegin(GL_TRIANGLES);
		glVertex3f(45-57.5, 0+60,0);
		glVertex3f(70-57.5,15+60,0);
		glVertex3f(90-57.5, 0+60,0);


		glVertex3f(45-57.5, 0+60,-30);
		glVertex3f(70-57.5,15+60,-30);
		glVertex3f(90-57.5, 0+60,-30);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(45-57.5,0+60, 0);
		glVertex3f( 0-57.5,30+60,0);
		glVertex3f(25-57.5,45+60,0);
		glVertex3f(70-57.5,15+60,0);
		glEnd();

		glColor3f(1,1,0);
		glBegin(GL_POLYGON);
		glVertex3f(45-57.5,0+60, -30);
		glVertex3f( 0-57.5,30+60,-30);
		glVertex3f(25-57.5,45+60,-30);
		glVertex3f(70-57.5,15+60,-30);
		glEnd();

		glBegin(GL_TRIANGLES);
		glVertex3f(45-57.5,30+60,0);
		glVertex3f(70-57.5,15+60,0);
		glVertex3f(90-57.5,30+60,0);

		glVertex3f(45-57.5,30+60,-30);
		glVertex3f(70-57.5,15+60,-30);
		glVertex3f(90-57.5,30+60,-30);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3f( 90-57.5,  0+60,0);
		glVertex3f( 90-57.5, 30+60,0);
		glVertex3f(115-57.5, 45+60,0);
		glVertex3f(115-57.5, 15+60,0);
		glVertex3f( 90-57.5,  0+60,0);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3f( 90-57.5,  0+60,-30);
		glVertex3f( 90-57.5, 30+60,-30);
		glVertex3f(115-57.5, 45+60,-30);
		glVertex3f(115-57.5, 15+60,-30);
		glVertex3f( 90-57.5,  0+60,-30);
		glEnd();

		glBegin(GL_TRIANGLES);
		glVertex3f(90-57.5,0+60,0);
		glVertex3f(70-57.5,15+60,0);
		glVertex3f(90-57.5,30+60,0);

		glVertex3f(90-57.5,0+60,-30);
		glVertex3f(70-57.5,15+60,-30);
		glVertex3f(90-57.5,30+60,-30);
		glEnd();

		glColor3f(.25,.25,0);

		glBegin(GL_TRIANGLES);
		glVertex3f( 90-57.5, 30+60,0);
		glVertex3f(115-57.5, 45+60,0);
		glVertex3f( 90-57.5, 60+60,0);


		glVertex3f( 90-57.5, 30+60,-30);
		glVertex3f(115-57.5, 45+60,-30);
		glVertex3f( 90-57.5, 60+60,-30);
		glEnd();

		glBegin(GL_TRIANGLES);
		glVertex3f( 0-57.5, 30+60,0);
		glVertex3f(25-57.5, 45+60,0);
		glVertex3f( 0-57.5, 60+60,0);

		glVertex3f( 0-57.5, 30+60,-30);
		glVertex3f(25-57.5, 45+60,-30);
		glVertex3f( 0-57.5, 60+60,-30);
		glEnd();

		glBegin(GL_TRIANGLES);
		glVertex3f(45-57.5,30+60,0);
		glVertex3f(25-57.5,45+60,0);
		glVertex3f(45-57.5,60+60,0);

		glVertex3f(45-57.5,30+60,-30);
		glVertex3f(25-57.5,45+60,-30);
		glVertex3f(45-57.5,60+60,-30);
		glEnd();
        ///grosor

        int x=57.5,y=60,z=-30;
		//el siguine te es para mintar todo el contorno del eje z dela figura
		glColor3f(1,1,0);
        glBegin(GL_QUAD_STRIP);

        glColor3f(1,0,0);
        glVertex3f(0-x,0+y,0);
        glVertex3f(0-x,0+y,z);
        glVertex3f(25-57.5,15+60,0);
		glVertex3f(25-57.5,15+60,z);

        glColor3f(1,1,0);
        glVertex3f(0-x,30+y,0);
        glVertex3f(0-x,30+y,z);



		glColor3f(.25,.25,0);
        glVertex3f(0-x,60+y,0);
        glVertex3f(0-x,60+y,z);

        glVertex3f(25-x,45+y,0);
        glVertex3f(25-x,45+y,z);

        glVertex3f(45-x,60+y,0);
        glVertex3f(45-x,60+y,z);

        glVertex3f(45-x,30+y,0);
        glVertex3f(45-x,30+y,z);
		
		glColor3f(1,1,0);
        glVertex3f(90-x,30+y,0);
        glVertex3f(90-x,30+y,z);

        glVertex3f(90-x,60+y,0);
        glVertex3f(90-x,60+y,z);

        glVertex3f(115-x,45+y,0);
        glVertex3f(115-x,45+y,z);
		
		
        glVertex3f(115-x,15+y,0);
        glVertex3f(115-x,15+y,z);
		
		glColor3f(1,0,0);
        glVertex3f(90-x,0+y,0);
        glVertex3f(90-x,0+y,z);

        glVertex3f(0-x,0+y,0);
        glVertex3f(0-x,0+y,z);

        glEnd();
}

//saque tusgatitos del display y los puse aqui nomas porque si
void gatos(){
//toda la figura esta rotando como tal en el eje x
		glLoadIdentity();
		
		/*aqui empiesa la magia rotar como variable p<ra que asi se detecteel cambio
		 en todos los rotatef
		 estos 2 gatitos giran sobre el eje x con un angulo +  
		 */ 
		glRotatef(rotar,1,0,0);
		gatito();
		glScalef(.5,.5,1);
		glTranslatef(180,90,0);
		gatito();

		glLoadIdentity();
		
		glRotatef(rotar,1,0,0);//rotacion de la animacion
        glRotatef(90,0,0,1);//rotacion del dibujo original estatico
        /*nota 
         * si pones primero la rotacion del dibujo y despues la rotacion de la animacion
         * el gatito empesara arotar en una direccion rara*/
        gatito();
        glScalef(.5,.5,1);
		glTranslatef(180,90,0);
		gatito();

		glLoadIdentity();
        glRotatef(rotar,1,0,0);//rotacion de la animacion
        glRotatef(180,0,0,1);
        gatito();
		glScalef(.5,.5,1);
		glTranslatef(180,90,0);
		gatito();

        glLoadIdentity();
        
        glRotatef(rotar,1,0,0);
        glRotatef(270,0,0,1);
        gatito();
        glScalef(.5,.5,1);
		glTranslatef(180,90,0);
		gatito();
}
	void display()
	{

		/*si no se pone este loadIdenty
		 * las rotaciones tambien afectaran 
		 * a las lineas que marcan los ejes*/
        glLoadIdentity();
		glClear(GL_COLOR_BUFFER_BIT);
        glLineWidth(4);
		glBegin(GL_LINES);
		glColor3f(0,0,1);
		glVertex3f(-1000,0,0);
		glVertex3f(1000,0,0);
		
		glColor3f(0,1,0);
		glVertex3f(0,-1000,0);
		glVertex3f(0,1000,0);

		glColor3f(1,0,0);
		glVertex3f(0,0,-1000);
		glVertex3f(0,0,1000);
		glEnd();
        glLoadIdentity();

		/*llamamos al pintado de los gatos en su foma estatica*/
		gatos();
		glFlush();
		
		/*aqui ledamos valor a cunato rotara por vez
		 * numero mas grande, rota mas rapido*/
		 if (mover)
		rotar+=0.1;
		/*a qui actualisamos el display y como se modifica 
		 * la variable rotar se repintan los gatos en su nueva posicion
		 * */
		glutPostRedisplay();

	}
void mouse(int button, int state, int x, int y){
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
        if (mover)
			mover =0;
		else 
			mover=1;
    }
    
    glutPostRedisplay();
}

	void init()
	{
		glClearColor(1,1,1,1);
	}


	int main(int argc, char **argv)
	{
		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowPosition(200, 200);
		glutInitWindowSize(500, 500);
		glutCreateWindow("Agato Volador:'v");
		init();
		glutDisplayFunc(display);
		glutReshapeFunc(reshape);
		glutMouseFunc(mouse);//permiten registrar los eventos producidos por los clicks del ratón
		
		glutMainLoop();
		return 0;
	}
