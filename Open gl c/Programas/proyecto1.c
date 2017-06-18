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


void display(){
	int x,y,z,a,b,c;
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
	
	while(0<1){//eleccion de color random
	a=rand()%2;
	b=rand()%2;
	c=rand()%2;
	if(a!=x||b!=y||c!=z){
		if(a!=0){
			break;
		}
		
	}
	}
	
	for(int i=-100;i<=100;i+=2){//lineas
		glColor3f(x,y,z);
		linea(-100,100,i,-100);
		glColor3f(a,b,c);
		linea(-100,100,100,i);
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
	glutCreateWindow("Proyecto 1");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}

