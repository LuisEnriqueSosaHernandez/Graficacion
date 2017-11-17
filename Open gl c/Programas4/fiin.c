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
void finn(){
  glColor3f(1.0,1.0,1.0);
 //cabeza
  glBegin(GL_QUADS);
 glVertex3f(-30,85,0);
 glVertex3f(30,85,0);
 glVertex3f(30,45,0);
 glVertex3f(-30,45,0);
 glEnd();
 //cabeza 3d izquierda
  glBegin(GL_QUADS);
 glVertex3f(30,85,0);
 glVertex3f(30,85,-30);
 glVertex3f(30,45,-30);
 glVertex3f(30,45,0);
 glEnd();
 //cabeza 3d derecha
  glBegin(GL_QUADS);
 glVertex3f(-30,85,0);
 glVertex3f(-30,85,-30);
 glVertex3f(-30,45,-30);
 glVertex3f(-30,45,0);
 glEnd();
 //cabeza 3d atras
  glBegin(GL_QUADS);
 glVertex3f(-30,85,-30);
 glVertex3f(30,85,-30);
 glVertex3f(30,45,-30);
 glVertex3f(-30,45,-30);
 glEnd();
 //cabeza 3d arriba
  glBegin(GL_QUADS);
 glVertex3f(-30,85,0);
 glVertex3f(30,85,0);
 glVertex3f(30,85,-30);
 glVertex3f(-30,85,-30);
 glEnd();
 //cabeza 3d abajo
  glBegin(GL_QUADS);
 glVertex3f(-30,45,0);
 glVertex3f(30,45,0);
 glVertex3f(30,45,-30);
 glVertex3f(-30,45,-30);
 glEnd();
 //cabeza gorro izquierda
  glBegin(GL_QUADS);
 glVertex3f(-30,85,-10);
 glVertex3f(-30,95,-10);
 glVertex3f(-15,95,-10);
 glVertex3f(-15,85,-10);
 glEnd();
 //cabeza gorro 3d izquierda izquierda
  glBegin(GL_QUADS);
 glVertex3f(-30,85,-10);
 glVertex3f(-30,95,-10);
 glVertex3f(-30,95,-20);
 glVertex3f(-30,85,-20);
 glEnd();
 //cabeza gorro 3d izquierda derecha
  glBegin(GL_QUADS);
 glVertex3f(-15,85,-10);
 glVertex3f(-15,95,-10);
 glVertex3f(-15,95,-20);
 glVertex3f(-15,85,-20);
 glEnd();
 //cabeza gorro 3d izquierda atras
  glBegin(GL_QUADS);
 glVertex3f(-30,85,-20);
 glVertex3f(-30,95,-20);
 glVertex3f(-15,95,-20);
 glVertex3f(-15,85,-20);
 glEnd();
 //cabeza gorro 3d izquierda arriba
  glBegin(GL_QUADS);
 glVertex3f(-30,95,-10);
 glVertex3f(-30,95,-20);
 glVertex3f(-15,95,-20);
 glVertex3f(-15,95,-10);
 glEnd();
 //cabeza gorro derecha
  glBegin(GL_QUADS);
 glVertex3f(30,85,-10);
 glVertex3f(30,95,-10);
 glVertex3f(15,95,-10);
 glVertex3f(15,85,-10);
 glEnd();
 //cabeza gorro 3d derecha derecha
  glBegin(GL_QUADS);
 glVertex3f(30,85,-10);
 glVertex3f(30,95,-10);
 glVertex3f(30,95,-20);
 glVertex3f(30,85,-20);
 glEnd();
 //cabeza gorro 3d derecha izquierda
  glBegin(GL_QUADS);
 glVertex3f(15,85,-10);
 glVertex3f(15,95,-10);
 glVertex3f(15,95,-20);
 glVertex3f(15,85,-20);
 glEnd();
 //cabeza gorro 3d derecha atras
  glBegin(GL_QUADS);
 glVertex3f(30,85,-20);
 glVertex3f(30,95,-20);
 glVertex3f(15,95,-20);
 glVertex3f(15,85,-20);
 glEnd();
 //cabeza gorro 3d derecha arriba
  glBegin(GL_QUADS);
 glVertex3f(30,95,-10);
 glVertex3f(30,95,-20);
 glVertex3f(15,95,-20);
 glVertex3f(15,95,-10);
 glEnd();
 //contorno cara
 glColor3f(0.57,0.57,0.57);
 glLineWidth(2);
 glBegin(GL_LINE_STRIP);
 glVertex3f(20,75,1);
 glVertex3f(20,55,1);
 glEnd();
 glBegin(GL_LINE_STRIP);
 glVertex3f(20,75,1);
 glVertex3f(15,75,1);
 glEnd();
 glBegin(GL_LINE_STRIP);
 glVertex3f(15,75,1);
 glVertex3f(15,80,1);
 glEnd();
 glBegin(GL_LINE_STRIP);
 glVertex3f(15,80,1);
 glVertex3f(-15,80,1);
 glEnd();
 glBegin(GL_LINE_STRIP);
 glVertex3f(-15,80,1);
 glVertex3f(-15,75,1);
 glEnd();
 glBegin(GL_LINE_STRIP);
 glVertex3f(-15,75,1);
 glVertex3f(-20,75,1);
 glEnd();
 glBegin(GL_LINE_STRIP);
 glVertex3f(-20,75,1);
 glVertex3f(-20,55,1);
 glEnd();
 glBegin(GL_LINE_STRIP);
 glVertex3f(-20,55,1);
 glVertex3f(-15,55,1);
 glEnd();
 glBegin(GL_LINE_STRIP);
 glVertex3f(-15,55,1);
 glVertex3f(-15,50,1);
 glEnd();
 glBegin(GL_LINE_STRIP);
 glVertex3f(-15,50,1);
 glVertex3f(15,50,1);
 glEnd();
 glBegin(GL_LINE_STRIP);
 glVertex3f(15,50,1);
 glVertex3f(15,55,1);
 glEnd();
 glBegin(GL_LINE_STRIP);
 glVertex3f(15,55,1);
 glVertex3f(20,55,1);
 glEnd();
 //relleno cara
 glLineWidth(1);
 glColor3f(0.98,0.82,0.75);
 glBegin(GL_QUADS);
glVertex3f(-20,75,1);
glVertex3f(20,75,1);
glVertex3f(20,55,1);
glVertex3f(-20,55,1);
 glEnd();
 glBegin(GL_QUADS);
glVertex3f(-15,80,1);
glVertex3f(15,80,1);
glVertex3f(15,75,1);
glVertex3f(-15,75,1);
 glEnd();
 glBegin(GL_QUADS);
glVertex3f(-15,50,1);
glVertex3f(15,50,1);
glVertex3f(15,55,1);
glVertex3f(-15,55,1);
 glEnd();
 //ojo izquierdo
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_QUADS);
glVertex3f(-11,76,2);
glVertex3f(-4,76,2);
glVertex3f(-4,69,2);
glVertex3f(-11,69,2);
 glEnd();
 //ojo derecho
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_QUADS);
glVertex3f(11,76,2);
glVertex3f(4,76,2);
glVertex3f(4,69,2);
glVertex3f(11,69,2);
 glEnd();
 //boca
 glBegin(GL_QUADS);
