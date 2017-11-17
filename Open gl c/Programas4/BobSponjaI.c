#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

void reshape(int width, int height){
glViewport(0,0,width,height);
	glMatrixMode(GL_PROJECTION);
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glOrtho(-100,100,-100,100,-100,100);
	glMatrixMode(GL_MODELVIEW);
}
void fondo(){
	glColor3f(0.66,0.50,0.27);
	glBegin(GL_QUADS);
	glVertex3f(-100,-100,0);
	glVertex3f(50,-100,0);
	glVertex3f(50,50,0);
	glVertex3f(-100,50,0);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
	glVertex3f(-100,-100,0);
	glVertex3f(-0,-100,0);
	glVertex3f(50,50,0);
	glVertex3f(0,50,0);
	glEnd();
	glColor3f(0.0, 0.43, 0.97);
	glBegin(GL_QUADS);
	glVertex3f(-100,50,0);
	glVertex3f(50,50,0);
	glVertex3f(50,100,0);
	glVertex3f(-100,100,0);
	glEnd();
	glColor3f(1, 1, 1);
	int i=100;
	while(i>0){
		int x=rand () % 150-100;
		int y=rand () % 50+50;
	glBegin(GL_POINTS);
	glVertex3f(x,y,0);
	glEnd();
	i--;
}
	
}

