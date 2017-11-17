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
void dibujo(){
	glColor3f(0.66,0.50,0.27);
	glBegin(GL_QUADS);
	glVertex3f(-100,-100,0);
	glVertex3f(50,-100,0);
	glVertex3f(50,50,0);
	glVertex3f(-100,50,0);
	glEnd();
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex3f(-100,-100,0);
	glVertex3f(-0,-100,0);
	glVertex3f(50,50,0);
	glVertex3f(0,50,0);
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
	glVertex3f(-50,-75,0);
	glVertex3f(-25,-75,0);
	glVertex3f(0,-25,0);
	glVertex3f(-25,-25,0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(-15,0,0);
	glVertex3f(10,0,0);
	glVertex3f(30,40,0);
	glVertex3f(10,40,0);
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
void minion(){
glLineWidth(3);
	glColor3f(0.5f, 0.0f, 1.0f);
	//brazo derecho
	glColor3f(10,1,0);
glBegin(GL_POLYGON);
glVertex3f(50,-20,0);
glVertex3f(80,10,0);
glVertex3f(80,30,0);
glVertex3f(50,0,0);
glEnd();
//brazo izquierdo
glColor3f(10,1,0);
glBegin(GL_POLYGON);
glVertex3f(-80,-40,0);
glVertex3f(-50,-20,0);
glVertex3f(-50,0,0);
glVertex3f(-80,-20,0);

glEnd();

//mano derecha
glColor3f(0,0,0);
glBegin(GL_POLYGON);
glVertex3f(80,10,0);
glVertex3f(90,20,0);
glVertex3f(90,40,0);
glVertex3f(80,30,0);

glEnd();

//mano izquierda
glColor3f(0,0,0);
glBegin(GL_POLYGON);
glVertex3f(-90,-50,0);
glVertex3f(-80,-40,0);
glVertex3f(-80,-20,0);
glVertex3f(-90,-30,0);

glEnd();
	//Cuerpo
	glColor3f(1,1,0);
glBegin(GL_QUADS);
glVertex3f(-50,-40,0);
glVertex3f(50,-40,0);
glVertex3f(50,80,0);
glVertex3f(-50,80,0);
glEnd();
	
	//pantalon
glColor3f(0.2,0.1,1.2);
glBegin(GL_QUADS);
glVertex3f(-50,-80,0);
glVertex3f(50,-80,0);
glVertex3f(50,-40,0);
glVertex3f(-50,-40,0);
glEnd();
	
		//pierna izquierda
glColor3f(0.2,0.10,1.5);
glBegin(GL_QUADS);
glVertex3f(-40,-90,0);
glVertex3f(-10,-90,0);
glVertex3f(-10,-80,0);
glVertex3f(-40,-80,0);
glEnd();

//pierna derecha
glColor3f(0.2,0.10,1.5);
glBegin(GL_QUADS);
glVertex3f(10,-90,0);
glVertex3f(40,-90,0);
glVertex3f(40,-80,0);
glVertex3f(10,-80,0);
glEnd();
	
	//pie izquierdo
glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex3f(-45,-100,0);
glVertex3f(-5,-100,0);
glVertex3f(-5,-90,0);
glVertex3f(-45,-90,0);
glEnd();

//pie derecho
glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex3f(5,-100,0);
glVertex3f(45,-100,0);
glVertex3f(45,-90,0);
glVertex3f(5,-90,0);
glEnd();
	
	//antifaz
glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex3f(-50,40,0);
glVertex3f(50,40,0);
glVertex3f(50,50,0);
glVertex3f(-50,50,0);
glEnd();


//ojo
glColor3f(1,1,1);
glBegin(GL_QUADS);
glVertex3f(-10,35,0);
glVertex3f(10,35,0);
glVertex3f(10,55,0);
glVertex3f(-10,55,0);

	glEnd();
//pupila
glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex3f(-5,40,0);
glVertex3f(5,40,0);
glVertex3f(5,50,0);
glVertex3f(-5,50,0);
glEnd();
	
//antifaz contorno
glColor3f(0.68,0.67,0.67);
glBegin(GL_LINE_LOOP);
	glVertex3f(-20,30,0);
	glVertex3f(20,30,0);
	glVertex3f(20,60,0);
	glVertex3f(-20,60,0);
	glEnd();
	
	//boca
	glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex3f(-20,-10,0);
glVertex3f(0,-20,0);
glVertex3f(20,-10,0);
glVertex3f(20,0,0);
glVertex3f(-20,0,0);
glEnd();

//lengua
	glColor3f(.94,.33,44);
glBegin(GL_POLYGON);
glVertex3f(-5,-10,0);
glVertex3f(-5,-20,0);
glVertex3f(0,-30,0);
glVertex3f(5,-20,0);
glVertex3f(5,-10,0);
glEnd();
	
	//dientes
	glColor3f(0,0,0);
glBegin(GL_LINE_STRIP);
	glVertex3f(-20,-10,0);
	glVertex3f(20,-10,0);
	
	glEnd();
	
	//logo
	glColor3f(0,0,0);
glBegin(GL_LINE_STRIP);
	glVertex3f(10,-50,0);
	glVertex3f(-10,-50,0);
	glVertex3f(-10,-70,0);
	glVertex3f(10,-70,0);
	glVertex3f(10,-60,0);
	glVertex3f(0,-60,0);
	
	glEnd();
	
	//cabello
	glColor3f(0,0,0);
glBegin(GL_LINE_STRIP);
	glVertex3f(0,80,0);
	glVertex3f(-10,90,0);
	glEnd();
	glColor3f(0,0,0);
glBegin(GL_LINE_STRIP);
	glVertex3f(0,80,0);
	glVertex3f(-10,100,0);
	glEnd();
	glColor3f(0,0,0);
glBegin(GL_LINE_STRIP);
	glVertex3f(0,80,0);
	glVertex3f(0,110,0);
	glEnd();
	glColor3f(0,0,0);
glBegin(GL_LINE_STRIP);
	glVertex3f(0,80,0);
	glVertex3f(10,100,0);
	glEnd();
	glColor3f(0,0,0);
glBegin(GL_LINE_STRIP);
	glVertex3f(0,80,0);
	glVertex3f(10,90,0);
	glEnd();
	
}
void display(){
	
	
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	dibujo();
	glLoadIdentity();
	glScalef( .5, .5, 1.0 ); 
	glTranslatef(-75,-100,0);
	minion();
	glLoadIdentity();
	glScalef( .4, .4, 1.0 ); 
	glTranslatef(50,150,0);
	minion();
	glLoadIdentity();
	glScalef( .3, .3, 1.0 ); 
	glTranslatef(250,200,0);
	glRotatef(320,0.0,0.0,1.0);
	minion();
	glLoadIdentity();
	glScalef( .25, .25, 1.0 ); 
	glTranslatef(300,-200,0);
	glRotatef(30,0.0,0.0,1.0);
	minion();
	glFlush();
};

void init(){
 glClearColor(1,1,1,1);
}

int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(600, 600);
	glutCreateWindow("Minion");
	init();
	glutReshapeFunc(reshape);
	glutDisplayFunc(display);
	
	glutMainLoop();
	return 0;
}
