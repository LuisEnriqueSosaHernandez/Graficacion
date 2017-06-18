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
double escala=.6;
double escale_y=1.0; 
double escale_x=1.0;
double escale_z=1.0;
double translatez=0.0;
float z1=45, z2=-45;
int i=0;
float r=0, g=0.862, b=0, c1=0, c2=0.666, c3=0;
	
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
	
void figura(){
		glPushMatrix();
		//glTranslatef(-50,0,0);
		//glScalef(escala,escala,0);		
		//escala-=.15;
		//Triangulo-cara atras
		glColor3f(.75,.75,.75);
		glBegin(GL_TRIANGLES);
		//punta superior
        	glVertex3f(0,45,z2);
		//punta inferior izquierda
	        glVertex3f(-60,-45,z2);
		//punta inferior derecha
	        glVertex3f(60,-45,z2);
		glEnd();
		
		//triangulo-cara derecha

		glColor3f(0.170,0.170,0.170);
		glBegin(GL_TRIANGLES);
		//punta central
		glVertex3f(0,0,30);
		//punta superior
        	glVertex3f(0,45,z2);
		//punta inferior derecha
	        glVertex3f(60,-45,z2);
	        glEnd();

		//triangulo-cara abajo

		glColor3f(0.300,0.300,0.300);
		glBegin(GL_TRIANGLES);
		//punto central		
		glVertex3f(0,0,30);
		//punta inferior derecha
	        glVertex3f(60,-45,z2);
		//punta inferior izquierda
	        glVertex3f(-60,-45,z2);
		glEnd();
		
		//triangulo-cara izquierda
		glColor3f(0.500,0.500,0.500);
		glBegin(GL_TRIANGLES);
		//punto central	
		glVertex3f(0,0,30);
		//punta superior
        	glVertex3f(0,45,z2);
		//punta inferior izquierda
	        glVertex3f(-60,-45,z2);
		glEnd();

//---------------Invertido
		
		//Trifuerza cara delantera		
				
		//tri izq
		glColor3f(0.650,0.650,0.650);
		glBegin(GL_TRIANGLES);
		glVertex3f(-50,18,0);
		glVertex3f(0,18,0);
        glVertex3f(-24,-18,0);
		glEnd();

		//tri derecha
		glBegin(GL_TRIANGLES);
		glVertex3f(50,18,0);
		glVertex3f(0,18,0);
        	glVertex3f(24,-18,0);
		glEnd();

		//tri abajo
		glBegin(GL_TRIANGLES);
		glVertex3f(-24,-18,0);
		glVertex3f(24,-18,0);
		glVertex3f(0,-55,0);
		glEnd();
		
		//tri pared arriba
		glBegin(GL_TRIANGLES);
		glVertex3f(-50,18,0);
		glVertex3f(0,0,-80);
        glVertex3f(50,18,0);
		glEnd();

		//tri pared derecha
		glBegin(GL_TRIANGLES);
		glVertex3f(50,18,0);
		glVertex3f(0,0,-80);
        glVertex3f(0,-55,0);
		glEnd();

		//tri abajo
		glBegin(GL_TRIANGLES);
		glVertex3f(-50,18,0);
		glVertex3f(0,0,-80);
		glVertex3f(0,-55,0);
		glEnd();
		glPopMatrix();
	}
	/*void figura1(){
		glPushMatrix();
		int x=50;
		int y=65;
		int i;
		for(i=0; i<=2; i++){
		
		if(i==0){
				
		}
		if(i==1){
		x=50;
		y=-10;
		}
		if(i==2){
		x=50;
		y=-75;
		}
		glTranslatef(x,y,0);
		glScalef(escala,escala,0);		
		escala-=.10;
		//Triangulo-cara atras
		glColor3f(.75,.75,.75);
		glBegin(GL_TRIANGLES);
		//punta superior
        	glVertex3f(0,45,z2);
		//punta inferior izquierda
	        glVertex3f(-60,-45,z2);
		//punta inferior derecha
	        glVertex3f(60,-45,z2);
		glEnd();
		
		//triangulo-cara derecha

		glColor3f(0.170,0.170,0.170);
		glBegin(GL_TRIANGLES);
		//punta central
		glVertex3f(0,0,30);
		//punta superior
        	glVertex3f(0,45,z2);
		//punta inferior derecha
	        glVertex3f(60,-45,z2);
	        glEnd();

		//triangulo-cara abajo

		glColor3f(0.300,0.300,0.300);
		glBegin(GL_TRIANGLES);
		//punto central		
		glVertex3f(0,0,30);
		//punta inferior derecha
	        glVertex3f(60,-45,z2);
		//punta inferior izquierda
	        glVertex3f(-60,-45,z2);
		glEnd();
		
		//triangulo-cara izquierda
		glColor3f(0.500,0.500,0.500);
		glBegin(GL_TRIANGLES);
		//punto central	
		glVertex3f(0,0,30);
		//punta superior
        	glVertex3f(0,45,z2);
		//punta inferior izquierda
	        glVertex3f(-60,-45,z2);
		glEnd();

//---------------Invertido
		
		//Trifuerza cara delantera		
				
		//tri izq
		glColor3f(0.650,0.650,0.650);
		glBegin(GL_TRIANGLES);
		glVertex3f(-50,18,0);
		glVertex3f(0,18,0);
        glVertex3f(-24,-18,0);
		glEnd();

		//tri derecha
		glBegin(GL_TRIANGLES);
		glVertex3f(50,18,0);
		glVertex3f(0,18,0);
        glVertex3f(24,-18,0);
		glEnd();

		//tri abajo
		glBegin(GL_TRIANGLES);
		glVertex3f(-24,-18,0);
		glVertex3f(24,-18,0);
		glVertex3f(0,-55,0);
		glEnd();
		
		//tri pared arriba
		glBegin(GL_TRIANGLES);
		glVertex3f(-50,18,0);
		glVertex3f(0,0,-80);
        glVertex3f(50,18,0);
		glEnd();

		//tri pared derecha
		glBegin(GL_TRIANGLES);
		glVertex3f(50,18,0);
		glVertex3f(0,0,-80);
        glVertex3f(0,-55,0);
		glEnd();

		//tri abajo
		glBegin(GL_TRIANGLES);
		glVertex3f(-50,18,0);
		glVertex3f(0,0,-80);
		glVertex3f(0,-55,0);
		glEnd();
		glPopMatrix();

	}
}*/
	
