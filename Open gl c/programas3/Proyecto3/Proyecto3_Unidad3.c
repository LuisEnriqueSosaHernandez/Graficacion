#include <stdio.h>
#include <math.h>
#include <GL/glut.h>
#include <unistd.h>

void display();
void specialKeys();
void reshape();

double rotate_x=0;
double rotate_y=0;
double rotate_z=0;
double escale_y=1.0; 
double escale_x=1.0;
double escale_z=1.0;
double translatez=0.0;
float z1=10, z2=-10;
int i=0;
float r=0, g=0.862, b=0, c1=0, c2=0.666, c3=0;
int empezar=0;
	
void reshape(int width, int height){
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1,1,1);	
	glLineWidth(1);
	glBegin(GL_LINES);
	glVertex3f(-100,0,0);
	glVertex3f(100,0,0);
	glVertex3f(0,-100,0);
	glVertex3f(0,100,0);
	glEnd();  
	glLoadIdentity();
	glOrtho(-100, 100, -100, 100, -100, 100);
	glMatrixMode(GL_MODELVIEW);	
	glEnd();
	glFlush();
	}
	
void pato(){///////////////////////Inicia Pato
	for(i=0; i<=360; i=i+90){
		glPushMatrix();
		glRotatef(i,0,0,1);
		glTranslatef(0,50,0);
		glScalef(.4,.4,.5);
		if(i==0){
			r=0.956;
			b=0.050;
			c1=0.956;
			c3=0.023;
			}
		if(i==90){
			r=0.886;
			b=0.133;
			c1=0.886;
			c3=0.109;
			}
		if(i==180){
			r=0.811;
			b=0.211;
			c1=0.811;
			c3=0.188;
			}
		if(i==270){
			r=0.741;
			b=0.290;
			c1=0.741;
			c3=0.266;
			}
		/////////////////////////////
		/////////PATO FRONTAL////////
		/////////////////////////////
		glColor3f(r,g,b);
		//Cabeza
		glBegin(GL_TRIANGLES);
		glVertex3f(0,40,z1);
		glVertex3f(-80,40,z1);
		glVertex3f(-40,80,z1);
		glEnd();
		//Cuello
		glBegin(GL_QUADS);
		glVertex3f(0,-5,z1);
		glVertex3f(-40,-5,z1);
		glVertex3f(-40,40,z1);
		glVertex3f( 0,40,z1);
		glEnd();
		//Pecho
		glBegin(GL_TRIANGLES);
		glVertex3f(-40,-5,z1);
		glVertex3f(0,-5,z1);
		glVertex3f(0,-40,z1);
		glEnd();
		//Cuerpo
		glBegin(GL_QUADS);
		glVertex3f(-0,-5,z1);
		glVertex3f(40,-5,z1);
		glVertex3f(40,-40,z1);
		glVertex3f(0,-40,z1);
		glEnd();
		//Cola
		glBegin(GL_TRIANGLES);
		glVertex3f(40,-5,z1);
		glVertex3f(75,-5,z1);
		glVertex3f(40,-40,z1);
		glEnd();
		//Pata Izquierda
		glColor3f(c1,c2,c3);
		glBegin(GL_TRIANGLES);
		glVertex3f(0,-40,z1);
		glVertex3f(-40,-80,z1);
		glVertex3f(0,-80,z1);
		glEnd();
		//Pata Derecha
		glBegin(GL_TRIANGLES);
		glVertex3f(40,-40,z1);
		glVertex3f(80,-40,z1);
		glVertex3f(80,-80,z1);
		glEnd();
		///////////////////////////
		////////PATO TRASERO///////
		///////////////////////////
		glColor3f(r,g,b);
		//Cabeza
		glBegin(GL_TRIANGLES);
		glVertex3f(0,40,z2);
		glVertex3f(-80,40,z2);
		glVertex3f(-40,80,z2);
		glEnd();
		//Cuello
		glBegin(GL_QUADS);
		glVertex3f(0,-5,z2);
		glVertex3f(-40,-5,z2);
		glVertex3f(-40,40,z2);
		glVertex3f( 0,40,z2);
		glEnd();
		//Pecho 
		glBegin(GL_TRIANGLES);
		glVertex3f(-40,-5,z2);
		glVertex3f(0,-5,z2);
		glVertex3f(0,-40,z2);
		glEnd();
		//Cuerpo 
		glBegin(GL_QUADS);
		glVertex3f(0,-5,z2);
		glVertex3f(40,-5,z2);
		glVertex3f(40,-40,z2);
		glVertex3f(0,-40,z2);
		glEnd();
		//Cola 
		glBegin(GL_TRIANGLES);
		glVertex3f(40,-5,z2);
		glVertex3f(75,-5,z2);
		glVertex3f(40,-40,z2);
		glEnd();
		//Pata Izquierda 
		glColor3f(c1,c2,c3);
		glBegin(GL_TRIANGLES);
		glVertex3f(0,-40,z2);
		glVertex3f(-40,-80,z2);
		glVertex3f(0,-80,z2);
		glEnd();
		//Pata Derecha
		glBegin(GL_TRIANGLES);
		glVertex3f(40,-40,z2);
		glVertex3f(80,-40,z2);
		glVertex3f(80,-80,z2);
		glEnd();
		///////////////////////////
		//RELLENO DE CAJA DE PATO//
		///////////////////////////
		//Relleno cabezza lado iquierdo
		glColor3f(r,g,b);
		glBegin(GL_QUADS);
		glVertex3f(-80,40,z1);
		glVertex3f(-40,80,z1);
		glVertex3f(-40,80,z2);
		glVertex3f(-80,40,z2);
		glEnd();
		//Relleno cabeza lado derecho
		glBegin(GL_QUADS);
		glVertex3f(-40,80,z2);
		glVertex3f(0,40,z2);
		glVertex3f(0,40,z1);
		glVertex3f(-40,80,z1);
		glEnd();
		//Relleno cabeza abajo
		glBegin(GL_QUADS);
		glVertex3f(-80,40,z1);
		glVertex3f(-80,40,z2);
		glVertex3f(-40,40,z2);
		glVertex3f(-40,40,z1);
		glEnd();
		//Relleno cuello lado izquierdo
		glBegin(GL_QUADS);
		glVertex3f(-40,40,z2);
		glVertex3f(-40,40,z1);
		glVertex3f(-40,-5,z1);
		glVertex3f(-40,-5,z2);
		glEnd();
		//Relleno cuello lado derecho
		glBegin(GL_QUADS);
		glVertex3f(0,40,z2);
		glVertex3f(0,40,z1);
		glVertex3f(0,-5,z1);
		glVertex3f(0,-5,z2);
		glEnd();
		//Relleno pecho -40 -5, 0 -40
		glBegin(GL_QUADS);
		glVertex3f(-40,-5,z2);
		glVertex3f(-40,-5,z1);
		glVertex3f(0,-40,z1);
		glVertex3f(0,-40,z2);
		glEnd();
		//Relleno cuerpo arriba
		glBegin(GL_QUADS);
		glVertex3f(0,-5,z2);
		glVertex3f(75,-5,z2);
		glVertex3f(75,-5,z1);
		glVertex3f(0,-5,z1);
		glEnd();
		//Relleno cola 
		glBegin(GL_QUADS);
		glVertex3f(75,-5,z2);
		glVertex3f(75,-5,z1);
		glVertex3f(40,-40,z1);
		glVertex3f(40,-40,z2);
		glEnd();
		//Relleno cuerpo abajo 
		glBegin(GL_QUADS);
		glVertex3f(0,-40,z2);
		glVertex3f(40,-40,z2);
		glVertex3f(40,-40,z1);
		glVertex3f(0,-40,z1);
		glEnd();
		//Relleno pata izquierda parte izquierda
		glColor3f(c1,c2,c3);
		glBegin(GL_QUADS);
		glVertex3f(0,-40,z2);
		glVertex3f(0,-40,z1);
		glVertex3f(-40,-80,z1);
		glVertex3f(-40,-80,z2);
		glEnd();
		//Relleno pata izquierda parte derecha
		glBegin(GL_QUADS);
		glVertex3f(0,-40,z2);
		glVertex3f(0,-40,z1);
		glVertex3f(0,-80,z1);
		glVertex3f(0,-80,z2);
		glEnd();
		//Relleno pata izquierda parte abajo
		glBegin(GL_QUADS);
		glVertex3f(0,-80,z2);
		glVertex3f(0,-80,z1);
		glVertex3f(-40,-80,z1);
		glVertex3f(-40,-80,z2);
		glEnd();
		//Relleno pata derecha parte arriba
		glBegin(GL_QUADS);
		glVertex3f(40,-40,z2);
		glVertex3f(80,-40,z2);
		glVertex3f(80,-40,z1);
		glVertex3f(40,-40,z1);
		glEnd();
		//Relleno pata derecha parte derecha 
		glBegin(GL_QUADS);
		glVertex3f(80,-40,z2);
		glVertex3f(80,-40,z1);
		glVertex3f(80,-80,z1);
		glVertex3f(80,-80,z2);
		glEnd();
		//Relleno pata derecha parte izquierda
		glBegin(GL_QUADS);
		glVertex3f(40,-40,z2);
		glVertex3f(40,-40,z1);
		glVertex3f(80,-80,z1);
		glVertex3f(80,-80,z2);
		glEnd();
		glPopMatrix();
		}
	}
