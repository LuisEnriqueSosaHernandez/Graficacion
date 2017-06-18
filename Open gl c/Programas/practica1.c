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

void displayLin_Horizontales(){
 int i;
 glClear(GL_COLOR_BUFFER_BIT);
 glColor3f(1.0,1.0,1.0);
 glLoadIdentity();
 glBegin(GL_LINES);
 for(i=-100;i<=100;i+=3){
	glVertex3f(-100,i, 0.0);
	glVertex3f(100,i, 0.0);
 }
 glEnd();
 glFlush();
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
	GLfloat angulo;
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	
	glColor3f(0.5f, 0.0f, 1.0f);
	linea_bress(-20,-75,-20,75); // Linea vertical azul

	glColor3f(1.0f, 0.0f, 0.0f);
	linea_bress(-5,-75,-5,75); // Linea vertical roja

	glColor3f(0.0f, 1.0f, 0.0f);
	linea_bress(5,-75,5,75); // Linea vertical verde

	glColor3f(1.0f, 1.0f, 0.0f);
	linea_bress(20,-75,20,75); // Linea vertical amarilla
	
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
	glutCreateWindow("Practica 1");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
