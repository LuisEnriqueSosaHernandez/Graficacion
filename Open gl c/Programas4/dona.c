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
void linea(int x1, int y1, int x2, int y2){
	glBegin(GL_LINES);
		glVertex3f(x1,y1,0.0);
		glVertex3f(x2,y2,0.0);
	glEnd();
}
void cir_bres(int xc, int yc, int r,int xc2,int yc2,int r2){ 
	int p,x,y,p2,x2,y2;
	int linea1=0,linea2=0,linea3=0,linea4=0;
x=0; y=r; p=(float)5/4-r;
x2=0;y2=r2;p2=(float)5/4-r2;

glBegin(GL_POINTS);
while(y>x||y2>x2)
{ 
	if(y>x){	
glVertex3f(xc+x,yc+y,0.0); 
linea1=xc+x;
linea2=yc+y;
}
if(y2>x2){
glVertex3f(xc2+x2,yc2+y2,0.0); //segundo circulo
linea3=xc2+x2;
linea4=yc2+y2;
if(x%4==0){
linea(linea1,linea2,linea3,linea4);
}	
}

if(y>x){	
glVertex3f(xc-x,yc+y,0.0);
linea1=xc-x;
linea2=yc+y;
}
if(y2>x2){
glVertex3f(xc2-x2,yc2+y2,0.0);//segundo circulo
linea3=xc2-x2;
linea4=yc2+y2;
if(x%4==0){
linea(linea1,linea2,linea3,linea4);
}
}
if(y>x){	
glVertex3f(xc+x,yc-y,0.0);
linea1=xc+x;
linea2=yc-y;
}
if(y2>x2){
glVertex3f(xc2+x2,yc2-y2,0.0);//segundo circulo
linea3=xc2+x2;
linea4=yc2-y2;
if(x%4==0){
linea(linea1,linea2,linea3,linea4);
}
}
if(y>x){	
glVertex3f(xc-x,yc-y,0.0);
linea1=xc-x;
linea2=yc-y;
}
if(y2>x2){
glVertex3f(xc2-x2,yc2-y2,0.0);//segundo circulo
linea3=xc2-x2;
linea4=yc2-y2;
if(x%4==0){
linea(linea1,linea2,linea3,linea4);
}
}
if(y>x){	
glVertex3f(xc+y,yc+x,0.0); 
linea1=xc+y;
linea2=yc+x;
}
if(y2>x2){
glVertex3f(xc2+y2,yc2+x2,0.0); //segundo circulo
linea3=xc2+y2;
linea4=yc2+x2;
if(x%4==0){
linea(linea1,linea2,linea3,linea4);
}
}
if(y>x){	
glVertex3f(xc+y,yc-x,0.0);
linea1=xc+y;
linea2=yc-x;
}
if(y2>x2){
glVertex3f(xc2+y2,yc2-x2,0.0);//segundo circulo
linea3=xc2+y2;
linea4=yc2-x2;
if(x%4==0){
linea(linea1,linea2,linea3,linea4);
}
}
if(y>x){	
glVertex3f(xc-y,yc+x,0.0); 
linea1=xc-y;
linea2=yc+x;
}
if(y2>x2){
glVertex3f(xc2-y2,yc2+x2,0.0); //segundo circulo
linea3=xc2-y2;
linea4=yc2+x2;
if(x%4==0){
linea(linea1,linea2,linea3,linea4);
}
}
if(y>x){	
glVertex3f(xc-y,yc-x,0.0);
linea1=xc-y;
linea2=yc-x;
}
if(y2>x2){
glVertex3f(xc2-y2,yc2-x2,0.0);//segundo circulo
linea3=xc2-y2;
linea4=yc2-x2;
if(x%4==0){
linea(linea1,linea2,linea3,linea4);
}
}
if (p<0) {p+=2*x+3;}
else { p+=2*(x-y)+5; y--;}
if (p2<0) {p2+=2*x2+3;}
else { p2+=2*(x2-y2)+5; y2--;}
x++;
x2++;
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
	cir_bres(0,0,50,0,0,90);
	while(0<1){
	x=rand()%2;
	y=rand()%2;
	z=rand()%2;
	if(x!=0||y!=0||z!=0){
	break;
	}
}
	glColor3f(x,y,z);
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