void patito(){
	for(i=0; i<=360; i=i+90){
		glPushMatrix();
		glRotatef(i,0,0,1);
		glTranslatef(0,50,0);
		glScalef(.4,.4,.5);
		if(i==0){
			r=0.670;
			b=0.364;
			c1=0.670;
			c3=0.341;
			}
		if(i==90){
			r=0.596;
			b=0.443;
			c1=0.596;
			c3=0.419;
			}
		if(i==180){
			r=0.525;
			b=0.517;
			c1=0.525;
			c3=0.494;
			}
		if(i==270){
			r=0.450;
			b=0.588;
			c1=0.450;
			c3=0.564;
			}
		/////////////////////////////////////////
		//////////////PATO CHIQUITO//////////////
		/////////////////////////////////////////
		glColor3f(r,g,b);
		glTranslatef(125,0,0);
		glScalef(.5,.5,1);
		//Cabeza
		glBegin(GL_TRIANGLES);
		glVertex3f(0,40,z1);
		glVertex3f(-80,40,z1);
		glVertex3f(-40,80,z1);
		glEnd();
		//Cuello
		glBegin(GL_QUADS);
		glVertex3f(0,-5,z1);
		glVertex3f(-40,-5,z1);
		glVertex3f(-40,40,z1);
		glVertex3f( 0,40,z1);
		glEnd();
		//Pecho
		glBegin(GL_TRIANGLES);
		glVertex3f(-40,-5,z1);
		glVertex3f(0,-5,z1);
		glVertex3f(0,-40,z1);
		glEnd();
		//Cuerpo
		glBegin(GL_QUADS);
		glVertex3f(-0,-5,z1);
		glVertex3f(40,-5,z1);
		glVertex3f(40,-40,z1);
		glVertex3f(0,-40,z1);
		glEnd();
		//Cola
		glBegin(GL_TRIANGLES);
		glVertex3f(40,-5,z1);
		glVertex3f(75,-5,z1);
		glVertex3f(40,-40,z1);
		glEnd();
		//Pata Izquierda
		glColor3f(c1,c2,c3);
		glBegin(GL_TRIANGLES);
		glVertex3f(0,-40,z1);
		glVertex3f(-40,-80,z1);
		glVertex3f(0,-80,z1);
		glEnd();
		//Pata Derecha
		glBegin(GL_TRIANGLES);
		glVertex3f(40,-40,z1);
		glVertex3f(80,-40,z1);
		glVertex3f(80,-80,z1);
		glEnd();
		///////////////////////////
		////////PATO TRASERO///////
		///////////////////////////
		glColor3f(r,g,b);
		//Cabeza
		glBegin(GL_TRIANGLES);
		glVertex3f(0,40,z2);
		glVertex3f(-80,40,z2);
		glVertex3f(-40,80,z2);
		glEnd();
		//Cuello
		glBegin(GL_QUADS);
		glVertex3f(0,-5,z2);
		glVertex3f(-40,-5,z2);
		glVertex3f(-40,40,z2);
		glVertex3f( 0,40,z2);
		glEnd();
		//Pecho 
		glBegin(GL_TRIANGLES);
		glVertex3f(-40,-5,z2);
		glVertex3f(0,-5,z2);
		glVertex3f(0,-40,z2);
		glEnd();
		//Cuerpo 
		glBegin(GL_QUADS);
		glVertex3f(0,-5,z2);
		glVertex3f(40,-5,z2);
		glVertex3f(40,-40,z2);
		glVertex3f(0,-40,z2);
		glEnd();
		//Cola 
		glBegin(GL_TRIANGLES);
		glVertex3f(40,-5,z2);
		glVertex3f(75,-5,z2);
		glVertex3f(40,-40,z2);
		glEnd();
		//Pata Izquierda 
		glColor3f(c1,c2,c3);
		glBegin(GL_TRIANGLES);
		glVertex3f(0,-40,z2);
		glVertex3f(-40,-80,z2);
		glVertex3f(0,-80,z2);
		glEnd();
		//Pata Derecha
		glBegin(GL_TRIANGLES);
		glVertex3f(40,-40,z2);
		glVertex3f(80,-40,z2);
		glVertex3f(80,-80,z2);
		glEnd();
		///////////////////////////
		//RELLENO DE CAJA DE PATO//
		///////////////////////////
		//Relleno cabezza lado iquierdo
		glColor3f(r,g,b);
		glBegin(GL_QUADS);
		glVertex3f(-80,40,z1);
		glVertex3f(-40,80,z1);
		glVertex3f(-40,80,z2);
		glVertex3f(-80,40,z2);
		glEnd();
		//Relleno cabeza lado derecho
		glBegin(GL_QUADS);
		glVertex3f(-40,80,z2);
		glVertex3f(0,40,z2);
		glVertex3f(0,40,z1);
		glVertex3f(-40,80,z1);
		glEnd();
		//Relleno cabeza abajo
		glBegin(GL_QUADS);
		glVertex3f(-80,40,z1);
		glVertex3f(-80,40,z2);
		glVertex3f(-40,40,z2);
		glVertex3f(-40,40,z1);
		glEnd();
		//Relleno cuello lado izquierdo
		glBegin(GL_QUADS);
		glVertex3f(-40,40,z2);
		glVertex3f(-40,40,z1);
		glVertex3f(-40,-5,z1);
		glVertex3f(-40,-5,z2);
		glEnd();
		//Relleno cuello lado derecho
		glBegin(GL_QUADS);
		glVertex3f(0,40,z2);
		glVertex3f(0,40,z1);
		glVertex3f(0,-5,z1);
		glVertex3f(0,-5,z2);
		glEnd();
		//Relleno pecho -40 -5, 0 -40
		glBegin(GL_QUADS);
		glVertex3f(-40,-5,z2);
		glVertex3f(-40,-5,z1);
		glVertex3f(0,-40,z1);
		glVertex3f(0,-40,z2);
		glEnd();
		//Relleno cuerpo arriba
		glBegin(GL_QUADS);
		glVertex3f(0,-5,z2);
		glVertex3f(75,-5,z2);
		glVertex3f(75,-5,z1);
		glVertex3f(0,-5,z1);
		glEnd();
		//Relleno cola 
		glBegin(GL_QUADS);
		glVertex3f(75,-5,z2);
		glVertex3f(75,-5,z1);
		glVertex3f(40,-40,z1);
		glVertex3f(40,-40,z2);
		glEnd();
		//Relleno cuerpo abajo 
		glBegin(GL_QUADS);
		glVertex3f(0,-40,z2);
		glVertex3f(40,-40,z2);
		glVertex3f(40,-40,z1);
		glVertex3f(0,-40,z1);
		glEnd();
		//Relleno pata izquierda parte izquierda
		glColor3f(c1,c2,c3);
		glBegin(GL_QUADS);
		glVertex3f(0,-40,z2);
		glVertex3f(0,-40,z1);
		glVertex3f(-40,-80,z1);
		glVertex3f(-40,-80,z2);
		glEnd();
		//Relleno pata izquierda parte derecha
		glBegin(GL_QUADS);
		glVertex3f(0,-40,z2);
		glVertex3f(0,-40,z1);
		glVertex3f(0,-80,z1);
		glVertex3f(0,-80,z2);
		glEnd();
		//Relleno pata izquierda parte abajo
		glBegin(GL_QUADS);
		glVertex3f(0,-80,z2);
		glVertex3f(0,-80,z1);
		glVertex3f(-40,-80,z1);
		glVertex3f(-40,-80,z2);
		glEnd();
		//Relleno pata derecha parte arriba
		glBegin(GL_QUADS);
		glVertex3f(40,-40,z2);
		glVertex3f(80,-40,z2);
		glVertex3f(80,-40,z1);
		glVertex3f(40,-40,z1);
		glEnd();
		//Relleno pata derecha parte derecha 
		glBegin(GL_QUADS);
		glVertex3f(80,-40,z2);
		glVertex3f(80,-40,z1);
		glVertex3f(80,-80,z1);
		glVertex3f(80,-80,z2);
		glEnd();
		//Relleno pata derecha parte izquierda
		glBegin(GL_QUADS);
		glVertex3f(40,-40,z2);
		glVertex3f(40,-40,z1);
		glVertex3f(80,-80,z1);
		glVertex3f(80,-80,z2);
		glEnd();	
		glPopMatrix();
		}
	}
	
void giraPato(){
	glRotatef( rotate_y, 1.0, 1.0, 1.0 );	
	rotate_y+=.5;
	pato();
	}
	
void giraPatito(){
	
	glRotatef( rotate_x, 1.0, 0.0, 0.0 );	
	glRotatef( rotate_z, 0.0, 0.0, 1.0 );
	rotate_x+=.5;
	rotate_z+=.5;
	patito();
	}
	
void display(){
	if(empezar==0){
		glPushMatrix();
		glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
		glScalef( escale_x, escale_y, escale_z );
		giraPato();
		giraPatito();
		glPopMatrix();
		glFlush();
		glutSwapBuffers();
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
		break;/*
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
	void mouse(int button,int state,int x,int y){
		switch(button){
			case GLUT_LEFT_BUTTON:
				empezar=1;
			break;
			case GLUT_RIGHT_BUTTON:
				empezar=0;
			break;
		}
		glutPostRedisplay();
	} 
void init(){
	glClearColor(0,0,0,0);
	}
int main(int argc, char* argv[]){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(200, 200);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Patos");
	init();
	glEnable(GL_DEPTH_TEST);
	glutDisplayFunc(display);
	//glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
	}
