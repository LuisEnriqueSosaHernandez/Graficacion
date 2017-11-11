#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

float scale_x=1,scale_y=1,rotate_z=0,translate_x=0,translate_y=0;

void reshape(int width, int height){
 glViewport(0, 0, width, height);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glOrtho(-100, 100, -100, 100, -100, 100);
 glMatrixMode(GL_MODELVIEW);
}
void cuadricula(){
	int x,y,z,i;
	srand(time(NULL));
	while(0<1){
	x=rand()%2;
	y=rand()%2;
	z=rand()%2;
	if(x!=0||y!=0||z!=0){
	break;
	}
}
glColor3f(x,y,z);
	for(i=-100;i<=100;i+=10){
	glBegin(GL_LINES);
	glVertex3f(-100,i,0);
	glVertex3f(100,i,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(i,-100,0);
	glVertex3f(i,100,0);
	glEnd();
}
glFlush();
}
void finn(){
 glColor3f(1.0,1.0,1.0);
  glBegin(GL_QUADS);//cabeza
 glVertex3f(-30,85,0);
 glVertex3f(30,85,0);
 glVertex3f(30,45,0);
 glVertex3f(-30,45,0);
 glEnd();
  glBegin(GL_QUADS);//cabeza izquierda
 glVertex3f(-30,85,0);
 glVertex3f(-30,95,0);
 glVertex3f(-15,95,0);
 glVertex3f(-15,85,0);
 glEnd();
  glBegin(GL_QUADS);//cabeza derecha
 glVertex3f(30,85,0);
 glVertex3f(30,95,0);
 glVertex3f(15,95,0);
 glVertex3f(15,85,0);
 glEnd();
 //contorno cara
 glColor3f(0.57,0.57,0.57);
 glLineWidth(10);
 glBegin(GL_LINE_STRIP);
 glVertex3f(20,75,0);
 glVertex3f(20,55,0);
 glEnd();
 glBegin(GL_LINE_STRIP);
 glVertex3f(20,75,0);
 glVertex3f(15,75,0);
 glEnd();
 glBegin(GL_LINE_STRIP);
 glVertex3f(15,75,0);
 glVertex3f(15,80,0);
 glEnd();
 glBegin(GL_LINE_STRIP);
 glVertex3f(15,80,0);
 glVertex3f(-15,80,0);
 glEnd();
 glBegin(GL_LINE_STRIP);
 glVertex3f(-15,80,0);
 glVertex3f(-15,75,0);
 glEnd();
 glBegin(GL_LINE_STRIP);
 glVertex3f(-15,75,0);
 glVertex3f(-20,75,0);
 glEnd();
 glBegin(GL_LINE_STRIP);
 glVertex3f(-20,75,0);
 glVertex3f(-20,55,0);
 glEnd();
 glBegin(GL_LINE_STRIP);
 glVertex3f(-20,55,0);
 glVertex3f(-15,55,0);
 glEnd();
 glBegin(GL_LINE_STRIP);
 glVertex3f(-15,55,0);
 glVertex3f(-15,50,0);
 glEnd();
 glBegin(GL_LINE_STRIP);
 glVertex3f(-15,50,0);
 glVertex3f(15,50,0);
 glEnd();
 glBegin(GL_LINE_STRIP);
 glVertex3f(15,50,0);
 glVertex3f(15,55,0);
 glEnd();
 glBegin(GL_LINE_STRIP);
 glVertex3f(15,55,0);
 glVertex3f(20,55,0);
 glEnd();
 //relleno cara
 glLineWidth(1);
 glColor3f(0.98,0.82,0.75);
 glBegin(GL_QUADS);
glVertex3f(-20,75,0);
glVertex3f(20,75,0);
glVertex3f(20,55,0);
glVertex3f(-20,55,0);
 glEnd();
 glBegin(GL_QUADS);
glVertex3f(-15,80,0);
glVertex3f(15,80,0);
glVertex3f(15,75,0);
glVertex3f(-15,75,0);
 glEnd();
 glBegin(GL_QUADS);
glVertex3f(-15,50,0);
glVertex3f(15,50,0);
glVertex3f(15,55,0);
glVertex3f(-15,55,0);
 glEnd();
 //ojo izquierdo
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_QUADS);
glVertex3f(-11,76,0);
glVertex3f(-4,76,0);
glVertex3f(-4,69,0);
glVertex3f(-11,69,0);
 glEnd();
 //ojo derecho
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_QUADS);
glVertex3f(11,76,0);
glVertex3f(4,76,0);
glVertex3f(4,69,0);
glVertex3f(11,69,0);
 glEnd();
 //boca
 glBegin(GL_QUADS);
glVertex3f(-12,60,0);
glVertex3f(12,60,0);
glVertex3f(12,55,0);
glVertex3f(-12,55,0);
 glEnd();
 glBegin(GL_QUADS);
glVertex3f(-9,63,0);
glVertex3f(-15,63,0);
glVertex3f(-15,58,0);
glVertex3f(-9,58,0);
 glEnd();
 glBegin(GL_QUADS);
glVertex3f(9,63,0);
glVertex3f(15,63,0);
glVertex3f(15,58,0);
glVertex3f(9,58,0);
 glEnd();
 //lengua
 glColor3f(1.0,0.67,0.98);
  glBegin(GL_QUADS);
glVertex3f(-8,56,0);
glVertex3f(8,56,0);
glVertex3f(8,57,0);
glVertex3f(-8,57,0);
 glEnd();
 glBegin(GL_QUADS);
glVertex3f(-5,57,0);
glVertex3f(5,57,0);
glVertex3f(5,59,0);
glVertex3f(-5,59,0);
 glEnd();
 //cuerpo
 glColor3f(0.0,0.61,0.86);
 glBegin(GL_QUADS);