void esponja(){
glClearColor(1,1,1,1);
	glLineWidth(5);
	//Ojos
	glColor3f(0.439216,0.858824,0.858824);
	glBegin(GL_QUADS);
	glVertex3f(20,50,0);
	glVertex3f(20,60,0);
	glVertex3f(30,60,0);
	glVertex3f(30,50,0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(-20,60,0);
	glVertex3f(-10,60,0);
	glVertex3f(-10,50,0);
	glVertex3f(-20,50,0);
	glEnd();
	
	//Boca
	glColor3f(0,0,0);
	glBegin(GL_QUADS);
	glVertex3f(-20,20,0);
	glVertex3f(-20,30,0);
	glVertex3f(-10,30,0);
	glVertex3f(-10,20,0);
	glEnd();
	glColor3f(0,0,0);
	glBegin(GL_QUADS);
	glVertex3f(-10,10,0);
	glVertex3f(-10,20,0);
	glVertex3f(20,20,0);
	glVertex3f(20,10,0);
	glEnd();
	glColor3f(0,0,0);
	glBegin(GL_QUADS);
	glVertex3f(20,20,0);
	glVertex3f(20,30,0);
	glVertex3f(30,30,0);
	glVertex3f(30,20,0);
	glEnd();
	//Corbata
	glColor3f(1,0,0);
	glBegin(GL_QUADS);
	glVertex3f(0,0,0);
	glVertex3f(10,0,0);
	glVertex3f(10,-20,0);
	glVertex3f(0,-20,0);
	glEnd();
	//Zapatos
	glColor3f(0.36,0.25,0.20);
	glBegin(GL_QUADS);
	glVertex3f(-30,-70,0);
	glVertex3f(0,-70,0);
	glVertex3f(0,-80,0);
	glVertex3f(-30,-80,0);
	glEnd();
	glColor3f(0.36,0.25,0.2);
	glBegin(GL_QUADS);
	glVertex3f(10,-70,0);
	glVertex3f(40,-70,0);
	glVertex3f(40,-80,0);
	glVertex3f(10,-80,0);
	glEnd();
	//Piernas
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(-20,-50,0);
	glVertex3f(0,-50,0);
	glVertex3f(0,-70,0);
	glVertex3f(-20,-70,0);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(10,-50,0);
	glVertex3f(30,-50,0);
	glVertex3f(30,-70,0);
	glVertex3f(10,-70,0);
	glEnd();
	//Brazos
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(-50,-10,0);
	glVertex3f(-40,-10,0);
	glVertex3f(-40,-40,0);
	glVertex3f(-50,-40,0);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(50,-10,0);
	glVertex3f(60,-10,0);
	glVertex3f(60,-40,0);
	glVertex3f(50,-40,0);
	glEnd();
	//Pantalon
	glColor3f(0.36,0.25,0.2);
	glBegin(GL_QUADS);
	glVertex3f(-40,-10,0);
	glVertex3f(0,-10,0);
	glVertex3f(0,-40,0);
	glVertex3f(-40,-40,0);
	glEnd();
	glColor3f(0.36,0.25,0.2);
	glBegin(GL_QUADS);
	glVertex3f(0,-20,0);
	glVertex3f(10,-20,0);
	glVertex3f(10,-40,0);
	glVertex3f(0,-40,0);
	glEnd();
	glColor3f(0.36,0.25,0.2);
	glBegin(GL_QUADS);
	glVertex3f(10,-10,0);
	glVertex3f(50,-10,0);
	glVertex3f(50,-40,0);
	glVertex3f(10,-40,0);
	glEnd();
	glColor3f(0.36,0.25,0.2);
	glBegin(GL_QUADS);
	glVertex3f(10,-40,0);
	glVertex3f(30,-40,0);
	glVertex3f(30,-50,0);
	glVertex3f(10,-50,0);
	glEnd();
	glColor3f(0.36,0.25,0.2);
	glBegin(GL_QUADS);
	glVertex3f(-20,-40,0);
	glVertex3f(0,-40,0);
	glVertex3f(0,-50,0);
	glVertex3f(-20,-50,0);
	glEnd();
	//Cara
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(-40,10,0);
	glVertex3f(50,10,0);
	glVertex3f(50,0,0);
	glVertex3f(-40,0,0);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(-40,20,0);
	glVertex3f(-10,20,0);
	glVertex3f(-10,10,0);
	glVertex3f(-40,10,0);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(20,20,0);
	glVertex3f(50,20,0);
	glVertex3f(50,10,0);
	glVertex3f(20,10,0);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(-10,30,0);
	glVertex3f(20,30,0);
	glVertex3f(20,20,0);
	glVertex3f(-10,20,0);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(-40,40,0);
	glVertex3f(50,40,0);
	glVertex3f(50,30,0);
	glVertex3f(-40,30,0);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(-40,80,0);
	glVertex3f(50,80,0);
	glVertex3f(50,70,0);
	glVertex3f(-40,70,0);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(0,70,0);
	glVertex3f(10,70,0);
	glVertex3f(10,40,0);
	glVertex3f(0,40,0);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(-40,70,0);
	glVertex3f(-30,70,0);
	glVertex3f(-30,40,0);
	glVertex3f(-40,40,0);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(-40,30,0);
	glVertex3f(-20,30,0);
	glVertex3f(-20,20,0);
	glVertex3f(-40,20,0);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(40,70,0);
	glVertex3f(50,70,0);
	glVertex3f(50,30,0);
	glVertex3f(40,30,0);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(30,30,0);
	glVertex3f(50,30,0);
	glVertex3f(50,20,0);
	glVertex3f(30,20,0);
	glEnd();
}
void display(void)
{ 
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	fondo();
	glLoadIdentity();
	glScalef( .5, .5, 1.0 ); 
	glTranslatef(-75,-100,0);
	esponja();
	glLoadIdentity();
	glScalef( .4, .4, 1.0 ); 
	glTranslatef(50,150,0);
	esponja();
	glLoadIdentity();
	glScalef( .3, .3, 1.0 ); 
	glTranslatef(250,200,0);
	glRotatef(180,0.0,0.0,1.0);
	esponja();
	glLoadIdentity();
	glScalef( .25, .25, 1.0 ); 
	glTranslatef(300,-200,0);
	glRotatef(290,0.0,0.0,1.0);
	esponja();
	
glFlush();
};
void init()
{
glClearColor(1,1,1,1);
}
int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(200, 200);
	glutInitWindowSize(600, 600);
	glutCreateWindow("Bob Esponja :)");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
//cafe (0.647059,0.164706,0.164706)
//azul (0.74902,0.847059,0.847059)
