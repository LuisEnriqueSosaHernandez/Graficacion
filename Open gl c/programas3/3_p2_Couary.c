//Martillito
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
		/*int left, right, down, up, cerca, lejos;
		left=-100;
		right=100;
		down=0;
		up=0;
		cerca=0;
		lejos=0;*/
		glOrtho(-100,100,-100,100,-100,100);
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		glFlush();
	}
	void poligono()
	{
		glLoadIdentity();
		glColor3f(1,0,0);
		glBegin(GL_POLYGON);
		glVertex3f(20,20,0);
		glVertex3f(40,10,0);
		glVertex3f(40,-10,0);
		glVertex3f(20,-20,0);
		glVertex3f(0,-20,0);
		glVertex3f(0,-65,0);
		glVertex3f(-10,-20,0);
		glVertex3f(-20,-20,0);
		glVertex3f(-40,-10,0);
		glVertex3f(-30,0,0);
		glVertex3f(-40,10,0);
		glVertex3f(-20,20,0);
		glEnd();
	}
	
	void display()
	{
		poligono();
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
		glutCreateWindow("Práctica 2");
		init();
		glutDisplayFunc(display);
		glutReshapeFunc(reshape);
		glutMainLoop();
		return 0;
	}
