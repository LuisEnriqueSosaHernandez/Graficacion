#include <math.h>
#include <stdio.h>
#include <GL/glut.h>

	void reshape(int width, int height)
	{
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
	
	
	void figuras()
	{
		
		glBegin(GL_TRIANGLES);
		glColor3f(.8,.8,.8);
		glVertex3f(-60,-25,0);
		glVertex3f(60,-25,0);
		glVertex3f(0,60,0);
		
		glColor3f(.65,.65,.65);
		glVertex3f(-60,-25,0);
		glVertex3f(-60,0,0);
		glVertex3f(0,60,0);
		
		glVertex3f(60,-25,0);
		glVertex3f(60,0,0);
		glVertex3f(0,60,0);
		
		glColor3f(.5,.5,.5);
		glVertex3f(-60,-25,0);
		glVertex3f(60,-25,0);
		glVertex3f(0,-55,0);
		glEnd();
        
       

	}
	
	
	
	void display()
	{
		glLoadIdentity();
		glColor3f(0,1,0);
		glTranslatef(-50,0,0);
	    glScalef(0.6,0.6,1);
		figuras();
		
		glLoadIdentity();
		glColor3f(0,1,0);
		glTranslatef(50,50,0);
		 glScalef(0.45,0.45,1);
	\\\\	figuras();
		
		glLoadIdentity();
		glColor3f(0,1,0);
		glTranslatef(50,0,0);
		 glScalef(0.35,0.35,1);
		figuras();
		
		glLoadIdentity();
		glColor3f(0,1,0);
		glTranslatef(50,-50,0);
		 glScalef(0.25,0.25,1);
		figuras();
		
		
		
		
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
		glutCreateWindow("Sosa Trompo");
		init();
		glutDisplayFunc(display);
		glutReshapeFunc(reshape);
		glutMainLoop();
		return 0;
	}
