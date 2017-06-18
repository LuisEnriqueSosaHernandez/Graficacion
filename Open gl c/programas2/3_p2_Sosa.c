#include <math.h>
#include <stdio.h>
#include <GL/glut.h>

	void reshape(int width, int height)
	{
		glViewport(0, 0, width, height);
		glMatrixMode(GL_PROJECTION);
		glClear(GL_COLOR_BUFFER_BIT);
		glColor3f(1,1,1);
		
		glLineWidth(1);
		glBegin(GL_LINES);
		glVertex3f(-100,0,0);
		glVertex3f(100,0,0);
		glVertex3f(0,-100,0);
		glVertex3f(0,100,0);
		glEnd();   
		glLoadIdentity();
		glOrtho(-100, 100, -100, 100, -100, 100);
		glMatrixMode(GL_MODELVIEW);
		
		glEnd();
		glFlush();
	}
	
	
	void rombo()
	{

 
		glBegin(GL_POLYGON);
		
		//Estrella
		glVertex3f(-39,37,0);
		glVertex3f(-17,43,0);
		glVertex3f(-31,60,0);
		glVertex3f(-29,82,0);
		glVertex3f(-50,73,0);
		glVertex3f(-71,82,0);
		glVertex3f(-50,18,0);
		
glEnd();


 

	}
	
	
	
	void display()
	{
		
		glLineWidth(1);
		glBegin(GL_LINES);
		glVertex3f(0,-40,0);
		glVertex3f(-100,-40,0);
		glEnd();  
		//orginal reducido por que estaba muy grande
		glTranslatef(-25,-45,0);
		glScalef(0.5,0.5,0);
		rombo();
		//primer cuadrante
		glLoadIdentity();
		glTranslatef(-40,40,0);
		glScalef(0.5,0.5,0);
		glRotatef(50,1,0,0);
		rombo();
		glLoadIdentity();
		glTranslatef(-20,40,0);
		glScalef(0.5,0.5,0);
		glRotatef(40,0,1,0);
		rombo();
		glLoadIdentity();
		glTranslatef(20,40,0);
		glScalef(0.5,0.5,0);
		glRotatef(40,0,0,1);
		rombo();
		glLoadIdentity();
		glTranslatef(-20,10,0);
		glScalef(0.5,0.5,0);
		glRotatef(40,1,1,1);
		rombo();
		//segundo cuadrante
		glLoadIdentity();
		glTranslatef(70,40,0);
		glScalef(0.5,0.5,0);
		glTranslatef(-40,0,0);
		rombo();
		glLoadIdentity();
		glTranslatef(70,40,0);
		glScalef(0.5,0.5,0);
		glTranslatef(0,25,0);
		rombo();
		glLoadIdentity();
		glTranslatef(100,40,0);
		glScalef(0.5,0.5,0);
		glTranslatef(0,0,120);
		rombo();
		glLoadIdentity();
		glTranslatef(70,40,0);
		glScalef(0.5,0.5,0);
		glTranslatef(30,-80,50);
		rombo();
		//tercer cuadrante
		glLoadIdentity();
		glTranslatef(40,-50,0);
		glScalef(0.2,0.5,0.5);
		rombo();
		glLoadIdentity();
		glTranslatef(100,-50,0);
		glScalef(0.5,0.2,0.5);
		rombo();
		glLoadIdentity();
		glTranslatef(80,-50,0);
		glScalef(0.5,0.5,0.2);
		rombo();
		glLoadIdentity();
		glTranslatef(80,-100,0);
		glScalef(0.7,0.7,.7);
		rombo();
		//4 cuadrante
		glLoadIdentity();
		glTranslatef(-60,-70,0);
		glScalef(0.5,0.5,0);
		glRotatef(50,1,0,0);
		rombo();
		glLoadIdentity();
		glTranslatef(-40,-85,0);
		glScalef(0.5,0.5,0);
		glRotatef(50,0,1,0);
		rombo();
		glLoadIdentity();
		glTranslatef(20,-55,0);
		glScalef(0.5,0.5,0);
		glRotatef(50,0,0,4);
		rombo();
		//en original con rotacion de 50
		glLoadIdentity();
		glTranslatef(-20,-90,0);
		glScalef(0.5,0.5,0);
		glRotatef(50,2,2,2);
		rombo();
		
		
		glFlush();
	}
	
	
	void init()
	{
		glClearColor(0,0,0,0);
	}
	
	
	int main(int argc, char **argv)
	{
		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowPosition(200, 200);
		glutInitWindowSize(500, 500);
		glutCreateWindow("Ejemplos Transformaciones");
		init();
		glutDisplayFunc(display);
		glutReshapeFunc(reshape);
		glutMainLoop();
		return 0;
	}
