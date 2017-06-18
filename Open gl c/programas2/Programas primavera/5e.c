#include <math.h>
#include <GL/glut.h>

	void reshape(int width, int height)
	{
	//Asignando valores segun tamaño de la ventana
		glViewport(0, 0, width, height);
        //Borrar Pantalla
		glClear(GL_COLOR_BUFFER_BIT);

	//Definiendo limites del plano	
		glLoadIdentity();
		glOrtho(-100, 100, -100, 100, -100, 100);
		glMatrixMode(GL_MODELVIEW);

	}
	
	void figuras()
	{
		
		
		// Cubo
		glColor3f(.6,.6,.6);
		glBegin(GL_QUADS);
		glVertex3f(-20,30,0);
		glVertex3f(-20,-70,0);		
		glVertex3f(80,-60,0);
		glVertex3f( 80,40,0);
		glEnd();
		
				
		glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex3f(-80,45,0);
		glVertex3f(-80,-55,0);
		glVertex3f(-20,-70,0);
		glVertex3f(-20,30,0);
		glEnd();
		
				
		glColor3f(0.3,0.3,0.3);
		glBegin(GL_QUADS);
		glVertex3f(-80,45,0);
		glVertex3f(-20,30,0);
		glVertex3f( 80,40,0);
		glVertex3f( 20,55,0);
		glEnd();
		
	}
	
	void display()
	{
		figuras();
		glFlush();
	}
	
	void init()
	{
	//color de Fondo
		glClearColor(1,1,1,0);
	}
	
	int main(int argc, char **argv)
	{
		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
		glutInitWindowPosition(100, 100);
		glutInitWindowSize(500, 500);
		glutCreateWindow("Cubo");
		init();
		glutDisplayFunc(display);
		glutReshapeFunc(reshape);
		glutMainLoop();
		return 0;
	}
