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
		glColor3f(0,0,0);
		
		// Prisma triangular
		glBegin(GL_TRIANGLES);
		glVertex3f(0,80,0);
		glVertex3f(0,-80,0);
		glVertex3f(-65,-30,0);
		glEnd();
		
		glColor3f(0.4,0.4,0.4);
		glBegin(GL_TRIANGLES);
		glVertex3f(0,80,0);
		glVertex3f(0,-80,0);
		glVertex3f(65,-30,0);
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
		glutCreateWindow("Ejercicio Piramide");
		init();
		glutDisplayFunc(display);
		glutReshapeFunc(reshape);
		glutMainLoop();
		return 0;
	}
