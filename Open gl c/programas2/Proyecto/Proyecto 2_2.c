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
	
	
	void cuadrado()
	{

 
		float escala=.60;
 int i;
 float color1 = 0;
 int t=50;
        		for(i=0; i<4; i++)
		{	

		glLoadIdentity();
		//glRotatef(i,0,0,1);
		if(i==0){
			
		}
		if(i==1){
			t=-10;
		}
		if(i==2){
			t=-55;
		}
		if(i==3){
			t=-85;
		}
		glTranslatef(t,t,0);

	
				glScalef(escala,escala,1);
				
				escala-=.15;
				
				//glScalef(.55,.55,1);

		//Triangulo arriba izquierda
						glColor3f(0.9-color1,0.5-color1,0.8-color1);
				//glColor3f(0.9,0.5,0.8);
				glBegin(GL_TRIANGLES);
				glVertex3f(0,80,0);
				glVertex3f(-75,40,0);
				glVertex3f(-50,0,0);
				glEnd();
			//Triangulo arriba en medio 
				glColor3f(0.9-color1,0.2+color1,0.7+color1);
				glBegin(GL_TRIANGLES);
				glVertex3f(0,80,0);
				glVertex3f(-50,0,0);
				glVertex3f(53,15,0);
				glEnd();
			//Triangulo arriba derecha
				glColor3f(0.6+color1,0.1+color1,0.4+color1);
				glBegin(GL_TRIANGLES);
				glVertex3f(0,80,0);
				glVertex3f(53,15,0);
				glVertex3f(75,40,0);
				glEnd();
			//Triangulo en medio izquierda
				glColor3f(0.9-color1,0.2+color1,0.7+color1);
				glBegin(GL_TRIANGLES);
				glVertex3f(-75,40,0);
				glVertex3f(-75,-30,0);
				glVertex3f(-50,0,0);
				glEnd();
			//Triangulo en medio 
				glColor3f(0.6+color1,0.1+color1,0.4+color1);
				glBegin(GL_TRIANGLES);
				glVertex3f(-50,0,0);
				glVertex3f(30,-40,0);
				glVertex3f(53,15,0);
				glEnd();	
			//Triangulo en medio derecha 1
				glColor3f(0.7+color1,0.1+color1,0.6+color1);
				glBegin(GL_TRIANGLES);
				glVertex3f(53,15,0);
				glVertex3f(30,-40,0);
				glVertex3f(75,-40,0);
				glEnd();
			//Triangulo en medio derecha 2
				glColor3f(0.5+color1,0.1+color1,0.4+color1);
				glBegin(GL_TRIANGLES);
				glVertex3f(75,40,0);
				glVertex3f(53,15,0);
				glVertex3f(75,-40,0);
				glEnd();	
			//Triangulo abajo izquierda
				glColor3f(1.0-color1,0.2+color1,0.8-color1);
				glBegin(GL_TRIANGLES);
				glVertex3f(-50,0,0);
				glVertex3f(-75,-30,0);
				glVertex3f(0,-80,0);
				glEnd();
			//Triangulo abajo en medio
				glColor3f(0.5+color1,0.1+color1,0.4+color1);
				glBegin(GL_TRIANGLES);
				glVertex3f(-50,0,0);
				glVertex3f(30,-40,0);
				glVertex3f(0,-80,0);
				glEnd();
			//Triangulo abajo derecha		
				glColor3f(0.9-color1,0.5-color1,0.8-color1);
				glBegin(GL_TRIANGLES);
				glVertex3f(30,-40,0);
				glVertex3f(0,-80,0);
				glVertex3f(75,-40,0);
				glEnd();
				color1+=.2;
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
		glutCreateWindow("luis chido");
		init();
		glutDisplayFunc(display);
		glutReshapeFunc(reshape);
		glutMainLoop();
		return 0;
	}
				
			
