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

 float color=0;
 float escala=1;
        		for(int i=0; i<=360; i=i+45)
		{	
			
		glLoadIdentity();
		color=color+.125;
		glColor3f(1-color,color,color);
		glRotatef(i,0,0,1);
		glTranslatef(60,0,0);
		glScalef(escala,escala,1);
		escala=escala-.125;
		glBegin(GL_QUADS);
		glVertex3f(-30, 30,0);
        glVertex3f(-30, -30,0);
        glVertex3f(30, -30,0);
        glVertex3f(30, 30,0);
        glEnd();
        

		}
        
        

        
                

        
       


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