glVertex3f(-12,60,2);
glVertex3f(12,60,2);
glVertex3f(12,55,2);
glVertex3f(-12,55,2);
 glEnd();
 glBegin(GL_QUADS);
glVertex3f(-9,63,2);
glVertex3f(-15,63,2);
glVertex3f(-15,58,2);
glVertex3f(-9,58,2);
 glEnd();
 glBegin(GL_QUADS);
glVertex3f(9,63,2);
glVertex3f(15,63,2);
glVertex3f(15,58,2);
glVertex3f(9,58,2);
 glEnd();
 //lengua
 glColor3f(1.0,0.67,0.98);
  glBegin(GL_QUADS);
glVertex3f(-8,56,3);
glVertex3f(8,56,3);
glVertex3f(8,57,3);
glVertex3f(-8,57,3);
 glEnd();
 glBegin(GL_QUADS);
glVertex3f(-5,57,3);
glVertex3f(5,57,3);
glVertex3f(5,59,3);
glVertex3f(-5,59,3);
 glEnd();
 //cuerpo
 glColor3f(0.0,0.61,0.86);
 glBegin(GL_QUADS);
glVertex3f(30,45,0);
glVertex3f(-30,45,0);
glVertex3f(-30,-10,0);
glVertex3f(30,-10,0);
 glEnd();
 //cuerpo 3d izquierda
 glBegin(GL_QUADS);
glVertex3f(30,45,0);
glVertex3f(30,45,-30);
glVertex3f(30,-10,-30);
glVertex3f(30,-10,0);
 glEnd();
  //cuerpo 3d derecha
 glBegin(GL_QUADS);
glVertex3f(-30,45,0);
glVertex3f(-30,45,-30);
glVertex3f(-30,-10,-30);
glVertex3f(-30,-10,0);
 glEnd();
  //cuerpo 3d arriba
 glBegin(GL_QUADS);
glVertex3f(30,45,0);
glVertex3f(-30,45,0);
glVertex3f(-30,45,-30);
glVertex3f(30,45,-30);
glEnd();
 //cuerpo 3d abajo
 glBegin(GL_QUADS);
glVertex3f(30,-10,0);
glVertex3f(-30,-10,0);
glVertex3f(-30,-10,-30);
glVertex3f(30,-10,-30);
glEnd();
//cuerpo 3d atras
 glBegin(GL_QUADS);
glVertex3f(30,45,-30);
glVertex3f(-30,45,-30);
glVertex3f(-30,-10,-30);
glVertex3f(30,-10,-30);
 glEnd();
 //manga izquierda
 glBegin(GL_QUADS);
glVertex3f(-30,45,-10);
glVertex3f(-40,45,-10);
glVertex3f(-40,40,-10);
glVertex3f(-30,40,-10);
 glEnd();
 //manga izquierda 3d izquierda
 glBegin(GL_QUADS);
