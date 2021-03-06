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
	
	
	void figuras()
	{

        	
	float out=(1.0f/255)*255;
	float out2=(1.0f/255)*148;
	float out3=(1.0f/255)*33;
	
	glColor3f(out,out2,out3);
		//frontal
		glBegin(GL_QUADS);
		glVertex3f(10,10,10);
		glVertex3f(-10,10,10);
		glVertex3f(-10,-10,10);
		glVertex3f(10,-10,10);
		glEnd();
		//trasera
		glBegin(GL_QUADS);
		glVertex3f(10,10,-10);
		glVertex3f(-10,10,-10);
		glVertex3f(-10,-10,-10);
		glVertex3f(10,-10,-10);
		glEnd();
		//lateral derecha
		glBegin(GL_QUADS);
		glVertex3f(-10,10,-10);
		glVertex3f(-10,10,10);
		glVertex3f(-10,-10,-10);
		glVertex3f(-10,-10,10);
		glEnd();
		//lateral izquierdo
		glBegin(GL_QUADS);
		glVertex3f(10,10,-10);
		glVertex3f(10,10,10);
		glVertex3f(10,-10,-10);
		glVertex3f(10,-10,10);
		glEnd();
		//arriba
		glBegin(GL_QUADS);
		glVertex3f(-10,10,10);
		glVertex3f(-10,10,10);
		glVertex3f(-10,10,-10);
		glVertex3f(10,10,-10);
		glEnd();
		//abajo
		glBegin(GL_QUADS);
		glVertex3f(-10,-10,-10);
		glVertex3f(10,-10,-10);
		glVertex3f(-10,-10,10);
		glVertex3f(10,-10,10);
		glEnd();

	}
	
	
	
	void display()
	{
		glLoadIdentity();
		
	glScalef(.4,.4,1);
     figuras();
     
     for(int i=0;i<=360;i+=45){
		 glLoadIdentity();
		glRotatef(i,0,0,1);
		glTranslatef(45,0,0);
		glScalef(.3,.3,1);
		figuras();
	}
	figuras();
	
     for(int i=0;i<=360;i+=45){
		 glLoadIdentity();
		glRotatef(i,0,0,1);
		glTranslatef(80,0,0);
		glScalef(.2,.2,1);
	figuras();
	}
		
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

