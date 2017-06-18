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
		glVertex3f(0,0,0);
		glVertex3f(0,100,0);
		glEnd();
	}
	
	void figuras()
	{
		glColor3f(0,1,0);
		
		// Triangulo
		glBegin(GL_TRIANGLES);
		glVertex3f(-50,80,0);
		glVertex3f(-80,20,0);
		glVertex3f(-20,20,0);
		glEnd();
	
		//Triangulo Continuo con relleno
		glColor3f(1,0,.5);
		glBegin(GL_TRIANGLE_STRIP);
		//Puntos:
		glVertex3f( 50,80,0);//1
		glVertex3f( 80,50,0);//2
		glVertex3f( 20,50,0);//3
		glColor3f(.8,0.2,.5);
		glVertex3f( 50,20,0);//4		
		glColor3f(.6,0.4,.5);
		glVertex3f( 65,65,0);//5	
		glColor3f(.4,0.6,.5);
		glVertex3f( 35,65,0);//6
		glColor3f(.4,0.6,.5);
		glVertex3f( 35,35,0);//7
		glColor3f(.4,0.6,.5);
		glVertex3f( 65,35,0);//8		
		glColor3f(.2,0.8,.5);
		glVertex3f( 65,65,0);//9
		glColor3f(.0,1,.5);
		glVertex3f( 50,50,0);//10
		glEnd();
		
		//Triangulo Continuo Relleno con Vertice comun
		glColor3f(.5,.3,1);
		glBegin(GL_TRIANGLE_FAN);
		glVertex3f(0,-50,0);
		glVertex3f(25,-75,0);
		glVertex3f(35,-50,0);
		glColor3f(.5,.9,.7);
		glVertex3f(25,-25,0);
		glColor3f(1,.5,.8);
		glVertex3f(0,-15,0);
		glColor3f(.5,1,.8);
		glVertex3f(-25,-25,0);
		glColor3f(.6,.7,.7);
		glVertex3f(-35,-50,0);
		glColor3f(.5,.1,.7);
		glVertex3f(-25,-75,0);
		glColor3f(.9,.1,.6);
		glVertex3f(0,-85,0);
		glColor3f(.5,.3,1);
		glVertex3f(25,-75,0);
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
		glClearColor(0,0,0,0);
	}
	
	int main(int argc, char **argv)
	{
		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
		glutInitWindowPosition(100, 100);
		glutInitWindowSize(500, 500);
		glutCreateWindow("Ejemplo Figuras Triangulares");
		init();
		glutDisplayFunc(display);
		glutReshapeFunc(reshape);
		glutMainLoop();
		return 0;
	}