glVertex3f(-40,45,-10);
glVertex3f(-40,45,-20);
glVertex3f(-40,40,-20);
glVertex3f(-40,40,-10);
 glEnd();
 //manga izquierda 3d derecha
 glBegin(GL_QUADS);
glVertex3f(-30,45,-10);
glVertex3f(-30,45,-20);
glVertex3f(-30,40,-20);
glVertex3f(-30,40,-10);
 glEnd();
 //manga izquierda 3d arriba
 glBegin(GL_QUADS);
glVertex3f(-30,45,-10);
glVertex3f(-40,45,-10);
glVertex3f(-40,45,-20);
glVertex3f(-30,45,-20);
 glEnd();
 //manga izquierda 3d abajo
 glBegin(GL_QUADS);
glVertex3f(-30,40,-10);
glVertex3f(-40,40,-10);
glVertex3f(-40,40,-20);
glVertex3f(-30,40,-20);
 glEnd();
 //manga derecha
  glBegin(GL_QUADS);
glVertex3f(30,45,-10);
glVertex3f(40,45,-10);
glVertex3f(40,40,-10);
glVertex3f(30,40,-10);
 glEnd();
 //manga derecha 3d derecha
 glBegin(GL_QUADS);
glVertex3f(40,45,-10);
glVertex3f(40,45,-20);
glVertex3f(40,40,-20);
glVertex3f(40,40,-10);
 glEnd();
 //manga derecha 3d izquierda
 glBegin(GL_QUADS);
glVertex3f(30,45,-10);
glVertex3f(30,45,-20);
glVertex3f(30,40,-20);
glVertex3f(30,40,-10);
 glEnd();
 //manga derecha 3d arriba
 glBegin(GL_QUADS);
glVertex3f(30,45,-10);
glVertex3f(40,45,-10);
glVertex3f(40,45,-20);
glVertex3f(30,45,-20);
 glEnd();
 //manga derecha 3d abajo
 glBegin(GL_QUADS);
glVertex3f(30,40,-10);
glVertex3f(40,40,-10);
glVertex3f(40,40,-20);
glVertex3f(30,40,-20);
 glEnd();
 glColor3f(0.65,0.83,0.61);
 //mochila derecha arriba
 glLineWidth(20);
 glBegin(GL_LINE_STRIP);
glVertex3f(31,50,-10);
glVertex3f(31,45,-10);
 glEnd();
 //mochila 3d derecha arriba arriba
 glBegin(GL_LINE_STRIP);
glVertex3f(31,50,-10);
glVertex3f(31,50,-30);
 glEnd();
  //mochila 3d derecha arriba atras
 glBegin(GL_LINE_STRIP);
glVertex3f(31,50,-30);
glVertex3f(31,45,-30);
 glEnd();
 //mochila izquierda arriba
 glBegin(GL_LINE_STRIP);
glVertex3f(-31,50,-10);
glVertex3f(-31,45,-10);
 glEnd();
 //mochila 3d izquierda arriba arriba
 glBegin(GL_LINE_STRIP);
glVertex3f(-31,50,-10);
glVertex3f(-31,50,-30);
 glEnd();
  //mochila 3d izquierda arriba atras
 glBegin(GL_LINE_STRIP);
glVertex3f(-31,50,-30);
glVertex3f(-31,45,-30);
 glEnd();
 //mochila atras arriba
 glBegin(GL_QUADS);
glVertex3f(-30,45,-30);
glVertex3f(30,45,-30);
glVertex3f(30,15,-30);
glVertex3f(-30,15,-30);
glEnd();
//mochila atras arriba 3d izquierda
 glBegin(GL_QUADS);
glVertex3f(-30,45,-30);
glVertex3f(-30,45,-50);
glVertex3f(-30,15,-50);
glVertex3f(-30,15,-30);
glEnd();
//mochila atras arriba 3d derecha
 glBegin(GL_QUADS);
glVertex3f(30,45,-30);
glVertex3f(30,45,-50);
glVertex3f(30,15,-50);
glVertex3f(30,15,-30);
glEnd();
//mochila atras arriba 3d arriba
 glBegin(GL_QUADS);
glVertex3f(-30,45,-30);
glVertex3f(30,45,-30);
glVertex3f(30,45,-50);
glVertex3f(-30,45,-50);
glEnd();
//mochila atras arriba 3d abajo
 glBegin(GL_QUADS);
glVertex3f(-30,15,-30);
glVertex3f(30,15,-30);
glVertex3f(30,15,-50);
glVertex3f(-30,15,-50);
glEnd();
//mochila atras arriba 3d atras
 glBegin(GL_QUADS);
glVertex3f(-30,45,-50);
glVertex3f(30,45,-50);
glVertex3f(30,15,-50);
glVertex3f(-30,15,-50);
glEnd();
 glColor3f(0.42,0.70,0.26);
//mochila atras arriba boton
 glBegin(GL_QUADS);
glVertex3f(3,18,-51);
glVertex3f(-3,18,-51);
glVertex3f(-3,15,-51);
glVertex3f(3,15,-51);
glEnd();
 //mochila derecha abajo 
 glBegin(GL_LINE_STRIP);
glVertex3f(31,45,-10);
glVertex3f(31,40,-10);
 glEnd();
 //mochila derecha abajo abajo
 glBegin(GL_LINE_STRIP);
