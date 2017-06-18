#include <stdio.h>
#include <math.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display();
void specialKeys();
void reshape();
float tamx=500;
float tamy=500;
double rotate_x=0;
double rotate_y=0;
double rotate_z=0;
double escale_y=1.0; 
double escale_x=1.0;
double escale_z=1.0;
float anchura=1, altura=1;
float translate_x=0,translate_y=0,translate_z=0;
float angulo=0, ancalt=0, zmas=0, zmenos=0;
float z1=50, z2=-50;
int i=0;
float r=0, g=0, b=0;
float camerax=0,cameray=0,cameraz=0;
	
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
	glOrtho(-500, 500, -500, 500, -500, 500);
	glMatrixMode(GL_MODELVIEW);	
	glEnd();
	glFlush();
	}
	
void figura(){
		glPushMatrix();
		////////////////////////////
		////////Pared trasera///////
		////////////////////////////
		//Triangulo arriba izquierda 0,80; -50,0; 53,15;
		r=.972;
		g=.658;
		b=.850;
		glColor3f(r,g,b);
		glBegin(GL_TRIANGLES);
		glVertex3f(0,80,z1);
		glVertex3f(-75,40,z1);
		glVertex3f(-50,0,z1);
		glEnd();
		//Triangulo arriba en medio 
		r=.784;
		g=.231;
		b=.564;
		glColor3f(r,g,b);
		glBegin(GL_TRIANGLES);
		glVertex3f(0,80,z1);
		glVertex3f(-50,0,z1);
		glVertex3f(53,15,z1);
		glEnd();
		//Triangulo arriba derecha
		r=.564;
		g=.062;
		b=.333;		
		glColor3f(r,g,b);
		glBegin(GL_TRIANGLES);
		glVertex3f(0,80,z1);
		glVertex3f(53,15,z1);
		glVertex3f(75,40,z1);
		glEnd();
		//Triangulo en medio izquierda
		r=.890;
		g=.490;
		b=.741;		
		glColor3f(r,g,b);
		glBegin(GL_TRIANGLES);
		glVertex3f(-75,40,z1);
		glVertex3f(-75,-40,z1);
		glVertex3f(-50,0,z1);
		glEnd();
		//Triangulo en medio 
		r=.564;
		g=.050;
		b=.329;		
		glColor3f(r,g,b);
		glBegin(GL_TRIANGLES);
		glVertex3f(-50,0,z1);
		glVertex3f(30,-40,z1);
		glVertex3f(53,15,z1);
		glEnd();	
		//Triangulo en medio derecha 1
		r=.631;
		g=.145;
		b=.392;		
		glColor3f(r,g,b);
		glBegin(GL_TRIANGLES);
		glVertex3f(53,15,z1);
		glVertex3f(30,-40,z1);
		glVertex3f(75,-40,z1);
		glEnd();
		//Triangulo en medio derecha 2
		r=.513;
		g=.172;
		b=.321;		
		glColor3f(r,g,b);
		glBegin(GL_TRIANGLES);
		glVertex3f(75,40,z1);
		glVertex3f(53,15,z1);
		glVertex3f(75,-40,z1);
		glEnd();	
		//Triangulo abajo izquierda
		r=.658;
		g=.121;
		b=.427;		
		glColor3f(r,g,b);
		glBegin(GL_TRIANGLES);
		glVertex3f(-50,0,z1);
		glVertex3f(-75,-40,z1);
		glVertex3f(0,-80,z1);
		glEnd();
		//Triangulo abajo en medio
		r=.427;
		g=.023;
		b=.2;		
		glColor3f(r,g,b);
		glBegin(GL_TRIANGLES);
		glVertex3f(-50,0,z1);
		glVertex3f(30,-40,z1);
		glVertex3f(0,-80,z1);
		glEnd();
		//Triangulo abajo derecha		
		r=.843;
		g=.501;
		b=.666;		
		glColor3f(r,g,b);
		glBegin(GL_TRIANGLES);
		glVertex3f(30,-40,z1);
		glVertex3f(0,-80,z1);
		glVertex3f(75,-40,z1);
		glEnd();
		////////////////////////////
		////////Pared frontal///////
		////////////////////////////
		//Triangulo arriba izquierda
		r=.972;
		g=.658;
		b=.850;
		glColor3f(r,g,b);
		glBegin(GL_TRIANGLES);
		glVertex3f(0,80,z2);
		glVertex3f(-75,40,z2);
		glVertex3f(-50,0,z2);
		glEnd();
		//Triangulo arriba en medio 
		r=.784;
		g=.231;
		b=.564;
		glColor3f(r,g,b);
		glBegin(GL_TRIANGLES);
		glVertex3f(0,80,z2);
		glVertex3f(-50,0,z2);
		glVertex3f(53,15,z2);
		glEnd();
		//Triangulo arriba derecha
		r=.564;
		g=.062;
		b=.333;		
		glColor3f(r,g,b);
		glBegin(GL_TRIANGLES);
		glVertex3f(0,80,z2);
		glVertex3f(53,15,z2);
		glVertex3f(75,40,z2);
		glEnd();
		//Triangulo en medio izquierda
		r=.890;
		g=.490;
		b=.741;		
		glColor3f(r,g,b);
		glBegin(GL_TRIANGLES);
		glVertex3f(-75,40,z2);
		glVertex3f(-75,-40,z2);
		glVertex3f(-50,0,z2);
		glEnd();
		//Triangulo en medio 
		r=.564;
		g=.050;
		b=.329;		
		glColor3f(r,g,b);
		glBegin(GL_TRIANGLES);
		glVertex3f(-50,0,z2);
		glVertex3f(30,-40,z2);
		glVertex3f(53,15,z2);
		glEnd();	
		//Triangulo en medio derecha 1
		r=.631;
		g=.145;
		b=.392;		
		glColor3f(r,g,b);
		glBegin(GL_TRIANGLES);
		glVertex3f(53,15,z2);
		glVertex3f(30,-40,z2);
		glVertex3f(75,-40,z2);
		glEnd();
		//Triangulo en medio derecha 2
		r=.513;
		g=.172;
		b=.321;		
		glColor3f(r,g,b);
		glBegin(GL_TRIANGLES);
		glVertex3f(75,40,z2);
		glVertex3f(53,15,z2);
		glVertex3f(75,-40,z2);
		glEnd();	
		//Triangulo abajo izquierda
		r=.658;
		g=.121;
		b=.427;		
		glColor3f(r,g,b);
		glBegin(GL_TRIANGLES);
		glVertex3f(-50,0,z2);
		glVertex3f(-75,-40,z2);
		glVertex3f(0,-80,z2);
		glEnd();
		//Triangulo abajo en medio
		r=.427;
		g=.023;
		b=.2;		
		glColor3f(r,g,b);
		glBegin(GL_TRIANGLES);
		glVertex3f(-50,0,z2);
		glVertex3f(30,-40,z2);
		glVertex3f(0,-80,z2);
		glEnd();
		//Triangulo abajo derecha		
		r=.843;
		g=.501;
		b=.666;		
		glColor3f(r,g,b);
		glBegin(GL_TRIANGLES);
		glVertex3f(30,-40,z2);
		glVertex3f(0,-80,z2);
		glVertex3f(75,-40,z2);
		glEnd();
		////////////////////////////
		//////Paredes en medio//////
		////////////////////////////
		//Pared derecha
		r=.513;
		g=.172;
		b=.321;		
		glColor3f(r,g,b);
		glBegin(GL_POLYGON);
		glVertex3f(75,40,z1);
		glVertex3f(85,55,0);
		glVertex3f(85,-55,0);
		glVertex3f(75,-40,z1);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(85,55,0);
		glVertex3f(75,40,z2);
		glVertex3f(75,-40,z2);
		glVertex3f(85,-55,0);
		glEnd();
		//Pared derecha abajo
		r=.843;
		g=.501;
		b=.666;
		glColor3f(r,g,b);
		glBegin(GL_POLYGON);
		glVertex3f(75,-40,z1);
		glVertex3f(85,-55,0);
		glVertex3f(10,-95,0);
		glVertex3f(0,-80,z1);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(85,-55,0);
		glVertex3f(75,-40,z2);
		glVertex3f(0,-80,z2);
		glVertex3f(10,-95,0);
		glEnd();
		//Pared izquierda abajo
		r=.658;
		g=.121;
		b=.427;		 
		glColor3f(r,g,b);
		glBegin(GL_POLYGON);
		glVertex3f(0,-80,z1);
		glVertex3f(10,-95,0);
		glVertex3f(-93,-40,0);
		glVertex3f(-75,-40,z1);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(10,-95,0);
		glVertex3f(0,-80,z2);
		glVertex3f(-75,-40,z2);
		glVertex3f(-93,-40,0);
		glEnd();
		//Pared izquierda -75,40,z1
		r=.890;
		g=.490;
		b=.741;			
		glColor3f(r,g,b);
		glBegin(GL_POLYGON);
		glVertex3f(-75,-40,z1);
		glVertex3f(-93,-40,0);
		glVertex3f(-93,40,0);
		glVertex3f(-75,40,z1);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(-93,-40,0);
		glVertex3f(-75,-40,z2);
		glVertex3f(-75,40,z2);
		glVertex3f(-93,40,0);
		glEnd();
		//Pared izquierda arriba
		r=.972;
		g=.658;
		b=.850;			
		glColor3f(r,g,b);
		glBegin(GL_POLYGON);
		glVertex3f(-75,40,z1);
		glVertex3f(-93,40,0);
		glVertex3f(10,95,0);
		glVertex3f(0,80,z1);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(-93,40,0);
		glVertex3f(-75,40,z2);
		glVertex3f(0,80,z2);
		glVertex3f(10,95,0);
		glEnd();
		//Pared derecha arriba  
		r=.564;
		g=.062;
		b=.333;			
		glColor3f(r,g,b);
		glBegin(GL_POLYGON);
		glVertex3f(0,80,z1);
		glVertex3f(10,95,0);
		glVertex3f(85,55,0);
		glVertex3f(75,40,z1);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex3f(10,95,0);
		glVertex3f(0,80,z2);
		glVertex3f(75,40,z2);
		glVertex3f(85,55,0);
		glEnd();
		glPopMatrix();
	}
