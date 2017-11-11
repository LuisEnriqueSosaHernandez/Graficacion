#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

void reshape(int width, int height){
 glViewport(0, 0, width, height);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glOrtho(-100, 100, -100, 100, -100, 100);
 glMatrixMode(GL_MODELVIEW);
}
void cir_bres(int xc, int yc, int r){ 
	int p,x,y;
x=0; y=r; p=(float)5/4-r;
glBegin(GL_POINTS);
while(y>x)
{ 
glVertex3f(xc+x,yc+y,0.0); 
glVertex3f(xc-x,yc+y,0.0);
glVertex3f(xc+x,yc-y,0.0);
 glVertex3f(xc-x,yc-y,0.0);
glVertex3f(xc+y,yc+x,0.0); 
glVertex3f(xc+y,yc-x,0.0);
glVertex3f(xc-y,yc+x,0.0); 
glVertex3f(xc-y,yc-x,0.0);
if (p<0) {p+=2*x+3;}
else { p+=2*(x-y)+5; y--;};
x++;
}
glEnd();
}
void linea(int x1, int y1, int x2, int y2){
	glBegin(GL_LINES);
		glVertex3f(x1,y1,0.0);
		glVertex3f(x2,y2,0.0);
	glEnd();
}
void pintalineas(int xc, int yc, int r){ 
	int p,x,y;
x=0; y=r; p=(float)5/4-r;
glBegin(GL_POINTS);
while(y>x)
{ 
	if(x%1==0){	

//Esquinas
//linea(xc+x,100,xc+x,yc+y);
linea(100,100,xc+x,yc+y); //1 derecha arriba

//linea(xc-x,100,xc-x,yc+y);
linea(-100,100,xc-x,yc+y); //1 izquierda arriba

//linea(xc+x,-100,xc+x,yc-y);
linea(100,-100,xc+x,yc-y); //1 derecha abajo
 
 //linea(xc-x,-100,xc-x,yc-y);
 linea(-100,-100,xc-x,yc-y); // 1 izquierda abajo

//linea(xc+y,100,xc+y,yc+x);
linea(100,100,xc+y,yc+x); //2 derecha arriba

//linea(xc+y,-100,xc+y,yc-x);
linea(100,-100,xc+y,yc-x); // 2derecha abajo

//linea(xc-y,100,xc-y,yc+x);
linea(-100,100,xc-y,yc+x); //2 izquierda arriba

//linea(xc-y,-100,xc-y,yc-x);
linea(-100,-100,xc-y,yc-x); //2 izquierda abajo


//Enmedio

//linea(xc+x,100,xc+x,yc+y);
linea(0,0,xc+x,yc+y);

//linea(xc-x,100,xc-x,yc+y);
linea(0,0,xc-x,yc+y);

//linea(xc+x,-100,xc+x,yc-y);
linea(0,0,xc+x,yc-y);
 
 //linea(xc-x,-100,xc-x,yc-y);
 linea(0,0,xc-x,yc-y);

//linea(xc+y,100,xc+y,yc+x);
linea(0,0,xc+y,yc+x);

//linea(xc+y,-100,xc+y,yc-x);
linea(0,0,xc+y,yc-x);

//linea(xc-y,100,xc-y,yc+x);
linea(0,0,xc-y,yc+x);

//linea(xc-y,-100,xc-y,yc-x);
linea(0,0,xc-y,yc-x);

//Estrella


//linea(xc+x,100,xc+x,yc+y);
linea(0,100,xc+x,yc+y); //1 derecha arriba

//linea(xc-x,100,xc-x,yc+y);
linea(0,100,xc-x,yc+y); //1 izquierda arriba

//linea(xc+x,-100,xc+x,yc-y);
linea(0,-100,xc+x,yc-y); //1 derecha abajo
 
 //linea(xc-x,-100,xc-x,yc-y);
 linea(0,-100,xc-x,yc-y); // 1 izquierda abajo

//linea(xc+y,100,xc+y,yc+x);
linea(100,0,xc+y,yc+x); //2 derecha arriba

//linea(xc+y,-100,xc+y,yc-x);
linea(100,0,xc+y,yc-x); // 2derecha abajo

//linea(xc-y,100,xc-y,yc+x);
linea(-100,0,xc-y,yc+x); //2 izquierda arriba

//linea(xc-y,-100,xc-y,yc-x);
linea(-100,0,xc-y,yc-x); //2 izquierda abajo

}
if (p<0) {p+=2*x+3;}
else { p+=2*(x-y)+5; y--;};
x++;
}
glEnd();
}

void display(){
	int x,y,z;
	glClear(GL_COLOR_BUFFER_BIT);

	srand(time(NULL));
	while(0<1){
	x=rand()%2;
	y=rand()%2;
	z=rand()%2;
	if(x!=0||y!=0||z!=0){
	break;
	}
}
	glColor3f(x,y,z);
	cir_bres(0,0,50);
	while(0<1){
	x=rand()%2;
	y=rand()%2;
	z=rand()%2;
	if(x!=0||y!=0||z!=0){
	break;
	}
}
	glColor3f(x,y,z);
	pintalineas(0,0,50);
	
	
	
	
	

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
	glutCreateWindow("Proyecto 2");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}