glVertex3f(31,40,-10);
glVertex3f(31,40,-30);
 glEnd();
 //mochila derecha abajo atras
 glBegin(GL_LINE_STRIP);
glVertex3f(31,45,-30);
glVertex3f(31,40,-30);
 glEnd();
 //mochila izquierda abajo
 glBegin(GL_LINE_STRIP);
glVertex3f(-31,45,-10);
glVertex3f(-31,40,-10);
 glEnd();
  //mochila izquierda abajo abajo
 glBegin(GL_LINE_STRIP);
glVertex3f(-31,40,-10);
glVertex3f(-31,40,-30);
 glEnd();
 //mochila izquierda abajo atras
 glBegin(GL_LINE_STRIP);
glVertex3f(-31,45,-30);
glVertex3f(-31,40,-30);
 glEnd();
 //mochila atras abajo
 glBegin(GL_QUADS);
glVertex3f(-30,15,-30);
glVertex3f(30,15,-30);
glVertex3f(30,-10,-30);
glVertex3f(-30,-10,-30);
glEnd();
//mochila atras arriba 3d izquierda
 glBegin(GL_QUADS);
glVertex3f(-30,15,-30);
glVertex3f(-30,15,-50);
glVertex3f(-30,-10,-50);
glVertex3f(-30,-10,-30);
glEnd();
//mochila atras arriba 3d derecha
 glBegin(GL_QUADS);
glVertex3f(30,15,-30);
glVertex3f(30,15,-50);
glVertex3f(30,-10,-50);
glVertex3f(30,-10,-30);
glEnd();
//mochila atras arriba 3d arriba
 glBegin(GL_QUADS);
glVertex3f(-30,15,-30);
glVertex3f(30,15,-30);
glVertex3f(30,15,-50);
glVertex3f(-30,15,-50);
glEnd();
//mochila atras arriba 3d abajo
 glBegin(GL_QUADS);
glVertex3f(-30,-10,-30);
glVertex3f(30,-10,-30);
glVertex3f(30,-10,-50);
glVertex3f(-30,-10,-50);
glEnd();
//mochila atras 3d abajo atras
 glBegin(GL_QUADS);
glVertex3f(-30,15,-50);
glVertex3f(30,15,-50);
glVertex3f(30,-10,-50);
glVertex3f(-30,-10,-50);
glEnd();
glColor3f(0.65,0.83,0.61);
 //mochila atras arriba boton
 glBegin(GL_QUADS);
glVertex3f(3,15,-51);
glVertex3f(-3,15,-51);
glVertex3f(-3,12,-51);
glVertex3f(3,12,-51);
glEnd();
 //pantalon
  glLineWidth(1);
 glColor3f(0.18,0.40,0.69);
 //pantalon centro
 glBegin(GL_QUADS);
glVertex3f(-30,-10,0);
glVertex3f(30,-10,0);
glVertex3f(30,-20,0);
glVertex3f(-30,-20,0);
glEnd();
//pantalon centro 3d izquierdo
 glBegin(GL_QUADS);
glVertex3f(-30,-10,0);
glVertex3f(-30,-10,-30);
glVertex3f(-30,-20,-30);
glVertex3f(-30,-20,0);
glEnd();
//pantalon centro 3d derecho
 glBegin(GL_QUADS);
glVertex3f(30,-10,0);
glVertex3f(30,-10,-30);
glVertex3f(30,-20,-30);
glVertex3f(30,-20,0);
glEnd();
//pantalon centro 3d arriba
 glBegin(GL_QUADS);
glVertex3f(-30,-10,0);
glVertex3f(30,-10,0);
glVertex3f(30,-10,-30);
glVertex3f(-30,-10,-30);
glEnd();
//pantalon centro 3d abajo
 glBegin(GL_QUADS);
glVertex3f(-30,-20,0);
glVertex3f(30,-20,0);
glVertex3f(30,-20,-30);
glVertex3f(-30,-20,-30);
glEnd();
//pantalon centro 3d atras
 glBegin(GL_QUADS);
glVertex3f(-30,-10,-30);
glVertex3f(30,-10,-30);
glVertex3f(30,-20,-30);
glVertex3f(-30,-20,-30);
glEnd();
//pantalon izquierdo
 glBegin(GL_QUADS);
glVertex3f(-30,-20,-10);
glVertex3f(-25,-20,-10);
glVertex3f(-25,-40,-10);
glVertex3f(-30,-40,-10);
 glEnd();
 //pantalon izquierdo 3d izquierdo
 glBegin(GL_QUADS);
glVertex3f(-30,-20,-10);
glVertex3f(-30,-20,-20);
glVertex3f(-30,-40,-20);
glVertex3f(-30,-40,-10);
 glEnd();
 //pantalon izquierdo 3d derecho
 glBegin(GL_QUADS);
glVertex3f(-25,-20,-10);
glVertex3f(-25,-20,-20);
glVertex3f(-25,-40,-20);
glVertex3f(-25,-40,-10);
 glEnd();
 //pantalon izquierdo 3d arriba
 glBegin(GL_QUADS);
