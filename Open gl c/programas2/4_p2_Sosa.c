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
	
	
	void primero()
	{
        glLoadIdentity();
		glTranslatef(50,50,0);
		glColor3f(0,1,1);
		for(int i=0;i<=360;i+=5){
			
		
		glRotatef(i,0,0,1);
		glBegin(GL_TRIANGLES);
		glVertex3f(-30, 0,0);
        glVertex3f(30, 0,0);
        glVertex3f(0, 30,0);
        glEnd();
	}
	//segundo
	glLoadIdentity();
	glTranslatef(-30,-30,0);
	glColor3f(0,1,1);
	glBegin(GL_POLYGON);
	
		glVertex3f(-15,-10,0);
		glVertex3f(20,0,0);
		glVertex3f(35,-30,0);
		glVertex3f(10,-55,0);
		glVertex3f(-5,-45,0);//arriba
		glVertex3f(-7,-49,0);//abajo
		glVertex3f(-11,-47,0);//arriba
		glVertex3f(-14,-51,0);//abajo
		glVertex3f(-17,-49,0);//arriba
		glVertex3f(-20,-53,0);//abajo
		glVertex3f(-28,-45,0);//arriba
		
		glVertex3f(-40,-45,0);//arriba
		glVertex3f(-38,-41,0);//abajo
		glVertex3f(-44,-39,0);//arriba
		glVertex3f(-42,-35,0);//abajo
		glVertex3f(-46,-33,0);//arriba
		glVertex3f(-44,-29,0);//abajo
		glVertex3f(-48,-28,0);//arriba
		glVertex3f(-42,-20,0);//abajo
		
		glVertex3f(-42,-10,0);//arriba
		glVertex3f(-37,-13,0);//abajo
		glVertex3f(-34,-5,0);//arriba
		glVertex3f(-31,-8,0);//abajo
		glVertex3f(-28,-3,0);//arriba
		glVertex3f(-25,-5,0);//abajo
		glVertex3f(-22,0,0);//arriba
		
		
		
		glEnd();
		
      //tercero
       
        glLoadIdentity();
        glColor3f(0,1,1);
         glTranslatef(50,-50,0);
        glRotatef(20,0,0,1);
        
        glBegin(GL_POLYGON);
		glVertex3f(0,0,0);
		glVertex3f(24,0,0);
		glVertex3f(24,24,0);//arriba
		
		glVertex3f(20,20,0);//abajo
		glVertex3f(16,24,0);//arriba
		glVertex3f(12,20,0);//abajo
		glVertex3f(8,24,0);//arriba
		glVertex3f(4,20,0);//abajo
		
		glVertex3f(0,24,0);//arriba
		
		glEnd();

		//tercero
        glLoadIdentity();
        glColor3f(0,1,1);
         glTranslatef(50,-50,0);
        glRotatef(140,0,0,1);
        glTranslatef(-23,-2,0);
        glBegin(GL_POLYGON);
		glVertex3f(0,0,0);
		glVertex3f(24,0,0);
		glVertex3f(24,24,0);//arriba
		
		glVertex3f(20,20,0);//abajo
		glVertex3f(16,24,0);//arriba
		glVertex3f(12,20,0);//abajo
		glVertex3f(8,24,0);//arriba
		glVertex3f(4,20,0);//abajo
		
		glVertex3f(0,24,0);//arriba
		
		glEnd();
		
		//tercero
		glLoadIdentity();
        glColor3f(0,1,1);
         glTranslatef(50,-50,0);
        glRotatef(-98,0,0,1);
        glTranslatef(-12,20,0);
        glBegin(GL_POLYGON);
		glVertex3f(0,0,0);
		glVertex3f(24,0,0);
		glVertex3f(24,24,0);//arriba
		
		glVertex3f(20,20,0);//abajo
		glVertex3f(16,24,0);//arriba
		glVertex3f(12,20,0);//abajo
		glVertex3f(8,24,0);//arriba
		glVertex3f(4,20,0);//abajo
		
		glVertex3f(0,24,0);//arriba
		
		glEnd();
		
		/*glLoadIdentity();
        glColor3f(0,1,1);
        glTranslatef(64,-55,0);
       glBegin(GL_QUADS);
		glVertex3f(-12, 0,0);
        glVertex3f(10, 0,0);
        glVertex3f(10, 10,0);
        glVertex3f(-12, 10,0);
			glEnd();
		*/
		glLoadIdentity();
        glColor3f(0,1,1);
         glRotatef(22,0,0,1);
        glTranslatef(40,-75,0);
		glBegin(GL_TRIANGLES);
			glVertex3f(12,10,0);
			glVertex3f(-12,10,0);
			glVertex3f(0,-10,0);
			glEnd();
			
			glLoadIdentity();
        glColor3f(0,1,1);
         glRotatef(50,0,0,1);
        glTranslatef(50,-50,0);
         glTranslatef(-60,-30,0);
			glLineWidth(1);
		glBegin(GL_LINES);
		glVertex3f(-100,0,0);
		glVertex3f(100,0,0);
		glVertex3f(0,-100,0);
		glVertex3f(0,100,0);
		glEnd();  
		
	/*	for(int i=0;i<=360;i+=10){
			
		glLoadIdentity();
        glColor3f(0,1,1);
         glTranslatef(50,-50,0);
          glRotatef(i,0,0,1);
		glBegin(GL_TRIANGLES);
			glVertex3f(0,0,0);
			glVertex3f(20,0,0);
			glVertex3f(10,20,0);
			glEnd();
		}*/
		
}	
	
	
	void display()
	{
		
		primero();
		
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

	
	
