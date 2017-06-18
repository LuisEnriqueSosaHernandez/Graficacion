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
		glColor3f(0,1,0);
		
		// Cuadrado
		glColor3f(1,1,0);
		glBegin(GL_QUADS);
		glVertex3f(-80,80,0);
		glVertex3f(-20,80,0);
		glVertex3f(-20,20,0);
		glVertex3f(-80,20,0);
		glEnd();
		
		// Trapecio
		glColor3f(1,0,.5);
		glBegin(GL_QUADS);
		glVertex3f(65,70,0);
		glVertex3f(35,70,0);
		glVertex3f(20,30,0);
		glVertex3f(80,30,0);
		glEnd();
		
		//Banda de Cuadrilateros
		glColor3f(1,0,0);//Rojo
		glBegin(GL_QUAD_STRIP);
		glVertex3f(-92.5,-75,0);
		glVertex3f(-92.5,-15,0);
		glVertex3f(-87.5,-75,0);
		glVertex3f(-87.5,-15,0);
		
		glColor3f(1,1,0);//Transicion
		glVertex3f(-72.5,-85,0);
		glVertex3f(-72.5,-25,0);
		
		glColor3f(1,1,0);//Amarillo
		glVertex3f(-67.5,-85,0);
		glVertex3f(-67.5,-25,0);
		
		glColor3f(0,1,0);//Transicion
		glVertex3f(-52.5,-75,0);
		glVertex3f(-52.5,-15,0);
		
		glColor3f(0,1,0);//Verde
		glVertex3f(-47.5,-75,0);
		glVertex3f(-47.5,-15,0);
		
		glColor3f(0,1,1);//Transicion
		glVertex3f(-32.5,-85,0);
		glVertex3f(-32.5,-25,0);
			
		glColor3f(0,1,1);//Turquesa
		glVertex3f(-27.5,-85,0);
		glVertex3f(-27.5,-25,0);
				
		glColor3f(0,0,1);//Transicion
		glVertex3f(-12.5,-75,0);
		glVertex3f(-12.5,-15,0);
		
		glColor3f(0,0,1);//Azul
		glVertex3f(-7.5,-75,0);
		glVertex3f(-7.5,-15,0);
		glEnd();
		
		//Poligono con cualquier numero de lados
		
		glColor3f(0,1,0);
		glBegin(GL_POLYGON);
		//Estrella
		glVertex3f(39,-37,0);
		glVertex3f(17,-43,0);
		glVertex3f(31,-60,0);
		glVertex3f(29,-82,0);
		glVertex3f(50,-73,0);
		glVertex3f(71,-82,0);
		glVertex3f(69,-60,0);
		glVertex3f(83,-43,0);
		glVertex3f(61,-37,0);
		glVertex3f(50,-18,0);
		
		
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
		glutCreateWindow("Ejemplo Figuras Cuadrangulares y Poligonos");
		init();
		glutDisplayFunc(display);
		glutReshapeFunc(reshape);
		glutMainLoop();
		return 0;
	}
