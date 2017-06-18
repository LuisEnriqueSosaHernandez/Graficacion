#include <stdio.h>
#include <math.h>
#include <GL/glut.h>
#include <unistd.h>

void display();
void specialKeys();
void reshape();
void keyboard();
void mouse();
void pintar();
void figuras();

double rotate_x=0;
double rotate_y=0;
double rotate_z=0;
double escale_y=1.0; 
double escale_x=1.0;
double escale_z=1.0;
double translatez=0.0;
float z1=60, z2=-60;
int i=0;
int empezar=0;
float velocidad=1;
	
void reshape(int width, int height){
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glOrtho(-100, 100, -100, 100, -100, 100);
	glMatrixMode(GL_MODELVIEW);	
	glEnd();
	glFlush();
	}
	
void figuras(){
		//Triangulo frontal
		glPushMatrix();
		glBegin(GL_TRIANGLES);
		glColor3f(.855,.858,.858);
		glVertex3f(-60,0,z1);
		glVertex3f(60,0,z1);
		glVertex3f(0,85,0);
		glEnd();
		//Triangulo trasero
		glBegin(GL_TRIANGLES);
		glColor3f(.855,.858,.858);
		glVertex3f(-60,0,z2);
		glVertex3f(60,0,z2);
		glVertex3f(0,85,0);
		glEnd();
		//Triangulo derecha
		glBegin(GL_TRIANGLES);
		glColor3f(0.713,0.713,0.713);
		glVertex3f(0,85,0);
		glVertex3f(60,0,z1);
		glVertex3f(60,0,z2);
		glEnd();
		//Triangulo izquierda
		glBegin(GL_TRIANGLES);
		glColor3f(0.713,0.713,0.713);
		glVertex3f(0,85,0);
		glVertex3f(-60,0,z1);
		glVertex3f(-60,0,z2);
		//Triangulo frontal abajo
		glBegin(GL_TRIANGLES);
		glColor3f(0.525,0.525,0.525);
		glVertex3f(0,-50,0);
		glVertex3f(60,0,z1);
		glVertex3f(-60,0,z1);
		glEnd();
		//Triangulo trasera abajo 
		glBegin(GL_TRIANGLES);
		glColor3f(0.525,0.525,0.525);
		glVertex3f(0,-50,0);
		glVertex3f(60,0,z2);
		glVertex3f(-60,0,z2);
		glEnd();
		//Triangulo derecha abajo
		glBegin(GL_TRIANGLES);
		glColor3f(.855,.858,.858);
		glVertex3f(0,-50,0);
		glVertex3f(60,0,z1);
		glVertex3f(60,0,z2);
		glEnd();
		//Triangulo izquierda abajo
		glBegin(GL_TRIANGLES);
		glColor3f(.855,.858,.858);
		glVertex3f(0,-50,0);
		glVertex3f(-60,0,z1);
		glVertex3f(-60,0,z2);
		glEnd();
				
		glPopMatrix();
	}
	void pintar(){
		
		glPushMatrix();
		glColor3f(0,1,0);
		glTranslatef(-50,0,0);
	    glScalef(0.6,0.6,0.6);
	    glRotatef( rotate_x, 1.0, 0.0, 0.0 );
		figuras();
		glPopMatrix();
		glPushMatrix();
		glColor3f(0,1,0);
		glTranslatef(50,50,0);
		 glScalef(0.45,0.45,0.45);
		 glRotatef( rotate_y, 0.0, 1.0, 0.0 );
		figuras();
		glPopMatrix();
		glPushMatrix();
		glColor3f(0,1,0);
		glTranslatef(50,-5,0);
		 glScalef(0.35,0.35,0.35);
		 glRotatef( rotate_z, 0.0, 0.0, 1.0 );
		figuras();
		glPopMatrix();
		glPushMatrix();
		glColor3f(0,1,0);
		glTranslatef(50,-50,0);
		 glScalef(0.25,0.25,0.25);
		 glRotatef( rotate_x, 1.0, 0.0, 0.0 );
		 glRotatef( rotate_y, 0.0, 1.0, 0.0 );
		 glRotatef( rotate_z, 0.0, 0.0, 1.0 );
		figuras();
		glPopMatrix();
	
	}
	
void display(){
		glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
		glPushMatrix();
		pintar();
		glPopMatrix();
		
		glFlush();
		
		glutSwapBuffers();
		
		if(empezar==1){
			rotate_x+=velocidad;
			rotate_y+=velocidad;
			rotate_z+=velocidad;
		}
		
		glutPostRedisplay();

}
	void mouse(int button,int state,int x,int y){
		switch(button){
			case GLUT_LEFT_BUTTON:
				empezar=1;
				velocidad+=.4;
			break;
			case GLUT_RIGHT_BUTTON:
				empezar=0;
				velocidad=1;
			break;
		}
		glutPostRedisplay();
	} 
/*void keyboard( unsigned char key, int x, int y ){
	switch(key){
		case '+':
		escale_x+=0.5;
		escale_y+=0.5;
		escale_z+=0.5;
		break;
		case '-':
		escale_x-=0.5;
		escale_y-=0.5;
		escale_z-=0.5;
		break;
		case 'q':
		rotate_x-=5;
		break;
		case 'Q':
		rotate_x-=5;
		break;
		case 'w':
		rotate_x+=5;
		break;
		case 'W':
		rotate_x+=5;
		break;
	  	case 'a':
		rotate_y-=5;
		break;
		case 'A':
		rotate_y-=5;
		break;
		case 's':
		rotate_y+=5;
		break;
		case 'S':
		rotate_y+=5;
		break;
		case 'z':
		rotate_z+=5;
		break;
		case 'Z':
		rotate_z+=5;
		break;
		case 'x':
		rotate_z-=5;
		break;
		case 'X':
		rotate_z-=5;
		break;
		}
	glutPostRedisplay();
	}*/
void init(){
	glClearColor(0,0,0,0);
	}
int main(int argc, char* argv[]){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(200, 200);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Triangulo");
	init();
	glEnable(GL_DEPTH_TEST);
	glutDisplayFunc(display);
	//glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
	}