glVertex3f(-30,-20,-10);
glVertex3f(-25,-20,-10);
glVertex3f(-25,-20,-20);
glVertex3f(-30,-20,-20);
 glEnd();
 //pantalon izquierdo 3d abajo
 glBegin(GL_QUADS);
glVertex3f(-30,-40,-10);
glVertex3f(-25,-40,-10);
glVertex3f(-25,-40,-20);
glVertex3f(-30,-40,-20);
 glEnd();
 //pantalon izquierdo 3d atras
 glBegin(GL_QUADS);
glVertex3f(-30,-20,-20);
glVertex3f(-25,-20,-20);
glVertex3f(-25,-40,-20);
glVertex3f(-30,-40,-20);
 glEnd();
 //pantalon derecho
 glBegin(GL_QUADS);
glVertex3f(30,-20,-10);
glVertex3f(25,-20,-10);
glVertex3f(25,-40,-10);
glVertex3f(30,-40,-10);
 glEnd();
 //pantalon derecho 3d derecho
 glBegin(GL_QUADS);
glVertex3f(30,-20,-10);
glVertex3f(30,-20,-20);
glVertex3f(30,-40,-20);
glVertex3f(30,-40,-10);
 glEnd();
 //pantalon derecho 3d izquierdo
 glBegin(GL_QUADS);
glVertex3f(25,-20,-10);
glVertex3f(25,-20,-20);
glVertex3f(25,-40,-20);
glVertex3f(25,-40,-10);
 glEnd();
 //pantalon derecho 3d arriba
 glBegin(GL_QUADS);
glVertex3f(30,-20,-10);
glVertex3f(25,-20,-10);
glVertex3f(25,-20,-20);
glVertex3f(30,-20,-20);
 glEnd();
 //pantalon derecho 3d abajo
 glBegin(GL_QUADS);
glVertex3f(30,-40,-10);
glVertex3f(25,-40,-10);
glVertex3f(25,-40,-20);
glVertex3f(30,-40,-20);
 glEnd();
 //pantalon derecho 3d atras
 glBegin(GL_QUADS);
glVertex3f(30,-20,-20);
glVertex3f(25,-20,-20);
glVertex3f(25,-40,-20);
glVertex3f(30,-40,-20);
 glEnd();
 //pierna derecha
 glColor3f(0.98,0.82,0.75);
 glBegin(GL_QUADS);
glVertex3f(30,-40,-10);
glVertex3f(25,-40,-10);
glVertex3f(25,-70,-10);
glVertex3f(30,-70,-10);
 glEnd();
 //pierna derecha 3d izquierda
 glBegin(GL_QUADS);
glVertex3f(30,-40,-10);
glVertex3f(30,-40,-20);
glVertex3f(30,-70,-20);
glVertex3f(30,-70,-10);
 glEnd();
 //pierna derecha 3d derecha
 glBegin(GL_QUADS);
glVertex3f(25,-40,-10);
glVertex3f(25,-40,-20);
glVertex3f(25,-70,-20);
glVertex3f(25,-70,-10);
 glEnd();
  //pierna derecha 3d arriba
 glBegin(GL_QUADS);
glVertex3f(30,-40,-10);
glVertex3f(25,-40,-10);
glVertex3f(25,-40,-20);
glVertex3f(30,-40,-20);
 glEnd();
 //pierna derecha 3d abajo
 glBegin(GL_QUADS);
glVertex3f(30,-70,-10);
glVertex3f(25,-70,-10);
glVertex3f(25,-70,-20);
glVertex3f(30,-70,-20);
 glEnd();
 //pierna derecha 3d atras
 glBegin(GL_QUADS);
glVertex3f(30,-40,-20);
glVertex3f(25,-40,-20);
glVertex3f(25,-70,-20);
glVertex3f(30,-70,-20);
 glEnd();
 //pierna izquierda
 glBegin(GL_QUADS);
glVertex3f(-30,-40,-10);
glVertex3f(-25,-40,-10);
glVertex3f(-25,-70,-10);
glVertex3f(-30,-70,-10);
 glEnd();
  //pierna izquierda 3d derecha
 glBegin(GL_QUADS);
glVertex3f(-30,-40,-10);
glVertex3f(-30,-40,-20);
glVertex3f(-30,-70,-20);
glVertex3f(-30,-70,-10);
 glEnd();
 //pierna izquierda 3d izquierda
 glBegin(GL_QUADS);
glVertex3f(-25,-40,-10);
glVertex3f(-25,-40,-20);
glVertex3f(-25,-70,-20);
glVertex3f(-25,-70,-10);
 glEnd();
  //pierna izquierda 3d arriba
 glBegin(GL_QUADS);
glVertex3f(-30,-40,-10);
glVertex3f(-25,-40,-10);
glVertex3f(-25,-40,-20);
glVertex3f(-30,-40,-20);
 glEnd();
 //pierna izquierda 3d abajo
 glBegin(GL_QUADS);
glVertex3f(-30,-70,-10);
glVertex3f(-25,-70,-10);
glVertex3f(-25,-70,-20);
glVertex3f(-30,-70,-20);
 glEnd();
 //pierna izquierda 3d atras
 glBegin(GL_QUADS);
