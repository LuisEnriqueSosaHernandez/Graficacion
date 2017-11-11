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
void linea_bress(int x1, int y1, int x2, int y2)
{ int dx,dy,x,y,x_end,y_end,p,const1,const2, in;
dx=abs(x1-x2);
dy=abs(y1-y2);
glBegin(GL_POINTS);
if (dy>dx)
{ p=2*dx-dy;
const1=2*dx;
const2=2*(dx-dy);
if (y1>y2)
{ x=x2; y=y2; y_end=y1;
if(x2<x1) in=1; else in=-1;
}
else
{ x=x1; y=y1; y_end=y2;
if(x2<x1) in=-1; else in=1;
};
glVertex3f(x,y,0);
while(y<y_end)
{ y++;
if(p<0) {p+=const1;} else { x+=in; p+=const2;};
glVertex3f(x,y,0);
};
}
else
{ p=2*dy-dx;
const1=2*dy;
const2=2*(dy-dx);
if (x1>x2)
{ x=x2; y=y2; x_end=x1;
if(y2<y1) in=1; else in=-1;
}
else
{ x=x1; y=y1; x_end=x2;
if(y2<y1) in=-1; else in=1;
};
glVertex3f(x,y,0);
while(x<x_end)
{ x++;
if(p<0) {p+=const1;} else { y+=in; p+=const2;};
glVertex3f(x,y,0);
};
}
glEnd();
}
void DibujaCuadricula(){
int i;
int x1=-99,x2=-94;
int y1=99,ye1=99;
int y2=94;

for(i=0;i<800;i++){
	   if(x2>100){
		   x1=-99;
		   x2=-94;
		   y1-=5;
		   ye1-=10;
		   y2=ye1-5;
		   
		   
		   
}
		linea_bress(x1,y1,x2,y1);
		linea_bress(x1,ye1,x1,y2);
		linea_bress(x2,ye1,x2,y2);
	 
	   
	  x1+=10;
	  x2+=10;
	  
	}
}
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0,1.0,1.0);
glLoadIdentity();
DibujaCuadricula();
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
glutCreateWindow("Circulos con Puntos en OpenGL");
init();
glutDisplayFunc(display);
glutReshapeFunc(reshape);
glutMainLoop();
return 0;
}