glVertex3f(30,45,0);
glVertex3f(-30,45,0);
glVertex3f(-30,-10,0);
glVertex3f(30,-10,0);
 glEnd();
 //manga izquierda
 glBegin(GL_QUADS);
glVertex3f(-30,45,0);
glVertex3f(-40,45,0);
glVertex3f(-40,40,0);
glVertex3f(-30,40,0);
 glEnd();
 //manga derecha
  glBegin(GL_QUADS);
glVertex3f(30,45,0);
glVertex3f(40,45,0);
glVertex3f(40,40,0);
glVertex3f(30,40,0);
 glEnd();
 //mochila derecha arriba
 glColor3f(0.65,0.83,0.61);
 glLineWidth(20);
 glBegin(GL_LINE_STRIP);
glVertex3f(31,50,0);
glVertex3f(31,45,0);
 glEnd();
 //mochila izquierda arriba
 glBegin(GL_LINE_STRIP);
glVertex3f(-31,50,0);
glVertex3f(-31,45,0);
 glEnd();
 //mochila derecha abajo
 glColor3f(0.42,0.70,0.26);
 glBegin(GL_LINE_STRIP);
glVertex3f(31,45,0);
glVertex3f(31,40,0);
 glEnd();
 //mochila izquierda abajo
 glBegin(GL_LINE_STRIP);
glVertex3f(-31,45,0);
glVertex3f(-31,40,0);
 glEnd();
 //pantalon
  glLineWidth(1);
 glColor3f(0.18,0.40,0.69);
 glBegin(GL_QUADS);
glVertex3f(-30,-10,0);
glVertex3f(30,-10,0);
glVertex3f(30,-20,0);
glVertex3f(-30,-20,0);
glEnd();
 glBegin(GL_QUADS);
glVertex3f(-30,-20,0);
glVertex3f(-25,-20,0);
glVertex3f(-25,-40,0);
glVertex3f(-30,-40,0);
 glEnd();
 glBegin(GL_QUADS);
glVertex3f(30,-20,0);
glVertex3f(25,-20,0);
glVertex3f(25,-40,0);
glVertex3f(30,-40,0);
 glEnd();
 //pierna derecha
 glColor3f(0.98,0.82,0.75);
 glBegin(GL_QUADS);
glVertex3f(30,-40,0);
glVertex3f(25,-40,0);
glVertex3f(25,-70,0);
glVertex3f(30,-70,0);
 glEnd();
 //pierna izquierda
 glBegin(GL_QUADS);
glVertex3f(-30,-40,0);
glVertex3f(-25,-40,0);
glVertex3f(-25,-70,0);
glVertex3f(-30,-70,0);
 glEnd();
 //brazo izquierdo
  glBegin(GL_QUADS);
glVertex3f(-40,45,0);
glVertex3f(-50,45,0);
glVertex3f(-50,40,0);
glVertex3f(-40,40,0);
 glEnd();
 glBegin(GL_QUADS);
glVertex3f(-45,45,0);
glVertex3f(-50,45,0);
glVertex3f(-50,0,0);
glVertex3f(-45,0,0);
 glEnd();
 //brazo derecho
  glBegin(GL_QUADS);
glVertex3f(40,45,0);
glVertex3f(50,45,0);
glVertex3f(50,40,0);
glVertex3f(40,40,0);
 glEnd();
 glBegin(GL_QUADS);
glVertex3f(45,45,0);
glVertex3f(50,45,0);
glVertex3f(50,0,0);
glVertex3f(45,0,0);
 glEnd();
 //calcetin izquierdo
 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
glVertex3f(-25,-70,0);
glVertex3f(-30,-70,0);
glVertex3f(-30,-75,0);
glVertex3f(-25,-75,0);
 glEnd();
 //calcetin derecho
 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
glVertex3f(25,-70,0);
glVertex3f(30,-70,0);
glVertex3f(30,-75,0);
glVertex3f(25,-75,0);
 glEnd();
 //pie izquierdo
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_QUADS);
glVertex3f(-25,-75,0);
glVertex3f(-35,-75,0);
glVertex3f(-35,-80,0);
glVertex3f(-25,-80,0);
 glEnd();
//pie derecho
 glBegin(GL_QUADS);
glVertex3f(25,-75,0);
glVertex3f(35,-75,0);
glVertex3f(35,-80,0);
glVertex3f(25,-80,0);
 glEnd();
 glFlush();
}

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	cuadricula();
	glLoadIdentity();
	glScalef( scale_x, scale_y, 1 ); 
	glRotatef( rotate_z, 0.0, 0.0, 1.0 );
	glTranslatef(translate_x,translate_y,0);
	finn();
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
  case 'w':
  scale_x-=.1;
  break;
  case 'W':
  scale_x-=.1;
  break;
  case 'a':
  scale_y+=.1;
  break;
  case 'A':
  scale_y+=.1;
  break;
  case 's':
  scale_y-=.1;
  break;
  case 'S':
  scale_y-=.1;
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
   case 'e':
  translate_x-=5;
  break;
   case 'E':
  translate_x-=5;
  break;
   case 'r':
  translate_x+=5;
  break;
   case 'R':
  translate_x+=5;
  break;
   case 'd':
  translate_y+=5;
  break;
   case 'D':
  translate_y+=5;
  break;
   case 'f':
  translate_y-=5;
  break;
   case 'F':
  translate_y-=5;
  break;
  } 
  glutPostRedisplay();
 
}
void init(){
 glClearColor(0.94,0.69,0.0,1.0);
}

int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Finn the human");
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
