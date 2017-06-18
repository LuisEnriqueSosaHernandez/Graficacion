#include <math.h>
#include <GL/glut.h>
	void reshape(int width, int height){
		glViewport(0, 0, width, height);
		glMatrixMode(GL_PROJECTION);
		glClear(GL_COLOR_BUFFER_BIT);
		glColor3f(1,1,1);
		
		glLoadIdentity();
		glOrtho(-100, 100, -100, 100, -100, 100);
		glMatrixMode(GL_MODELVIEW);
		glEnd();
		glFlush();
	}
	void figuras(){
		float color = 0;
		int i;
		for(i=0; i<=360; i=i+90){//Inicia For
			glLoadIdentity();
			color=color+.125;
			glColor3f(1.0,1.0,1-color);
			glRotatef(i,0,0,1);
			glTranslatef(0,50,0);
			glScalef(.4,.4,1);
////////////////////////////////////////////////////////////////////////PATOS GRANDES		
			//Cabeza
			glBegin(GL_TRIANGLES);
			glVertex3f(0,40,0);
			glVertex3f(-80,40,0);
			glVertex3f(-40,80,0);
			glEnd();
			//Cuello
			glBegin(GL_QUADS);
			glVertex3f(0,-5,0);
			glVertex3f(-40,-5,0);
			glVertex3f(-40,40,0);
			glVertex3f( 0,40,0);
			glEnd();
			//Pecho
			glBegin(GL_TRIANGLES);
			glVertex3f(-40,-5,0);
			glVertex3f(0,-5,0);
			glVertex3f(0,-40,0);
			glEnd();
			//Cuerpo
			glBegin(GL_QUADS);
			glVertex3f(-0,-5,0);
			glVertex3f(40,-5,0);
			glVertex3f(40,-40,0);
			glVertex3f(0,-40,0);
			glEnd();
			//Cola
			glBegin(GL_TRIANGLES);
			glVertex3f(40,-5,0);
			glVertex3f(75,-5,0);
			glVertex3f(40,-40,0);
			glEnd();
			//Pata Izquierda
			glColor3f(.875+color, 0.5, 1-color);
			glBegin(GL_TRIANGLES);
			glVertex3f(0,-40,0);
			glVertex3f(-40,-80,0);
			glVertex3f(0,-80,0);
			glEnd();
			//Pata Derecha
			glBegin(GL_TRIANGLES);
			glVertex3f(40,-40,0);
			glVertex3f(80,-40,0);
			glVertex3f(80,-80,0);
			glEnd();
////////////////////////////////////////////////////////////////////////PATOS CHIQUITOS		
			//Cabeza
			glColor3f(1-color,1.0,1-color);
			glTranslatef(125,0,0);
			glScalef(.5,.5,1);
			glBegin(GL_TRIANGLES);
			glVertex3f(0,40,0);
			glVertex3f(-80,40,0);
			glVertex3f(-40,80,0);
			glEnd();
			//Cuello
			glBegin(GL_QUADS);
			glVertex3f(0,-5,0);
			glVertex3f(-40,-5,0);
			glVertex3f(-40,40,0);
			glVertex3f( 0,40,0);
			glEnd();
			//Pecho
			glBegin(GL_TRIANGLES);
			glVertex3f(-40,-5,0);
			glVertex3f(0,-5,0);
			glVertex3f(0,-40,0);
			glEnd();
			//Cuerpo
			glBegin(GL_QUADS);
			glVertex3f(-0,-5,0);
			glVertex3f(40,-5,0);
			glVertex3f(40,-40,0);
			glVertex3f(0,-40,0);
			glEnd();
			//Cola
			glBegin(GL_TRIANGLES);
			glVertex3f(40,-5,0);
			glVertex3f(75,-5,0);
			glVertex3f(40,-40,0);
			glEnd();
			//Pata Izquierda
			glColor3f(.875+color, 0.5, color);
			glBegin(GL_TRIANGLES);
			glVertex3f(0,-40,0);
			glVertex3f(-40,-80,0);
			glVertex3f(0,-80,0);
			glEnd();
			//Pata Derecha
			glBegin(GL_TRIANGLES);
			glVertex3f(40,-40,0);
			glVertex3f(80,-40,0);
			glVertex3f(80,-80,0);
			glEnd();		
		}//Termina For
	}	
	void display(){
		figuras();
		glFlush();
	}
	void init(){
		glClearColor(0,0,0,0);
	}
	int main(int argc, char **argv){
		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
		glutInitWindowPosition(100, 100);
		glutInitWindowSize(500, 500);
		glutCreateWindow("Couary Patito");
		init();
		glutDisplayFunc(display);
		glutReshapeFunc(reshape);
		glutMainLoop();
		return 0;
	}
