#include <GL/glut.h>
#include <math.h>
#include <stdio.h>

void reshape(int width, int height)
{
glViewport(0, 0, width, height);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-100, 100, -100, 100, -100, 100);
glMatrixMode(GL_MODELVIEW);
}


void cir_gral(int xc, int yc, int r )
{ int x; double y1, y2;
glBegin(GL_POINTS);
for(x=xc-r;x<=xc+r;x+=2)
{y1 = yc + sqrt ((float)r *r - (x-xc)* (x-xc));
y2 = yc - sqrt ((float)r *r - (x-xc)* (x-xc));
glVertex3f(x,y1, 0.0);
glVertex3f(x,y2, 0.0);
}
glEnd();
glFlush();
}


void cir_incremen(int xc, int yc, int r )
{ float dt,cc,cs,x,y,t; int tx,ty;
glBegin(GL_POINTS);
dt=(float)1/r;
cc=cos(dt); cs=sin(dt);
x=0; y=r;
while(y>=abs(x))
{ tx=round(x),ty=round(y);
glVertex3f(xc+tx,yc+ty, 0.0); glVertex3f(xc-tx,yc+ty,
0.0);
glVertex3f(xc+tx,yc-ty, 0.0); glVertex3f(xc-tx,yc-ty,
0.0);
glVertex3f(xc+ty,yc+tx, 0.0); glVertex3f(xc+ty,yc-tx,
0.0);
glVertex3f(xc-ty,yc+tx, 0.0); glVertex3f(xc-ty,yc-tx,
0.0);
t=x;
x=x*cc-y*cs;
y=y*cc+t*cs;
}
glEnd();
glFlush();
}


void cir_bres(int xc, int yc, int r){ 
	int p,x,y;
x=0; y=r; p=(float)5/4-r;
glBegin(GL_POINTS);
while(y>x)
{ glVertex3f(xc+x,yc+y,0.0); glVertex3f(xc-x,yc+y,0.0);
glVertex3f(xc+x,yc-y,0.0); glVertex3f(xc-x,yc-y,0.0);
glVertex3f(xc+y,yc+x,0.0); glVertex3f(xc+y,yc-x,0.0);
glVertex3f(xc-y,yc+x,0.0); glVertex3f(xc-y,yc-x,0.0);
if (p<0) {p+=2*x+3;}
else { p+=2*(x-y)+5; y--;};
x++;
}
glEnd();
glFlush();
}


void display(){ 
	GLfloat angulo;
glClear(GL_COLOR_BUFFER_BIT);
glLoadIdentity();
glColor3f(0.5f, 0.0f, 1.0f);
for(int i=-89;i<=99;i+=20){
cir_bres(i,87,9);
}
glColor3f(1.0f, 0.0f, 0.0f);
for(int i=-89;i<=99;i+=20){
cir_bres(i,64,9);
}
glColor3f(0.0f, 1.0f, 0.0f);
for(int i=-89;i<=99;i+=20){
cir_bres(i,42,9);
}
glColor3f(0.5f, 0.0f, 1.0f);
for(int i=-89;i<=99;i+=20){
cir_bres(i,20,9);
}
glColor3f(1.0f, 0.0f, 0.0f);
for(int i=-89;i<=99;i+=20){
cir_bres(i,-2,9);
}
glColor3f(0.0f, 1.0f, 0.0f);
for(int i=-89;i<=99;i+=20){
cir_bres(i,-24,9);
}
glColor3f(0.5f, 0.0f, 1.0f);
for(int i=-89;i<=99;i+=20){
cir_bres(i,-46,9);
}
glColor3f(1.0f, 0.0f, 0.0f);
for(int i=-89;i<=99;i+=20){
cir_bres(i,-68,9);
}
glColor3f(0.0f, 1.0f, 0.0f);
for(int i=-89;i<=99;i+=20){
cir_bres(i,-90,9);
}
glFlush();
};


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
glutCreateWindow("Practica 4");
init();
glutDisplayFunc(display);
glutReshapeFunc(reshape);
glutMainLoop();
return 0;
}



