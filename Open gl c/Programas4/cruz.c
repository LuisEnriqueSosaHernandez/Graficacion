
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
void display(){
	int x,y,z,i,iy=100,i2=-100,i2y=-100;
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
	cir_bres(-100,100,10);
	for(i=-100;i<=100;i+=10){
	cir_bres(i,iy,10);
	cir_bres(i2,i2y,10);
	iy-=10;
	i2+=10;
	i2y+=10;
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
	glutCreateWindow("Proyecto 3");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}