void display(){
		glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
		while(1<2){
		glPushMatrix();
		//glRotatef( rotate_z, 0.0, 0.0, 1.0 );
		
		glRotatef( rotate_x, 1.0, 0.0, 0.0 );
		glTranslatef(-50,0,0);
		glScalef(0.8,0.8,0.8);
		figura();
		
		glRotatef( rotate_x, 1.0, 0.0, 0.0 );
		glRotatef( rotate_y, 0.0, 1.0, 0.0 );
		glRotatef( rotate_z, 0.0, 0.0, 1.0 );
		glTranslatef(55,60,0);
		glScalef(0.6,0.6,0.6);
		figura();
		
		glRotatef( rotate_x, 1.0, 0.0, 0.0 );
		glRotatef( rotate_y, 0.0, 1.0, 0.0 );
		glRotatef( rotate_z, 0.0, 0.0, 1.0 );
		glTranslatef(55,0,0);
		glScalef(0.5,0.5,0.5);
		figura();
		
		glRotatef( rotate_x, 1.0, 0.0, 0.0 );
		glRotatef( rotate_y, 0.0, 1.0, 0.0 );
		glRotatef( rotate_z, 0.0, 0.0, 1.0 );
		glTranslatef(55,-50,0);
		glScalef(0.4,0.4,0.4);
		figura();
		
		rotate_x+=.5;
		glPopMatrix();
		glFlush();
		glutSwapBuffers();	
		glutPostRedisplay();
	}
	
	
		
	}
void keyboard( unsigned char key, int x, int y ){
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
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
	}
