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
	
	
	void cuadrado()
	{
		glLoadIdentity();
		glColor3f(0,1,0);
		glTranslatef(-50,50,0);
		glBegin(GL_QUADS);
		glVertex3f(-30, 30,0);
        glVertex3f(-30, -30,0);
        glVertex3f(30, -30,0);
        glVertex3f(30, 30,0);
        glEnd();
        
        glLoadIdentity();
		glColor3f(0,1,0);
		glTranslatef(50,50,0);
		glBegin(GL_QUADS);
		glVertex3f(-30, 30,0);
        glVertex3f(-30, -30,0);
        glVertex3f(30, -30,0);
        glVertex3f(30, 30,0);
        glEnd();
        
        glLoadIdentity();
		glColor3f(0,1,0);
		glTranslatef(-50,-50,0);
		glRotatef(45,0,0,1);
		glBegin(GL_QUADS);
		glVertex3f(-30, 30,0);
        glVertex3f(-30, -30,0);
        glVertex3f(30, -30,0);
        glVertex3f(30, 30,0);
        glEnd();
        
        glLoadIdentity();
		glColor3f(0,1,0);
		glTranslatef(50,-50,0);
		glScalef(.5,.5,1);
		glBegin(GL_QUADS);
		glVertex3f(-30, 30,0);
        glVertex3f(-30, -30,0);
        glVertex3f(30, -30,0);
        glVertex3f(30, 30,0);
        glEnd();


	}
	
	
	
	void display()
	{
		cuadrado();
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
