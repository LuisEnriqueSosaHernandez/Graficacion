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
		//glOrtho(-14,14, -14, 14, -11, 10);
		glOrtho(-100, 100, -100, 100, -50, 50);//Cambiar proyeccion en z
		glMatrixMode(GL_MODELVIEW);
	
		
		glEnd();
		glFlush();
	}
	
	
	void rombo()
	{
		glBegin(GL_POLYGON);	
		//12 lados
		glVertex3f(-23,-18,0);
		glVertex3f(15,-35,0);
		glVertex3f(10,-23,0);
		glVertex3f(15,-15,0);
		glVertex3f(25,-10,0);
		glVertex3f(35,0,0);
		glVertex3f(25,10,0);
		glVertex3f(10,15,0);
		glVertex3f(0,10,0);
		glVertex3f(-20,10,0);
		glVertex3f(-35,0,0);
		glVertex3f(-50,-10,0);
		glVertex3f(-45,-18,0);
			
glEnd();
	}
	
	
	
	void display()
	{	
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
