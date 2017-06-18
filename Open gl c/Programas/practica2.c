#include <GL/glut.h>
#include <math.h>
#include <stdio.h>


void reshape(int width, int height){
 glViewport(0, 0, width, height);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glOrtho(-100, 100, -100, 100, -100, 100);
 glMatrixMode(GL_MODELVIEW);
}



void linea(int x1, int y1, int x2, int y2){
	glBegin(GL_LINES);
		glVertex3f(x1,y1,0.0);
		glVertex3f(x2,y2,0.0);
	glEnd();
}

void linea_bress(int x1, int y1, int x2, int y2){
 int dx,dy,x,y,x_end,y_end,p,const1,const2, in;
 dx=abs(x1-x2);
 dy=abs(y1-y2);
 glBegin(GL_POINTS);
 if (dy>dx){
	p=2*dx-dy;
	const1=2*dx;
	const2=2*(dx-dy);
	if (y1>y2){
		x=x2; y=y2; y_end=y1;
		if(x2<x1) in=1;
		else in=-1;
	}
 	else{
		x=x1; y=y1; y_end=y2;
		if(x2<x1) in=-1;
		else in=1;
	};
	glVertex3f(x,y,0);
	while(y<y_end){
		y++;
		if(p<0) {p+=const1;}
		else { x+=in; p+=const2;};
 		glVertex3f(x,y,0);
 	};
 }
 else{
	p=2*dy-dx;
	const1=2*dy;
	const2=2*(dy-dx);
	if (x1>x2){
		x=x2; y=y2; x_end=x1;
		if(y2<y1) in=1; else in=-1;
		}
	else{
		x=x1; y=y1; x_end=x2;
		if(y2<y1) in=-1; else in=1;
	};
 glVertex3f(x,y,0);
 while(x<x_end){
	x++;
	if(p<0) {p+=const1;} else { y+=in; p+=const2;};
	glVertex3f(x,y,0);
 };
}
 glEnd();
}

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(1.0f, 1.0f, 0.0f); //Linea vertical amarilla

	linea(-60,40,60,40); //lado arriba
	linea(-60,-40,60,-40); //lado abajo
	linea(-60,40,-60,-40); //lado izquierdo
	linea(60,-40,60,40); //lado derecho
	
	linea(-60,0,60,0); //divicion horizontal
	linea(0,40,0,-40); //divicion vertical

	glColor3f(0.5f, 0.0f, 1.0f); // Linea vertical azul
	
	linea(-55,40,-55,0); //linea vertical 1 de izquierda a derecha
	linea(-50,40,-50,0); //linea vertical 2 de izquierda a derecha
	linea(-45,40,-45,0); //linea vertical 3 de izquierda a derecha
	linea(-40,40,-40,0); //linea vertical 4 de izquierda a derecha
	linea(-35,40,-35,0); //linea vertical 5 de izquierda a derecha
	linea(-30,40,-30,0); //linea vertical 6 de izquierda a derecha
	linea(-25,40,-25,0); //linea vertical 7 de izquierda a derecha
	linea(-20,40,-20,0); //linea vertical 8 de izquierda a derecha
	linea(-15,40,-15,0); //linea vertical 9 de izquierda a derecha
	linea(-10,40,-10,0); //linea vertical 10 de izquierda a derecha
	linea(-5,40,-5,0);   //linea vertical 11 de izquierda a derecha
		
	glColor3f(1.0,1.0,1.0); //Linea blanca

	linea(0,-35,60,-35); //linea 1 horizontal
	linea(0,-30,60,-30); //linea 1 horizontal
	linea(0,-25,60,-25); //linea 1 horizontal
	linea(0,-20,60,-20); //linea 1 horizontal
	linea(0,-15,60,-15); //linea 1 horizontal
	linea(0,-10,60,-10); //linea 1 horizontal
	linea(0,-5,60,-5);   //linea 1 horizontal

	glColor3f(0.0f, 1.0f, 0.0f); //Linea Verde
		
	linea(0,10,45,40); //diagonal mitad hacia arriba 1
	linea(0,20,30,40); //diagonal mitad hacia arriba 2
	linea(0,30,15,40); //diagonal mitad hacia arriba 3
	linea(0,0,60,40);  //mitad
	linea(15,0,60,30); //diagonal mitad hacia abajo 1
	linea(30,0,60,20); //diagonal mitad hacia abajo 2
	linea(45,0,60,10); //diagonal mitad hacia abajo 3

	glColor3f(1.0f, 0.0f, 0.0f); //Linea roja	

	linea(-55,0,-55,-40); //linea vertical 1 de izquierda a derecha
	linea(-50,0,-50,-40); //linea vertical 2 de izquierda a derecha
	linea(-45,0,-45,-40); //linea vertical 3 de izquierda a derecha
	linea(-40,0,-40,-40); //linea vertical 4 de izquierda a derecha
	linea(-35,0,-35,-40); //linea vertical 5 de izquierda a derecha
	linea(-30,0,-30,-40); //linea vertical 6 de izquierda a derecha
	linea(-25,0,-25,-40); //linea vertical 7 de izquierda a derecha
	linea(-20,0,-20,-40); //linea vertical 8 de izquierda a derecha
	linea(-15,0,-15,-40); //linea vertical 9 de izquierda a derecha
	linea(-10,0,-10,-40); //linea vertical 10 de izquierda a derecha
	linea(-5,0,-5,-40);   //linea vertical 11 de izquierda a derecha
	
	glFlush();
};

void init(){
 glClearColor(0,0,0,0);
}

int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Practica 2");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}

