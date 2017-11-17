#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

float scale_x=1.0,scale_y=1.0,scale_z=1.0,rotate_x=0.0,rotate_y=0.0,rotate_z=0.0,translate_x=0.0,translate_y=0.0,translate_z=0.0;

void reshape(int width, int height){
 glViewport(0, 0, width, height);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glOrtho(-100, 100, -100, 100, -100, 100);
 glMatrixMode(GL_MODELVIEW);
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
	glScalef( scale_x, scale_y, scale_z ); 
	glRotatef( rotate_x, 1.0, 0.0, 0.0 );
	glRotatef( rotate_y, 0.0, 1.0, 0.0 );
	glRotatef( rotate_z, 0.0, 0.0, 1.0 );
	glTranslatef(translate_x,translate_y,translate_z);
	minion();
	glFlush();
	glutSwapBuffers();
};
void keyboard( unsigned char key, int x, int y ) {
  switch(key){
  case 'q':
  scale_x+=.1;
  break;
  case 'Q':
  scale_x+=.1;
  break;
  case 'a':
  scale_x-=.1;
  break;
  case 'A':
  scale_x-=.1;
  break;
  case 'w':
  scale_y+=.1;
  break;
  case 'W':
  scale_y+=.1;
  break;
  case 's':
  scale_y-=.1;
  break;
  case 'S':
  scale_y-=.1;
  break;
  case 'e':
  scale_z+=.1;
  break;
  case 'E':
  scale_z+=.1;
  break;
  case 'D':
  scale_z-=.1;
  break;
  case 'd':
  scale_z-=.1;
  break;
  case 'r':
  rotate_x+=5.0;
  break;
  case 'R':
  rotate_x+=5.0;
  break;
  case 'f':
  rotate_x-=5.0;
  break;
  case 'F':
  rotate_x-=5.0;
  break;
  case 't':
  rotate_y+=5.0;
  break;
  case 'T':
  rotate_y+=5.0;
  break;
  case 'g':
  rotate_y-=5.0;
  break;
  case 'G':
  rotate_y-=5.0;
  break;
  case 'y':
  rotate_z+=5.0;
  break;
  case 'Y':
  rotate_z+=5.0;
  break;
  case 'h':
  rotate_z-=5.0;
  break;
  case 'H':
  rotate_z-=5.0;
  break;
  case 'u':
  translate_x+=5.0;
  break;
  case 'U':
  translate_x+=5.0;
  break;
  case 'j':
  translate_x-=5.0;
  break;
  case 'J':
  translate_x-=5.0;
  break;
  case 'i':
  translate_y+=5.0;
  break;
  case 'I':
  translate_y+=5.0;
  break;
  case 'k':
  translate_y-=5.0;
  break;
  case 'K':
  translate_y-=5.0;
  break;
  case 'o':
  translate_z+=5.0;
  break;
  case 'O':
  translate_z+=5.0;
  break;
  case 'l':
  translate_z-=5.0;
  break;
  case 'L':
  translate_z-=5.0;
  break;
  case 'p':
  scale_x=1.0;
  scale_y=1.0;
  scale_z=1.0;
  rotate_x=0.0;
  rotate_y=0.0;
  rotate_z=0.0;
  translate_x=0.0;
  translate_y=0.0;
  translate_z=0.0;
  break;
  case 'P':
  scale_x=1.0;
  scale_y=1.0;
  scale_z=1.0;
  rotate_x=0.0;
  rotate_y=0.0;
  rotate_z=0.0;
  translate_x=0.0;
  translate_y=0.0;
  translate_z=0.0;
  break;
  } 
  glutPostRedisplay();
 
}
void init(){
 glClearColor(1,1,1,1);
}

int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Minion");
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