glVertex3f(-30,-40,-20);
glVertex3f(-25,-40,-20);
glVertex3f(-25,-70,-20);
glVertex3f(-30,-70,-20);
 glEnd();
 //brazo izquierdo arriba
  glBegin(GL_QUADS);
glVertex3f(-40,45,-10);
glVertex3f(-50,45,-10);
glVertex3f(-50,40,-10);
glVertex3f(-40,40,-10);
 glEnd();
  //brazo izquierdo arriba 3d izquierdo
  glBegin(GL_QUADS);
glVertex3f(-50,45,-10);
glVertex3f(-50,45,-20);
glVertex3f(-50,40,-20);
glVertex3f(-50,40,-10);
 glEnd();
 //brazo izquierdo arriba 3d derecho
  glBegin(GL_QUADS);
glVertex3f(-40,45,-10);
glVertex3f(-40,45,-20);
glVertex3f(-40,40,-20);
glVertex3f(-40,40,-10);
 glEnd();
 //brazo izquierdo arriba 3d arriba
  glBegin(GL_QUADS);
glVertex3f(-40,45,-10);
glVertex3f(-50,45,-10);
glVertex3f(-50,45,-20);
glVertex3f(-40,45,-20);
 glEnd();
 //brazo izquierdo arriba 3d abajo
  glBegin(GL_QUADS);
glVertex3f(-40,40,-10);
glVertex3f(-50,40,-10);
glVertex3f(-50,40,-20);
glVertex3f(-40,40,-20);
 glEnd();
 //brazo izquierdo arriba 3d atras
  glBegin(GL_QUADS);
glVertex3f(-40,45,-20);
glVertex3f(-50,45,-20);
glVertex3f(-50,40,-20);
glVertex3f(-40,40,-20);
 glEnd();
  //brazo izquierdo abajo
 glBegin(GL_QUADS);
glVertex3f(-45,45,-10);
glVertex3f(-50,45,-10);
glVertex3f(-50,0,-10);
glVertex3f(-45,0,-10);
 glEnd();
 //brazo izquierdo abajo 3d izquierdo
 glBegin(GL_QUADS);
glVertex3f(-50,45,-10);
glVertex3f(-50,45,-20);
glVertex3f(-50,0,-20);
glVertex3f(-50,0,-10);
 glEnd();
 //brazo izquierdo abajo 3d derecho
 glBegin(GL_QUADS);
glVertex3f(-45,45,-10);
glVertex3f(-45,45,-20);
glVertex3f(-45,0,-20);
glVertex3f(-45,0,-10);
 glEnd();
 //brazo izquierdo abajo 3d arriba
 glBegin(GL_QUADS);
glVertex3f(-45,45,-10);
glVertex3f(-50,45,-10);
glVertex3f(-50,45,-20);
glVertex3f(-45,45,-20);
 glEnd();
 //brazo izquierdo abajo 3d abajo
 glBegin(GL_QUADS);
glVertex3f(-45,0,-10);
glVertex3f(-50,0,-10);
glVertex3f(-50,0,-20);
glVertex3f(-45,0,-20);
 glEnd();
 //brazo izquierdo abajo 3d atras
 glBegin(GL_QUADS);
glVertex3f(-45,45,-20);
glVertex3f(-50,45,-20);
glVertex3f(-50,0,-20);
glVertex3f(-45,0,-20);
 glEnd();
 //dedo izquierdo
 glBegin(GL_QUADS);
glVertex3f(-45,6,-10);
glVertex3f(-42,6,-10);
glVertex3f(-42,3,-10);
glVertex3f(-45,3,-10);
 glEnd();
 //dedo izquierdo 3d izquierdo
 glBegin(GL_QUADS);
glVertex3f(-45,6,-10);
glVertex3f(-45,6,-13);
glVertex3f(-45,3,-13);
glVertex3f(-45,3,-10);
 glEnd();
 //dedo izquierdo 3d derecho
 glBegin(GL_QUADS);
glVertex3f(-42,6,-10);
glVertex3f(-42,6,-13);
glVertex3f(-42,3,-13);
glVertex3f(-42,3,-10);
 glEnd();
 //dedo izquierdo 3d arriba
 glBegin(GL_QUADS);
glVertex3f(-45,6,-10);
glVertex3f(-42,6,-10);
glVertex3f(-42,6,-13);
glVertex3f(-45,6,-13);
 glEnd();
 //dedo izquierdo 3d abajo
 glBegin(GL_QUADS);
glVertex3f(-45,3,-10);
glVertex3f(-42,3,-10);
glVertex3f(-42,3,-13);
glVertex3f(-45,3,-13);
 glEnd();
  //dedo izquierdo 3d atras
 glBegin(GL_QUADS);
glVertex3f(-45,6,-13);
glVertex3f(-42,6,-13);
glVertex3f(-42,3,-13);
glVertex3f(-45,3,-13);
 glEnd();
 //brazo derecho arriba
  glBegin(GL_QUADS);
