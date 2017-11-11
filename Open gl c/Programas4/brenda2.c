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

void displayLin_Horizontales(){
 int i;
 glClear(GL_COLOR_BUFFER_BIT);
 glColor3f(1.0,1.0,1.0);
 glLoadIdentity();
 glBegin(GL_LINES);
 for(i=-100;i<=100;i+=3){
	glVertex3f(-100,i, 0.0);
	glVertex3f(100,i, 0.0);
 }
 glEnd();
 glFlush();
}

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glLineWidth(20);
	glColor3f(0.282f, 0.235f, 1.0f);
	glBegin(GL_LINE_STRIP);
	glVertex3f(-90,-20,0);
	glVertex3f(-90,20,0);
	glVertex3f(-70,20,0);
	glVertex3f(-70,5,0);
	glVertex3f(-75,0,0);
	glVertex3f(-90,0,0);
	glVertex3f(-75,0,0);
	glVertex3f(-70,-5,0);
	glVertex3f(-70,-20,0);
	glVertex3f(-90,-20,0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(-60,-20,0);
	glVertex3f(-60,20,0);
	glVertex3f(-45,20,0);
	glVertex3f(-40,15,0);
	glVertex3f(-40,0,0);
	glVertex3f(-60,0,0);
	glVertex3f(-50,0,0);
	glVertex3f(-40,-20,0);
	glEnd();	
	glBegin(GL_LINE_STRIP);
	glVertex3f(-30,-20,0);
	glVertex3f(-30,20,0);
	glVertex3f(-10,20,0);
	glVertex3f(-30,20,0);
	glVertex3f(-30,0,0);
	glVertex3f(-10,0,0);
	glVertex3f(-30,0,0);
	glVertex3f(-30,-20,0);
	glVertex3f(-10,-20,0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(0,-20,0);
	glVertex3f(0,20,0);
	glVertex3f(20,-20,0);
	glVertex3f(20,20,0);
		glEnd();
		glBegin(GL_LINE_STRIP);
	glVertex3f(30,-20,0);
	glVertex3f(30,20,0);
	glVertex3f(45,20,0);
	glVertex3f(50,15,0);
	glVertex3f(50,-15,0);
	glVertex3f(45,-20,0);
	glVertex3f(30,-20,0);
		glEnd();
		glBegin(GL_LINE_STRIP);
	glVertex3f(60,-20,0);
	glVertex3f(60,15,0);
	glVertex3f(65,20,0);
	glVertex3f(75,20,0);
	glVertex3f(80,15,0);
	glVertex3f(80,-20,0);
	glVertex3f(80,0,0);
	glVertex3f(60,0,0);
		glEnd();
		glColor3f(0.905f, 0.019f, 0.062f);
		glBegin(GL_POLYGON);
	glVertex3f(0,-80,0);
	glVertex3f(-20,-60,0);
	glVertex3f(-20,-50,0);
	glVertex3f(-15,-45,0);
	glVertex3f(-5,-45,0);
	glVertex3f(0,-55,0);
	glVertex3f(5,-45,0);
	glVertex3f(15,-45,0);
	glVertex3f(20,-50,0);
	glVertex3f(20,-60,0);
	glVertex3f(0,-80,0);
		glEnd();	
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
	glutCreateWindow("Hola");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
