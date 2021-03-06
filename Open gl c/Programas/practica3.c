#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


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
	int j=1;
	
	for(int i=99;i>=-90;i-=11){
		if(j==1){
	glColor3f(0.5f, 0.0f, 1.0f); //Linea vertical azul
	}
if(j==2){
glColor3f(1.0f, 0.0f, 0.0f); //Linea roja
}
if(j==3){
glColor3f(0.0f, 1.0f, 0.0f); //Linea Verde
}
j++;
linea(-99,i,99,i); //lado arriba
if(j>3){
	j=1;
}


}

  j=1;	
	for(int i=89;i>=-100;i-=11){
		if(j==1){
	glColor3f(0.5f, 0.0f, 1.0f); //Linea vertical azul
	}
if(j==2){
glColor3f(1.0f, 0.0f, 0.0f); //Linea roja
}
if(j==3){
glColor3f(0.0f, 1.0f, 0.0f); //Linea Verde
}
j++;
linea(-99,i,99,i); //lado arriba
if(j>3){
	j=1;
}


}
j=1;
	for(int q=-99;q<=99;q+=9){
	for(int i=99;i>=-89;i-=11){
		if(j==1){
	glColor3f(0.5f, 0.0f, 1.0f); //Linea vertical azul
	}
if(j==2){
glColor3f(1.0f, 0.0f, 0.0f); //Linea roja
}
if(j==3){
glColor3f(0.0f, 1.0f, 0.0f); //Linea Verde
}
j++;
if(j>3){
	j=1;
}

linea(q,i,q,i-10);
}
}

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
	glutCreateWindow("Practica 3");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}

