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
glFlush();
}
void display()
{ GLfloat angulo;
glClear(GL_COLOR_BUFFER_BIT);

glLoadIdentity();

glColor3f(0.5f, 0.0f, 1.0f);
for(int i=-89;i<=99;i+=20){
elipse(i,87,9,7);
}
glColor3f(1.0f, 0.0f, 0.0f);
for(int i=-89;i<=99;i+=20){
elipse(i,64,9,7);
}
glColor3f(0.0f, 1.0f, 0.0f);
for(int i=-89;i<=99;i+=20){
elipse(i,42,9,7);
}
glColor3f(0.5f, 0.0f, 1.0f);
for(int i=-89;i<=99;i+=20){
elipse(i,20,9,7);
}
glColor3f(1.0f, 0.0f, 0.0f);
for(int i=-89;i<=99;i+=20){
elipse(i,-2,9,7);
}
glColor3f(0.0f, 1.0f, 0.0f);
for(int i=-89;i<=99;i+=20){
elipse(i,-24,9,7);
}
glColor3f(0.5f, 0.0f, 1.0f);
for(int i=-89;i<=99;i+=20){
elipse(i,-46,9,7);
}
glColor3f(1.0f, 0.0f, 0.0f);
for(int i=-89;i<=99;i+=20){
elipse(i,-68,9,7);
}
glColor3f(0.0f, 1.0f, 0.0f);
for(int i=-89;i<=99;i+=20){
elipse(i,-90,9,7);
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
glutCreateWindow("Elipses con Puntos en OpenGL");
init();
glutDisplayFunc(display);
glutReshapeFunc(reshape);
glutMainLoop();
return 0;
}
