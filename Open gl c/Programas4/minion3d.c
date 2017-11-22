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
void cuadricula(){
	int x,y,z,i;
	srand(time(NULL));
	while(0<1){
	x=rand()%255;
	y=rand()%255;
	z=rand()%255;
	if((x!=0&&x!=255)||(y!=0&&y!=255)||(z!=0&&z!=255)){
	break;
	}
}
glColor3ub(x,y,z);
	for(i=-100;i<=100;i+=10){
	glBegin(GL_LINES);
	glVertex3f(-100,i,-100);
	glVertex3f(100,i,-100);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(i,-100,-100);
	glVertex3f(i,100,-100);
	glEnd();
}
glFlush();
}
void minion(){
  glLineWidth(3);
	glColor3f(0.5f, 0.0f, 1.0f);
	//brazo derecho
	glColor3f(1,1,0);
glBegin(GL_QUADS);
glVertex3f(50,-20,-10);
glVertex3f(80,10,-10);
glVertex3f(80,30,-10);
glVertex3f(50,0,-10);
glEnd();
//brazo derecho 3d atras
glBegin(GL_QUADS);
glVertex3f(50,-20,-20);
glVertex3f(80,10,-20);
glVertex3f(80,30,-20);
glVertex3f(50,0,-20);
glEnd();
//brazo derecho 3d derecha
glBegin(GL_QUADS);
glVertex3f(80,30,-10);
glVertex3f(80,10,-10);
glVertex3f(80,10,-20);
glVertex3f(80,30,-20);
glEnd();
//brazo derecho 3d arriba
glBegin(GL_QUADS);
glVertex3f(50,-20,-10);
glVertex3f(50,10,-10);
glVertex3f(50,10,-20);
glVertex3f(50,-20,-20);
glEnd();
//brazo derecho 3d arriba
glBegin(GL_QUADS);
glVertex3f(50,0,-10);
glVertex3f(80,30,-10);
glVertex3f(80,30,-20);
glVertex3f(50,0,-20);
glEnd();
//brazo derecho 3d abajo
glBegin(GL_QUADS);
glVertex3f(50,-20,-10);
glVertex3f(80,10,-10);
glVertex3f(80,10,-20);
glVertex3f(50,-20,-20);
glEnd();
//brazo izquierdo
glBegin(GL_QUADS);
glVertex3f(-80,-40,-10);
glVertex3f(-50,-20,-10);
glVertex3f(-50,0,-10);
glVertex3f(-80,-20,-10);
glEnd();
//brazo izquierdo 3d atras
glBegin(GL_QUADS);
glVertex3f(-80,-40,-20);
glVertex3f(-50,-20,-20);
glVertex3f(-50,0,-20);
glVertex3f(-80,-20,-20);
glEnd();
//brazo izquierdo 3d izquierda
glBegin(GL_QUADS);
glVertex3f(-80,-40,-10);
glVertex3f(-80,-40,-20);
glVertex3f(-80,-20,-20);
glVertex3f(-80,-20,-10);
glEnd();
//brazo izquierdo 3d izquierda
glBegin(GL_QUADS);
glVertex3f(-50,-20,-10);
glVertex3f(-50,-20,-20);
glVertex3f(-50,0,-20);
glVertex3f(-50,0,-10);
glEnd();
//brazo izquierdo 3d arriba
glBegin(GL_QUADS);
glVertex3f(-80,-20,-10);
glVertex3f(-50,0,-10);
glVertex3f(-50,0,-20);
glVertex3f(-80,-20,-20);
glEnd();
//brazo izquierdo 3d abajo
glBegin(GL_QUADS);
glVertex3f(-80,-40,-10);
glVertex3f(-50,-20,-10);
glVertex3f(-50,-2,-20);
glVertex3f(-80,-40,-20);
glEnd();
//mano derecha
glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex3f(80,10,-10);
glVertex3f(90,20,-10);
glVertex3f(90,40,-10);
glVertex3f(80,30,-10);
glEnd();
//mano derecha 3d atras
glBegin(GL_QUADS);
glVertex3f(80,10,-20);
glVertex3f(90,20,-20);
glVertex3f(90,40,-20);
glVertex3f(80,30,-20);
glEnd();
//mano derecha 3d derecha
glBegin(GL_QUADS);
glVertex3f(90,20,-10);
glVertex3f(90,40,-10);
glVertex3f(90,40,-20);
glVertex3f(90,20,-20);
glEnd();
//mano derecha 3d izquierda
glBegin(GL_QUADS);
glVertex3f(80,10,-10);
glVertex3f(80,30,-10);
glVertex3f(80,30,-20);
glVertex3f(80,10,-20);
glEnd();
//mano derecha 3d arriba
glBegin(GL_QUADS);
glVertex3f(80,30,-10);
glVertex3f(90,40,-10);
glVertex3f(90,40,-20);
glVertex3f(80,30,-20);
glEnd();
//mano derecha 3d abajo
glBegin(GL_QUADS);
glVertex3f(80,10,-10);
glVertex3f(90,20,-10);
glVertex3f(90,20,-20);
glVertex3f(80,10,-20);
glEnd();
//mano izquierda
glBegin(GL_QUADS);
glVertex3f(-90,-50,-10);
glVertex3f(-80,-40,-10);
glVertex3f(-80,-20,-10);
glVertex3f(-90,-30,-10);
//mano izquierda 3d atras
glBegin(GL_QUADS);
glVertex3f(-90,-50,-20);
glVertex3f(-80,-40,-20);
glVertex3f(-80,-20,-20);
glVertex3f(-90,-30,-20);
//mano izquierda 3d izquierda
glBegin(GL_QUADS);
glVertex3f(-90,-30,-10);
glVertex3f(-90,-50,-10);
glVertex3f(-90,-50,-20);
glVertex3f(-90,-30,-20);
glEnd();
//mano izquierda 3d derecha
glBegin(GL_QUADS);
glVertex3f(-80,-20,-10);
glVertex3f(-80,-40,-10);
glVertex3f(-80,-40,-20);
glVertex3f(-80,-20,-20);
glEnd();
//mano izquierda 3d arriba
glBegin(GL_QUADS);
glVertex3f(-90,-50,-10);
glVertex3f(-80,-40,-10);
glVertex3f(-80,-40,-20);
glVertex3f(-90,-50,-20);
//mano izquierda 3d abajo
glBegin(GL_QUADS);
glVertex3f(-90,-30,-10);
glVertex3f(-80,-20,-10);
glVertex3f(-80,-20,-20);
glVertex3f(-90,-30,-20);
	//Cuerpo
	glColor3f(1,1,0);
glBegin(GL_QUADS);
glVertex3f(-50,-40,0);
glVertex3f(50,-40,0);
glVertex3f(50,80,0);
glVertex3f(-50,80,0);
glEnd();
//Cuerpo 3d atras
	glColor3f(1,1,0);
glBegin(GL_QUADS);
glVertex3f(-50,-40,-30);
glVertex3f(50,-40,-30);
glVertex3f(50,80,-30);
glVertex3f(-50,80,-30);
glEnd();
//Cuerpo 3d izquierda
	glColor3f(1,1,0);
glBegin(GL_QUADS);
glVertex3f(-50,-40,0);
glVertex3f(-50,-40,-30);
glVertex3f(-50,80,-30);
glVertex3f(-50,80,0);
glEnd();
//Cuerpo 3d derecha
	glColor3f(1,1,0);
glBegin(GL_QUADS);
glVertex3f(50,-40,0);
glVertex3f(50,-40,-30);
glVertex3f(50,80,-30);
glVertex3f(50,80,0);
glEnd();
//Cuerpo 3d arriba
	glColor3f(1,1,0);
glBegin(GL_QUADS);
glVertex3f(-50,80,0);
glVertex3f(50,80,0);
glVertex3f(50,80,-30);
glVertex3f(-50,80,-30);
glEnd();	
//Cuerpo 3d abajo
	glColor3f(1,1,0);
glBegin(GL_QUADS);
glVertex3f(-50,-40,0);
glVertex3f(50,-40,0);
glVertex3f(50,-40,-30);
glVertex3f(-50,-40,-30);
glEnd();	
	//pantalon
glColor3f(0.2,0.1,1.2);
glBegin(GL_QUADS);
glVertex3f(-50,-80,0);
glVertex3f(50,-80,0);
glVertex3f(50,-40,0);
glVertex3f(-50,-40,0);
glEnd();
//pantalon 3d atras
glBegin(GL_QUADS);
glVertex3f(-50,-80,-30);
glVertex3f(50,-80,-30);
glVertex3f(50,-40,-30);
glVertex3f(-50,-40,-30);
glEnd();
//pantalon 3d izquierda
glBegin(GL_QUADS);
glVertex3f(-50,-80,0);
glVertex3f(-50,-80,-30);
glVertex3f(-50,-40,-30);
glVertex3f(-50,-40,0);
glEnd();
//pantalon 3d derecha
glBegin(GL_QUADS);
glVertex3f(50,-80,0);
glVertex3f(50,-80,-30);
glVertex3f(50,-40,-30);
glVertex3f(50,-40,0);
glEnd();
//pantalon 3d abajo
glBegin(GL_QUADS);
glVertex3f(-50,-80,-30);
glVertex3f(50,-80,-30);
glVertex3f(50,-80,0);
glVertex3f(-50,-80,0);
glEnd();
//pantalon 3d arriba
glBegin(GL_QUADS);
glVertex3f(-50,-40,-30);
glVertex3f(50,-40,-30);
glVertex3f(50,-40,0);
glVertex3f(-50,-40,0);
glEnd();
	
		//pierna izquierda
glColor3f(0.2,0.10,1.5);
glBegin(GL_QUADS);
glVertex3f(-40,-90,-10);
glVertex3f(-10,-90,-10);
glVertex3f(-10,-80,-10);
glVertex3f(-40,-80,-10);
glEnd();
//pierna izquierda 3d atras
glBegin(GL_QUADS);
glVertex3f(-40,-90,-20);
glVertex3f(-10,-90,-20);
glVertex3f(-10,-80,-20);
glVertex3f(-40,-80,-20);
glEnd();
//pierna izquierda 3d arriba
glBegin(GL_QUADS);
glVertex3f(-40,-80,-10);
glVertex3f(-10,-80,-10);
glVertex3f(-10,-80,-20);
glVertex3f(-40,-80,-20);
glEnd();
//pierna izquierda 3d abajo
glBegin(GL_QUADS);
glVertex3f(-40,-90,-10);
glVertex3f(-10,-90,-10);
glVertex3f(-10,-90,-20);
glVertex3f(-40,-90,-20);
glEnd();
//pierna izquierda 3d izquierda
glBegin(GL_QUADS);
glVertex3f(-40,-90,-10);
glVertex3f(-40,-90,-20);
glVertex3f(-40,-80,-20);
glVertex3f(-40,-80,-10);
glEnd();
//pierna izquierda 3d derecha
glBegin(GL_QUADS);
glVertex3f(-10,-90,-10);
glVertex3f(-10,-90,-20);
glVertex3f(-10,-80,-20);
glVertex3f(-10,-80,-10);
glEnd();
//pierna derecha
glBegin(GL_QUADS);
glVertex3f(10,-90,-10);
glVertex3f(40,-90,-10);
glVertex3f(40,-80,-10);
glVertex3f(10,-80,-10);
glEnd();

//pierna derecha 3d atras
glBegin(GL_QUADS);
glVertex3f(40,-90,-20);
glVertex3f(10,-90,-20);
glVertex3f(10,-80,-20);
glVertex3f(40,-80,-20);
glEnd();
//pierna derecha 3d arriba
glBegin(GL_QUADS);
glVertex3f(40,-80,-10);
glVertex3f(10,-80,-10);
glVertex3f(10,-80,-20);
glVertex3f(40,-80,-20);
glEnd();
//pierna derecha 3d abajo

glBegin(GL_QUADS);
glVertex3f(40,-90,-10);
glVertex3f(10,-90,-10);
glVertex3f(10,-90,-20);
glVertex3f(40,-90,-20);
glEnd();
//pierna derecha 3d izquierda
glBegin(GL_QUADS);
glVertex3f(40,-90,-10);
glVertex3f(40,-90,-20);
glVertex3f(40,-80,-20);
glVertex3f(40,-80,-10);
glEnd();
//pierna derecha 3d derecha
glBegin(GL_QUADS);
glVertex3f(10,-90,-10);
glVertex3f(10,-90,-20);
glVertex3f(10,-80,-20);
glVertex3f(10,-80,-10);
glEnd();	
	//pie izquierdo
glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex3f(-45,-100,0);
glVertex3f(-5,-100,0);
glVertex3f(-5,-90,0);
glVertex3f(-45,-90,0);
glEnd();

//pie izquierdo 3d atras
glBegin(GL_QUADS);
glVertex3f(-45,-100,-30);
glVertex3f(-5,-100,-30);
glVertex3f(-5,-90,-30);
glVertex3f(-45,-90,-30);
glEnd();
//pie izquierdo 3d arriba
glBegin(GL_QUADS);
glVertex3f(-45,-90,0);
glVertex3f(-5,-90,0);
glVertex3f(-5,-90,-30);
glVertex3f(-45,-90,-30);
glEnd();
//pie izquierdo 3d abajo
glBegin(GL_QUADS);
glVertex3f(-45,-100,0);
glVertex3f(-5,-100,0);
glVertex3f(-5,-100,-30);
glVertex3f(-45,-100,-30);
glEnd();
//pie izquierdo 3d izquierda
glBegin(GL_QUADS);
glVertex3f(-45,-100,0);
glVertex3f(-45,-100,-30);
glVertex3f(-45,-90,-30);
glVertex3f(-45,-90,0);
glEnd();
//pie izquierdo 3d derecho
glBegin(GL_QUADS);
glVertex3f(-5,-100,0);
glVertex3f(-5,-100,-30);
glVertex3f(-5,-90,-30);
glVertex3f(-5,-90,0);
glEnd();
//pie derecho
glBegin(GL_QUADS);
glVertex3f(5,-100,0);
glVertex3f(45,-100,0);
glVertex3f(45,-90,0);
glVertex3f(5,-90,0);
glEnd();
	//pie derecho 3d atras
glBegin(GL_QUADS);
glVertex3f(45,-100,-30);
glVertex3f(5,-100,-30);
glVertex3f(5,-90,-30);
glVertex3f(45,-90,-30);
glEnd();
//pie derecho 3d arriba
glBegin(GL_QUADS);
glVertex3f(45,-90,0);
glVertex3f(5,-90,0);
glVertex3f(5,-90,-30);
glVertex3f(45,-90,-30);
glEnd();
//pie derecho 3d abajo
glBegin(GL_QUADS);
glVertex3f(45,-100,0);
glVertex3f(5,-100,0);
glVertex3f(5,-100,-30);
glVertex3f(45,-100,-30);
glEnd();
//pie derecho 3d izquierda
glBegin(GL_QUADS);
glVertex3f(45,-100,0);
glVertex3f(45,-100,-30);
glVertex3f(45,-90,-30);
glVertex3f(45,-90,0);
glEnd();
//pie derecho 3d derecho
glBegin(GL_QUADS);
glVertex3f(5,-100,0);
glVertex3f(5,-100,-30);
glVertex3f(5,-90,-30);
glVertex3f(5,-90,0);
glEnd();
	//antifaz
glBegin(GL_QUADS);
glVertex3f(-51,40,1);
glVertex3f(51,40,1);
glVertex3f(51,50,1);
glVertex3f(-51,50,1);
glEnd();
//antifaz 3d atras
glBegin(GL_QUADS);
glVertex3f(-51,40,-31);
glVertex3f(51,40,-31);
glVertex3f(51,50,-31);
glVertex3f(-51,50,-31);
glEnd();
//antifaz 3d izquierda
glBegin(GL_QUADS);
glVertex3f(-51,40,1);
glVertex3f(-51,40,-31);
glVertex3f(-51,50,-31);
glVertex3f(-51,50,1);
glEnd();
//antifaz 3d derecha
glBegin(GL_QUADS);
glVertex3f(51,40,1);
glVertex3f(51,40,-31);
glVertex3f(51,50,-31);
glVertex3f(51,50,1);
glEnd();


//ojo
glColor3f(1,1,1);
glBegin(GL_QUADS);
glVertex3f(-10,35,2);
glVertex3f(10,35,2);
glVertex3f(10,55,2);
glVertex3f(-10,55,2);

	glEnd();
//pupila
glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex3f(-5,40,3);
glVertex3f(5,40,3);
glVertex3f(5,50,3);
glVertex3f(-5,50,3);
glEnd();
	glLineWidth(20);
//antifaz contorno
glColor3f(0.68,0.67,0.67);
glBegin(GL_LINE_LOOP);
	glVertex3f(-20,30,2);
	glVertex3f(20,30,2);
	glVertex3f(20,60,2);
	glVertex3f(-20,60,2);
	glEnd();
	
	//boca
	glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex3f(-20,-10,1);
glVertex3f(0,-20,1);
glVertex3f(20,-10,1);
glVertex3f(20,0,1);
glVertex3f(-20,0,1);
glEnd();

//lengua
	glColor3f(.94,.33,44);
glBegin(GL_POLYGON);
glVertex3f(-5,-10,2);
glVertex3f(-5,-20,2);
glVertex3f(0,-30,2);
glVertex3f(5,-20,2);
glVertex3f(5,-10,2);
glEnd();
	
	//dientes
	glLineWidth(3);
	glColor3f(0,0,0);
glBegin(GL_LINE_STRIP);
	glVertex3f(-20,-10,3);
	glVertex3f(20,-10,3);
	
	glEnd();
	
	//logo
glBegin(GL_LINE_STRIP);
	glVertex3f(10,-50,1);
	glVertex3f(-10,-50,1);
	glVertex3f(-10,-70,1);
	glVertex3f(10,-70,1);
	glVertex3f(10,-60,1);
	glVertex3f(0,-60,1);
	
	glEnd();
	
	//cabello
glBegin(GL_LINE_STRIP);
	glVertex3f(0,80,-15);
	glVertex3f(-10,90,-15);
	glEnd();
glBegin(GL_LINE_STRIP);
	glVertex3f(0,80,-15);
	glVertex3f(-10,100,-15);
	glEnd();
glBegin(GL_LINE_STRIP);
	glVertex3f(0,80,-15);
	glVertex3f(0,110,-15);
	glEnd();
glBegin(GL_LINE_STRIP);
	glVertex3f(0,80,-15);
	glVertex3f(10,100,-15);
	glEnd();
glBegin(GL_LINE_STRIP);
	glVertex3f(0,80,-15);
	glVertex3f(10,90,-15);
	glEnd();
 glFlush();
 glutSwapBuffers();
}

void display(){
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	cuadricula();
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
 glClearColor(0.94,0.69,0.0,1.0);
}

int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Minion3d");
	init();
	glEnable(GL_DEPTH_TEST);
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
