#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
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
void elipse(int xc, int yc, int rx, int ry)
{ long p,px, py, x, y, rx2, ry2, _2rx2, _2ry2;
ry2=(long)ry*ry; rx2=(long)rx*rx;
_2rx2=2*rx2; _2ry2=2*ry2;
glBegin(GL_POINTS);
x=0; y=ry;
glVertex3f(xc+x,yc+y,0.0); glVertex3f(xc-x,yc+y,0.0);
glVertex3f(xc+x,yc-y,0.0); glVertex3f(xc-x,yc-y,0.0);
p=round(ry2-rx2*ry+(0.25*rx2));
px=0;
py=_2rx2*y;
while(px<py)
{ x++;
px+=_2ry2;
if(p>=0) { y--; py-=_2rx2; }
if(p<0) p+=(ry2+px);
else p+=(ry2+px-py);
glVertex3f(xc+x,yc+y,0.0); glVertex3f(xc-x,yc+y,0.0);
glVertex3f(xc+x,yc-y,0.0); glVertex3f(xc-x,yc-y,0.0);
}
p=round(ry2*(x+0.5)*(x+0.5)+rx2*(y-1)*(y-1)-rx2*ry2);
while(y>0)
{ y--;
py-=_2rx2;
if(p<=0) { x++; px+=_2ry2; }
if(p>0) p+=(rx2-py);
else p+=(rx2-py+px);
glVertex3f(xc+x,yc+y,0.0); glVertex3f(xc-x,yc+y,0.0);
glVertex3f(xc+x,yc-y,0.0); glVertex3f(xc-x,yc-y,0.0);
}
glEnd();
}
void cir_bres(int xc, int yc, int r){ 
int p,x,y;
x=0; y=r; p=(float)5/4-r;
glBegin(GL_POINTS);
while(y>x)
{ 
glVertex3f(xc+x,yc+y,0.0); glVertex3f(xc-x,yc+y,0.0);//up
glVertex3f(xc+x,yc-y,0.0); glVertex3f(xc-x,yc-y,0.0);//down
glVertex3f(xc+y,yc+x,0.0); glVertex3f(xc+y,yc-x,0.0);//right
glVertex3f(xc-y,yc+x,0.0); glVertex3f(xc-y,yc-x,0.0);//left
if (p<0) {p+=2*x+3;}
else { p+=2*(x-y)+5; y--;};
x++;
}
glEnd();
}
void display()
{ GLfloat angulo;
glClear(GL_COLOR_BUFFER_BIT);

glLoadIdentity();
srand(time(NULL));
glColor3f(0.5f, 0.0f, 1.0f);
int x,y,z;
for(int i=21;i>=1;i-=3){

	while(0<1){
	x=rand()%2;
	y=rand()%2;
	z=rand()%2;
	if(x!=y||z!=x){
		break;
	}
	}
	glColor3f(x,y,z);
cir_bres(69,79,i);
}
while(0<1){
	x=rand()%2;
	y=rand()%2;
	z=rand()%2;
	if(x!=y||z!=x){
		break;
	}
	}
glColor3f(x, y, z);

cir_bres(-69,79,20);

while(0<1){
	x=rand()%2;
	y=rand()%2;
	z=rand()%2;
	if(x!=y||z!=x){
		break;
	}
	}
glColor3f(x, y, z);

linea(-86,70,-50,70);
linea(-81,65,-55,65);
linea(-89,75,-48,75);
linea(-89,80,-48,80);
linea(-87,85,-50,85);
linea(-85,90,-52,90);
linea(-82,95,-55,95);
while(0<1){
	x=rand()%2;
	y=rand()%2;
	z=rand()%2;
	if(x!=y||z!=x){
		break;
	}
	}
glColor3f(x, y, z);
elipse(0,0,30,15);
while(0<1){
	x=rand()%2;
	y=rand()%2;
	z=rand()%2;
	if(x!=y||z!=x){
		break;
	}
	}
glColor3f(x, y, z);
linea(24,10,70,10);
linea(28,5,65,5);
linea(30,1,60,1);
linea(30,-3,55,-3);
linea(25,-8,50,-8);

linea(-70,10,-24,10);
linea(-65,5,-28,5);
linea(-60,1,-30,1);
linea(-55,-3,-30,-3);
linea(-50,-8,-25,-8);
while(0<1){
	x=rand()%2;
	y=rand()%2;
	z=rand()%2;
	if(x!=y||z!=x){
		break;
	}
	}
glColor3f(x, y, z);
cir_bres(-69,-79,20);//circulo izquierdo
while(0<1){
	x=rand()%2;
	y=rand()%2;
	z=rand()%2;
	if(x!=y||z!=x){
		break;
	}
	}
glColor3f(x, y, z);
linea(-87,-72,-72,-60);
linea(-89,-79,-65,-60);
linea(-88,-84,-59,-61);
linea(-87,-89,-56,-65);
linea(-83,-92,-53,-69);
linea(-80,-96,-49,-72);
linea(-75,-98,-48,-77);
linea(-70,-99,-50,-83);
while(0<1){
	x=rand()%2;
	y=rand()%2;
	z=rand()%2;
	if(x!=y||z!=x){
		break;
	}
	}
glColor3f(x, y, z);
cir_bres(69,-79,20);//circulo derecho
linea(87,-72,72,-60);
linea(89,-79,65,-60);
linea(88,-84,59,-61);
linea(87,-89,56,-65);
linea(83,-92,53,-69);
linea(80,-96,49,-72);
linea(75,-98,48,-77);
linea(70,-99,50,-83);

//invertidas
linea(49,-72,72,-60);
linea(48,-79,81,-63);
linea(50,-88,87,-68);
linea(55,-95,90,-75);
linea(64,-99,88,-85);
glFlush();
}

void init()
{
glClearColor(0,0,0,0);
}
int main(int argc, char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(100, 100);
glutInitWindowSize(500, 500);
glutCreateWindow("Pedir que explique los codigos OpenGL");
init();
glutDisplayFunc(display);
glutReshapeFunc(reshape);
glutMainLoop();
return 0;
}
