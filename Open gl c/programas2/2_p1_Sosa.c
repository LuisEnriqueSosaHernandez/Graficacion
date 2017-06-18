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

void nombre(){
	float out=(1.0f/255)*135;
	float out2=(1.0f/255)*36;
	float out3=(1.0f/255)*141;
	 glColor3f(out,out2,out3);
	
	glLineWidth(8);
	glBegin(GL_LINES);
	
glVertex3f(-50,20,0);
glVertex3f(-50,0,0);

glVertex3f(-50,0,0);
glVertex3f(-30,0,0);

glVertex3f(-20,20,0);
glVertex3f(-20,0,0);

glVertex3f(-20,0,0);
glVertex3f(-0,0,0);

glVertex3f(0,20,0);
glVertex3f(0,0,0);

glVertex3f(10,20,0);
glVertex3f(10,0,0);

glVertex3f(20,20,0);
glVertex3f(20,10,0);

glVertex3f(20,20,0);
glVertex3f(40,20,0);

glVertex3f(20,10,0);
glVertex3f(40,10,0);

glVertex3f(40,10,0);
glVertex3f(40,0,0);

glVertex3f(20,0,0);
glVertex3f(40,0,0);

glEnd();

glEnd();
}



void display(){
	GLfloat angulo;
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	nombre();
	
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
