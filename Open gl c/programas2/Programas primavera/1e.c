#include <math.h>
#include <GL/glut.h>

	void reshape(int width, int height)
	{
	//Asignando valores segun tamaño de la ventana
		glViewport(0, 0, width, height);
        //Borrar Pantalla
		glClear(GL_COLOR_BUFFER_BIT);
	//Color Para dibujar	
		glColor3f(1,1,1);
	//Ancho de linea
		glLineWidth(1);
	//Definiendo limites del plano	
		glLoadIdentity();
		glOrtho(-100, 100, -100, 100, -100, 100);
		glMatrixMode(GL_MODELVIEW);
	//Dibujando cuadricula
		glBegin(GL_LINES);
		glVertex3f(-100,0,0);
		glVertex3f(100,0,0);
		glVertex3f(0,-100,0);
		glVertex3f(0,100,0);
		glEnd();
	}
	
	void figuras()
	{
		//Linea Recta
		glColor3f(1,0,0);
		glBegin(GL_LINES);
		glVertex3f(-80, 50, 0);
		glVertex3f(-20, 50, 0);
		glEnd();
		
		//Lineas continuas
		glColor3f(1,1,0);
		glBegin(GL_LINE_STRIP);
		glVertex3f(55,45,0);
		glVertex3f(80,10,0);
		glVertex3f(80,80,0);
		glVertex3f(30,90,0);
		glVertex3f(50,10,0);
		glEnd();
		
		//Lineas continuas cerradas
		glColor3f(1,0,1);
		glBegin(GL_LINE_LOOP);
		glBegin(GL_LINE_STRIP);
		glVertex3f(-45,-55,0);
		glVertex3f(-20,-90,0);
		glVertex3f(-20,-20,0);
		glVertex3f(-70,-10,0);
		glVertex3f(-50,-90,0);
		glEnd();
		
		//Ancho de lineas
		glColor3f(0,1,0);
		glLineWidth(10);
		glBegin(GL_LINES);
		glVertex3f(20, -5, 0);
		glVertex3f(80, -5, 0);
		glEnd();
		glLineWidth(9);
		glBegin(GL_LINES);
		glVertex3f(20, -10, 0);
		glVertex3f(80, -10, 0);
		glEnd();
		glLineWidth(8);
		glBegin(GL_LINES);
		glVertex3f(20, -15, 0);
		glVertex3f(80, -15, 0);
		glEnd();
		glLineWidth(7);
		glBegin(GL_LINES);
		glVertex3f(20, -20, 0);
		glVertex3f(80, -20, 0);
		glEnd();
		glLineWidth(6);
		glBegin(GL_LINES);
		glVertex3f(20, -25, 0);
		glVertex3f(80, -25, 0);
		glEnd();
		glLineWidth(5);
		glBegin(GL_LINES);
		glVertex3f(20, -30, 0);
		glVertex3f(80, -30, 0);
		glEnd();
		glLineWidth(4);
		glBegin(GL_LINES);
		glVertex3f(20, -35, 0);
		glVertex3f(80, -35, 0);
		glEnd();
		glLineWidth(3);
		glBegin(GL_LINES);
		glVertex3f(20, -40, 0);
		glVertex3f(80, -40, 0);
		glEnd();
		glLineWidth(2);
		glBegin(GL_LINES);
		glVertex3f(20, -45, 0);
		glVertex3f(80, -45, 0);
		glEnd();
		glLineWidth(1);
		glBegin(GL_LINES);
		glVertex3f(20, -50, 0);
		glVertex3f(80, -50, 0);
		glEnd();
		
		
		//Lineas punteadas
		GLfloat x,y;
		GLint factor=1;
		GLushort Patron= 0x5555;
		//Habilitando el punteo
		glEnable(GL_LINE_STIPPLE);
		glColor3f(0,0,1);
		for(y=-100.0f; y<-50.0f; y+=3)
		{
		glLineStipple(factor, Patron);
		glBegin(GL_LINES);
		glVertex3f(20,y,0);
		glVertex3f(80,y,0);
		glEnd();
		factor++;
		}
		//Deshabilitando el Punteo
		glDisable(GL_LINE_STIPPLE);
		
	}
	
	void display()
	{
		figuras();
		glFlush();
	}
	
	void init()
	{
	//color de Fondo
		glClearColor(0,0,0,0);
	}
	
	int main(int argc, char **argv)
	{
		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
		glutInitWindowPosition(100, 100);
		glutInitWindowSize(500, 500);
		glutCreateWindow("Ejemplo Lineas");
		init();
		glutDisplayFunc(display);
		glutReshapeFunc(reshape);
		glutMainLoop();
		return 0;
	}