void figuras(){
	float escala=.8;
	/*int i;
	int t=50;
        for(i=0; i<4; i++){
			glPushMatrix();
			if(i==0){
		
			}
			if(i==1){
				t=-10;
				escala-=.10;
			}
			if(i==2){
				t=-55;
				escala-=.10;
			}
			if(i==3){
				t=-85;
				escala=.1;
			}
			glTranslatef(t,t,0);*/
			glScalef(escala,escala,escala);
			figura();
			glPopMatrix();
			//}	
	}
void display(){
	
		glPushMatrix();
		glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
		//glFrustum(camerax,cameray,cameraz,0,0,0);
		gluLookAt(0,0,0,camerax,cameray,cameraz,0,1,0);
		glScalef( escale_x, escale_y, escale_z );
		glTranslatef(translate_x,translate_y,translate_z);
		glRotatef( rotate_x, 1.0, 0.0, 0.0 );
		glRotatef( rotate_y, 0.0, 1.0, 0.0 );
		glRotatef( rotate_z, 0.0, 0.0, 1.0 );	
		figuras();
		glPopMatrix();
		glFlush();
		glutSwapBuffers();
		
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
		case '1':
		translate_x+=5;
		break;
		case '2':
		translate_x-=5;
		break;
		case '3':
		translate_y+=5;
		break;
		case '4':
		translate_y-=5;
		break;
		case '5':
		translate_z+=5;
		break;
		case '6':
		translate_z-=5;
		break;
		case '7':
		camerax+=1;
		break;
		case '8':
		cameray+=1;
		break;
		case '9':
		cameraz+=1;
		break;
		case '0':
		escale_x=escale_y=escale_z=1;
		rotate_x=rotate_y=rotate_z=0;
		translate_x=translate_y=translate_z=0;
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
	glutInitWindowSize(tamx, tamy);
	glutCreateWindow("Hexagono");
	init();
	glEnable(GL_DEPTH_TEST);
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
	}
