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

        	
	
		
		
		// Triangulo
		//float color = 0;
		//float color2=0;
			//for(int i=0; i<=360; i+=90)
		//{	
			
		//glLoadIdentity();
		  
			//glColor3f(1.0,1,1-color);
			//color+=.250;
		//glRotatef(i,0,0,1);
		//glTranslatef(0,50,0);
		//glScalef(.4,.4,1);
		
		glBegin(GL_TRIANGLES);
		glVertex3f(0,40,0);
		glVertex3f(-80,40,0);
		glVertex3f(-40,80,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(0,-5,0);
		glVertex3f(-40,-5,0);
		glVertex3f(-40,40,0);
		glVertex3f( 0,40,0);
		glEnd();
		
		glBegin(GL_TRIANGLES);
		glVertex3f(-40,-5,0);
		glVertex3f(0,-5,0);
		glVertex3f(0,-40,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-0,-5,0);
		glVertex3f(40,-5,0);
		glVertex3f(40,-40,0);
		glVertex3f(0,-40,0);
		glEnd();
		
		glBegin(GL_TRIANGLES);
		glVertex3f(40,-5,0);
		glVertex3f(75,-5,0);
		glVertex3f(40,-40,0);
		glEnd();
		// color2+=.05;
		//glColor3f(1, 0.5, 0+color2);
		glColor3f(1, 0.5, 0);
		glBegin(GL_TRIANGLES);
		glVertex3f(0,-40,0);
		glVertex3f(-40,-80,0);
		glVertex3f(0,-80,0);
		glEnd();
		
		glBegin(GL_TRIANGLES);
		glVertex3f(40,-40,0);
		glVertex3f(80,-40,0);
		glVertex3f(80,-80,0);
		glEnd();
       
		
	//}
	/*color=0;
	color2=0;
for(int i=0; i<=360; i+=90)
	{	
			
		//glLoadIdentity();
		  //color=color+.25;
			//glColor3f(0.5,1,1-color);
		glRotatef(i,0,0,1);
		glTranslatef(50,50,0);
		glScalef(.2,.2,1);
		
		glBegin(GL_TRIANGLES);
		glVertex3f(0,40,0);
		glVertex3f(-80,40,0);
		glVertex3f(-40,80,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(0,-5,0);
		glVertex3f(-40,-5,0);
		glVertex3f(-40,40,0);
		glVertex3f( 0,40,0);
		glEnd();
		
		glBegin(GL_TRIANGLES);
		glVertex3f(-40,-5,0);
		glVertex3f(0,-5,0);
		glVertex3f(0,-40,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-0,-5,0);
		glVertex3f(40,-5,0);
		glVertex3f(40,-40,0);
		glVertex3f(0,-40,0);
		glEnd();
		
		glBegin(GL_TRIANGLES);
		glVertex3f(40,-5,0);
		glVertex3f(75,-5,0);
		glVertex3f(40,-40,0);
		glEnd();
		color2+=.25;
		glColor3f(0, 0.5, 0+color2);
		glBegin(GL_TRIANGLES);
		glVertex3f(0,-40,0);
		glVertex3f(-40,-80,0);
		glVertex3f(0,-80,0);
		glEnd();
		
		glBegin(GL_TRIANGLES);
		glVertex3f(40,-40,0);
		glVertex3f(80,-40,0);
		glVertex3f(80,-80,0);
		glEnd();

	}*/
        
                

        
       


	}
	
	
	
	void display()
	{
		float color = 0;
		for(int i=0; i<=360; i+=90)
		{	
			
		glLoadIdentity();
		  
			glColor3f(1.0,1,1-color);
			color+=.250;
		glRotatef(i,0,0,1);
		glTranslatef(0,50,0);
		glScalef(.4,.4,1);
		
		figuras();
	}
	for(int i=0; i<=360; i+=90)
		{	
			
		glLoadIdentity();
		  
			glColor3f(1.0,1,1-color);
			color+=.250;
		glRotatef(i,0,0,1);
		glTranslatef(50,50,0);
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