glVertex3f(40,45,-10);
glVertex3f(50,45,-10);
glVertex3f(50,40,-10);
glVertex3f(40,40,-10);
 glEnd();
  //brazo derecho arriba 3d derecho
  glBegin(GL_QUADS);
glVertex3f(50,45,-10);
glVertex3f(50,45,-20);
glVertex3f(50,40,-20);
glVertex3f(50,40,-10);
 glEnd();
 //brazo derecho arriba 3d izquierdo
  glBegin(GL_QUADS);
glVertex3f(40,45,-10);
glVertex3f(40,45,-20);
glVertex3f(40,40,-20);
glVertex3f(40,40,-10);
 glEnd();
 //brazo derecho arriba 3d arriba
  glBegin(GL_QUADS);
glVertex3f(40,45,-10);
glVertex3f(50,45,-10);
glVertex3f(50,45,-20);
glVertex3f(40,45,-20);
 glEnd();
 //brazo derecho arriba 3d abajo
  glBegin(GL_QUADS);
glVertex3f(40,40,-10);
glVertex3f(50,40,-10);
glVertex3f(50,40,-20);
glVertex3f(40,40,-20);
 glEnd();
 //brazo derecho arriba 3d atras
  glBegin(GL_QUADS);
glVertex3f(40,45,-20);
glVertex3f(50,45,-20);
glVertex3f(50,40,-20);
glVertex3f(40,40,-20);
 glEnd();
 //brazo derecho abajo
 glBegin(GL_QUADS);
glVertex3f(45,45,-10);
glVertex3f(50,45,-10);
glVertex3f(50,0,-10);
glVertex3f(45,0,-10);
 glEnd();
 //brazo derecho abajo 3d derecho
 glBegin(GL_QUADS);
glVertex3f(50,45,-10);
glVertex3f(50,45,-20);
glVertex3f(50,0,-20);
glVertex3f(50,0,-10);
 glEnd();
 //brazo derecho abajo 3d derecho
 glBegin(GL_QUADS);
glVertex3f(45,45,-10);
glVertex3f(45,45,-20);
glVertex3f(45,0,-20);
glVertex3f(45,0,-10);
 glEnd();
 //brazo derecho abajo 3d arriba
 glBegin(GL_QUADS);
glVertex3f(45,45,-10);
glVertex3f(50,45,-10);
glVertex3f(50,45,-20);
glVertex3f(45,45,-20);
 glEnd();
 //brazo derecho abajo 3d abajo
 glBegin(GL_QUADS);
glVertex3f(45,0,-10);
glVertex3f(50,0,-10);
glVertex3f(50,0,-20);
glVertex3f(45,0,-20);
 glEnd();
 //brazo derecho abajo 3d atras
 glBegin(GL_QUADS);
glVertex3f(45,45,-20);
glVertex3f(50,45,-20);
glVertex3f(50,0,-20);
glVertex3f(45,0,-20);
 glEnd();
 //dedo derecho
 glBegin(GL_QUADS);
glVertex3f(45,6,-10);
glVertex3f(42,6,-10);
glVertex3f(42,3,-10);
glVertex3f(45,3,-10);
 glEnd();
 //dedo derecho 3d derecho
 glBegin(GL_QUADS);
glVertex3f(45,6,-10);
glVertex3f(45,6,-13);
glVertex3f(45,3,-13);
glVertex3f(45,3,-10);
 glEnd();
 //dedo derecho 3d izquierdo
 glBegin(GL_QUADS);
glVertex3f(42,6,-10);
glVertex3f(42,6,-13);
glVertex3f(42,3,-13);
glVertex3f(42,3,-10);
 glEnd();
 //dedo derecho 3d arriba
 glBegin(GL_QUADS);
glVertex3f(45,6,-10);
glVertex3f(42,6,-10);
glVertex3f(42,6,-13);
glVertex3f(45,6,-13);
 glEnd();
 //dedo derecho 3d abajo
 glBegin(GL_QUADS);
glVertex3f(45,3,-10);
glVertex3f(42,3,-10);
glVertex3f(42,3,-13);
glVertex3f(45,3,-13);
 glEnd();
   //dedo derecho 3d atras
 glBegin(GL_QUADS);
glVertex3f(45,6,-13);
glVertex3f(42,6,-13);
glVertex3f(42,3,-13);
glVertex3f(45,3,-13);
 glEnd();
 //calcetin izquierdo
 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
glVertex3f(-25,-70,-10);
glVertex3f(-30,-70,-10);
glVertex3f(-30,-75,-10);
glVertex3f(-25,-75,-10);
 glEnd();
 //calcetin izquierdo 3d izquierdo
 glBegin(GL_QUADS);
glVertex3f(-30,-70,-10);
glVertex3f(-30,-70,-20);
glVertex3f(-30,-75,-20);
glVertex3f(-30,-75,-10);
 glEnd();
  //calcetin izquierdo 3d derecho
 glBegin(GL_QUADS);
glVertex3f(-25,-70,-10);
glVertex3f(-25,-70,-20);
glVertex3f(-25,-75,-20);
glVertex3f(-25,-75,-10);
 glEnd();
 //calcetin izquierdo 3d arriba
 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
