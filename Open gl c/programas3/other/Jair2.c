
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>
#include <unistd.h>

void display();
void specialKeys();
void reshape();

double rotate_y=0;
float z1=60, z2=-60;
int i=0;
int ciclo=0;
	
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
	
void figuras(){		
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
	
void display(){
	
	if(ciclo==0){
		glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
		glPushMatrix();
		glPushMatrix();
		glColor3f(0,1,0);
		glTranslatef(-50,0,0);
	    glScalef(0.7,0.7,0.7);
		figuras();
		glPopMatrix();
		glPushMatrix();
		glColor3f(0,1,0);
		glTranslatef(50,50,0);
		 glScalef(0.5,0.5,0.5);
		figuras();
		glPopMatrix();
		glPushMatrix();
		glColor3f(0,1,0);
		glTranslatef(50,-5,0);
		 glScalef(0.4,0.4,0.4);
		figuras();
		glPopMatrix();
		glPushMatrix();
		glColor3f(0,1,0);
		glTranslatef(50,-50,0);
		 glScalef(0.30,0.30,0.30);
		figuras();
		glPopMatrix();
		glPopMatrix();
		glFlush();
		glutSwapBuffers();
	

}
if(ciclo==1){
		while(1<2){
		glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
		glPushMatrix();
		glRotatef( rotate_y, 1.0, 0.0, 0.0 );
		rotate_y+=1;
		
		glPushMatrix();
		glColor3f(0,1,0);
		glTranslatef(-50,0,0);
	    glScalef(0.6,0.6,1);
		figuras();
		glPopMatrix();
		glPushMatrix();
		glColor3f(0,1,0);
		glTranslatef(50,50,0);
		 glScalef(0.45,0.45,1);
		figuras();
		glPopMatrix();
		glPushMatrix();
		glColor3f(0,1,0);
		glTranslatef(50,-5,0);
		 glScalef(0.35,0.35,1);
		figuras();
		glPopMatrix();
		glPushMatrix();
		glColor3f(0,1,0);
		glTranslatef(50,-50,0);
		 glScalef(0.25,0.25,1);
		figuras();
		glPopMatrix();
		glPopMatrix();
		glFlush();
		
		glutSwapBuffers();
	
}
}
}
	void mouse(int button,int state,int x,int y){
		switch(button){
			case GLUT_LEFT_BUTTON:
				ciclo=1;
			break;
			case GLUT_RIGHT_BUTTON:
				ciclo=0;
			break;
		}
		glutPostRedisplay();
	} 
void init(){
	glClearColor(1,1,1,1);
	}
int main(int argc, char* argv[]){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(200, 200);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Tri-fuerza");
	init();
	glEnable(GL_DEPTH_TEST);
	glutDisplayFunc(display);
	glutMouseFunc(mouse);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
	}