glVertex3f(-25,-75,-10);
glVertex3f(-30,-75,-10);
glVertex3f(-30,-75,-20);
glVertex3f(-25,-75,-20);
 glEnd();
 //calcetin izquierdo 3d abajo
 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
glVertex3f(-25,-70,-10);
glVertex3f(-30,-70,-10);
glVertex3f(-30,-70,-20);
glVertex3f(-25,-70,-20);
 glEnd();
 //calcetin izquierdo 3d atras
 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
glVertex3f(-25,-70,-20);
glVertex3f(-30,-70,-20);
glVertex3f(-30,-75,-20);
glVertex3f(-25,-75,-20);
 glEnd();
 //calcetin derecho
 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
glVertex3f(25,-70,-10);
glVertex3f(30,-70,-10);
glVertex3f(30,-75,-10);
glVertex3f(25,-75,-10);
 glEnd();
 //calcetin derecho 3d derecho
 glBegin(GL_QUADS);
glVertex3f(30,-70,-10);
glVertex3f(30,-70,-20);
glVertex3f(30,-75,-20);
glVertex3f(30,-75,-10);
 glEnd();
  //calcetin derecho 3d izquierdo
 glBegin(GL_QUADS);
glVertex3f(25,-70,-10);
glVertex3f(25,-70,-20);
glVertex3f(25,-75,-20);
glVertex3f(25,-75,-10);
 glEnd();
 //calcetin derecho 3d arriba
 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
glVertex3f(25,-75,-10);
glVertex3f(30,-75,-10);
glVertex3f(30,-75,-20);
glVertex3f(25,-75,-20);
 glEnd();
 //calcetin derecho 3d abajo
 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
glVertex3f(25,-70,-10);
glVertex3f(30,-70,-10);
glVertex3f(30,-70,-20);
glVertex3f(25,-70,-20);
 glEnd();
 //calcetin derecho 3d atras
 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
glVertex3f(25,-70,-20);
glVertex3f(30,-70,-20);
glVertex3f(30,-75,-20);
glVertex3f(25,-75,-20);
 glEnd();
 //pie izquierdo
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_QUADS);
glVertex3f(-22,-75,-7);
glVertex3f(-33,-75,-7);
glVertex3f(-33,-80,-7);
glVertex3f(-22,-80,-7);
 glEnd();
 //pie izquierdo 3d izquierdo
 glBegin(GL_QUADS);
glVertex3f(-33,-75,-7);
glVertex3f(-33,-75,-23);
glVertex3f(-33,-80,-23);
glVertex3f(-33,-80,-7);
 glEnd();
 //pie izquierdo 3d derecho
 glBegin(GL_QUADS);
glVertex3f(-22,-75,-7);
glVertex3f(-22,-75,-23);
glVertex3f(-22,-80,-23);
glVertex3f(-22,-80,-7);
 glEnd();
 //pie izquierdo 3d arriba
 glBegin(GL_QUADS);
glVertex3f(-22,-75,-7);
glVertex3f(-33,-75,-7);
glVertex3f(-33,-75,-23);
glVertex3f(-22,-75,-23);
 glEnd();
 //pie izquierdo 3d abajo
 glBegin(GL_QUADS);
glVertex3f(-22,-80,-7);
glVertex3f(-33,-80,-7);
glVertex3f(-33,-80,-23);
glVertex3f(-22,-80,-23);
 glEnd();
  //pie izquierdo 3d atras
 glBegin(GL_QUADS);
glVertex3f(-22,-75,-23);
glVertex3f(-33,-75,-23);
glVertex3f(-33,-80,-23);
glVertex3f(-22,-80,-23);
 glEnd();
//pie derecho
 glBegin(GL_QUADS);
glVertex3f(22,-75,-7);
glVertex3f(33,-75,-7);
glVertex3f(33,-80,-7);
glVertex3f(22,-80,-7);
 glEnd();
 //pie derecho 3d derecho
 glBegin(GL_QUADS);
glVertex3f(33,-75,-7);
glVertex3f(33,-75,-23);
glVertex3f(33,-80,-23);
glVertex3f(33,-80,-7);
 glEnd();
 //pie derecho 3d izquierdo
 glBegin(GL_QUADS);
glVertex3f(22,-75,-7);
glVertex3f(22,-75,-23);
glVertex3f(22,-80,-23);
glVertex3f(22,-80,-7);
 glEnd();
 //pie derecho 3d arriba
 glBegin(GL_QUADS);
glVertex3f(22,-75,-7);
glVertex3f(33,-75,-7);
glVertex3f(33,-75,-23);
glVertex3f(22,-75,-23);
 glEnd();
 //pie derecho 3d abajo
 glBegin(GL_QUADS);
glVertex3f(22,-80,-7);
glVertex3f(33,-80,-7);
glVertex3f(33,-80,-23);
glVertex3f(22,-80,-23);
 glEnd();
  //pie derecho 3d atras
 glBegin(GL_QUADS);
glVertex3f(22,-75,-23);
glVertex3f(33,-75,-23);
glVertex3f(33,-80,-23);
glVertex3f(22,-80,-23);
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
	glutCreateWindow("Finn the human");
	init();
	glEnable(GL_DEPTH_TEST);
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
