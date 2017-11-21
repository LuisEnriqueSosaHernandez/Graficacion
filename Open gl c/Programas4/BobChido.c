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
void finn(){
  //cuerpo esponja adelante
  glColor3f(1,1,0);
  glBegin(GL_QUADS);
  glVertex3f(25,0,0);
  glVertex3f(-25,0,0);
  glVertex3f(-25,55,0);
  glVertex3f(25,55,0);
  glEnd();
  //cuerpo esponja 3d lado izquierdo
  glBegin(GL_QUADS);
  glVertex3f(-25,0,0);
  glVertex3f(-25,0,-25);
  glVertex3f(-25,55,-25);
  glVertex3f(-25,55,0);
  glEnd();
  //cuerpo esponja 3d lado derecho
  glBegin(GL_QUADS);
  glVertex3f(25,0,0);
  glVertex3f(25,0,-25);
  glVertex3f(25,55,-25);
  glVertex3f(25,55,0);
  glEnd();
  //cuerpo esponja 3d lado trasero
  glBegin(GL_QUADS);
  glVertex3f(25,0,-25);
  glVertex3f(-25,0,-25);
  glVertex3f(-25,55,-25);
  glVertex3f(25,55,-25);
  glEnd();
  //cuerpo esponja 3d lado arriba
  glBegin(GL_QUADS);
  glVertex3f(25,55,0);
  glVertex3f(-25,55,0);
  glVertex3f(-25,55,-25);
  glVertex3f(25,55,-25);
  glEnd();
  //cuerpo esponja 3d lado abajo
  glColor3f(1,1,0);
  glBegin(GL_QUADS);
  glVertex3f(25,0,0);
  glVertex3f(-25,0,0);
  glVertex3f(-25,0,-25);
  glVertex3f(25,0,-25);
  glEnd();
  //cara esponja
  glColor3f(1,0.8,0);
  //nariz esponja atras
  glBegin(GL_QUADS);
  glVertex3f(-2,26,0);
  glVertex3f(2,26,0);
  glVertex3f(2,30,0);
  glVertex3f(-2,30,0);
  glEnd();
  //nariz esponja 3d adelante
  glBegin(GL_QUADS);
  glVertex3f(-2,26,10);
  glVertex3f(2,26,10);
  glVertex3f(2,30,10);
  glVertex3f(-2,30,10);
  glEnd();
  //nariz esponja 3d lado izquierdo
  glBegin(GL_QUADS);
  glVertex3f(-2,26,0);
  glVertex3f(-2,26,10);
  glVertex3f(-2,30,10);
  glVertex3f(-2,30,0);
  glEnd();
  //nariz esponja 3d lado derecho
  glBegin(GL_QUADS);
  glVertex3f(2,26,0);
  glVertex3f(2,26,10);
  glVertex3f(2,30,10);
  glVertex3f(2,30,0);
  glEnd();
  //nariz esponja 3d arriba
  glBegin(GL_QUADS);
  glVertex3f(-2,30,10);
  glVertex3f(2,30,10);
  glVertex3f(2,30,0);
  glVertex3f(-2,30,0);
  glEnd();
  //nariz esponja 3d abajo
  glBegin(GL_QUADS);
  glVertex3f(-2,26,10);
  glVertex3f(2,26,10);
  glVertex3f(2,26,0);
  glVertex3f(-2,26,0);
  glEnd();
  //ojo izquierdo
  glColor3f(1,1,1);
  glBegin(GL_QUADS);
  glVertex3f(-20,35,1);
  glVertex3f(-5,35,1);
  glVertex3f(-5,50,1);
  glVertex3f(-20,50,1);
  glEnd();
  //rededor de pupila
  glColor3f(0.439216,0.858824,0.858824);
  glBegin(GL_QUADS);
  glVertex3f(-15,40,2);
  glVertex3f(-10,40,2);
  glVertex3f(-10,45,2);
  glVertex3f(-15,45,2);
  glEnd();
    //pupila
  glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex3f(-13,42,3);
  glVertex3f(-12,42,3);
  glVertex3f(-12,43,3);
  glVertex3f(-13,43,3);
  glEnd();
  //cejas
   glLineWidth(2);
  //ceja lado izquierdo 
  //ceja lado izquierdo
 glBegin(GL_LINE_STRIP);
 glVertex3f(-18,50,1);
 glVertex3f(-20,55,1);
 glEnd();
 //ceja lado enmedio
 glBegin(GL_LINE_STRIP);
 glVertex3f(-12,50,1);
 glVertex3f(-12,55,1);
 glEnd();
 //ceja lado derecho
 glBegin(GL_LINE_STRIP);
 glVertex3f(-7,50,1);
 glVertex3f(-5,55,1);
 glEnd();
 //ceja lado derecho
  //ceja lado derecho
 glBegin(GL_LINE_STRIP);
 glVertex3f(18,50,1);
 glVertex3f(20,55,1);
 glEnd();
 //ceja lado enmedio
 glBegin(GL_LINE_STRIP);
 glVertex3f(12,50,1);
 glVertex3f(12,55,1);
 glEnd();
 //ceja lado izquierdo
 glBegin(GL_LINE_STRIP);
 glVertex3f(7,50,1);
 glVertex3f(5,55,1);
 glEnd();
   //ojo derecho
  glColor3f(1,1,1);
  glBegin(GL_QUADS);
  glVertex3f(20,35,1);
  glVertex3f(5,35,1);
  glVertex3f(5,50,1);
  glVertex3f(20,50,1);
  glEnd();
  //rededor de pupila
  glColor3f(0.439216,0.858824,0.858824);
  glBegin(GL_QUADS);
  glVertex3f(15,40,2);
  glVertex3f(10,40,2);
  glVertex3f(10,45,2);
  glVertex3f(15,45,2);
  glEnd();
    //pupila
  glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex3f(13,42,3);
  glVertex3f(12,42,3);
  glVertex3f(12,43,3);
  glVertex3f(13,43,3);
  glEnd();
  //boca lado izquierdo
  glBegin(GL_QUADS);
  glVertex3f(-15,10,1);
  glVertex3f(-10,10,1);
  glVertex3f(-10,15,1);
  glVertex3f(-15,15,1);
  glEnd();
  //boca lado derecho
  glBegin(GL_QUADS);
  glVertex3f(15,10,1);
  glVertex3f(10,10,1);
  glVertex3f(10,15,1);
  glVertex3f(15,15,1);
  glEnd();
  //boca lado centro
  glBegin(GL_QUADS);
  glVertex3f(-10,10,1);
  glVertex3f(10,10,1);
  glVertex3f(10,5,1);
  glVertex3f(-10,5,1);
  glEnd();
  //pantalon adelante
  glColor3f(0.36,0.25,0.2);
  glBegin(GL_QUADS);
  glVertex3f(-25,0,0);
  glVertex3f(25,0,0);
  glVertex3f(25,-20,0);
  glVertex3f(-25,-20,0);
  glEnd();
  //pantalon 3d atras
  glBegin(GL_QUADS);
  glVertex3f(-25,0,-25);
  glVertex3f(25,0,-25);
  glVertex3f(25,-20,-25);
  glVertex3f(-25,-20,-25);
  glEnd();
  //pantalon 3d lado izquierdo
  glBegin(GL_QUADS);
  glVertex3f(25,0,0);
  glVertex3f(25,0,-25);
  glVertex3f(25,-20,-25);
  glVertex3f(25,-20,0);
  glEnd();
  //pantalon 3d lado derecho
  glBegin(GL_QUADS);
  glVertex3f(-25,0,0);
  glVertex3f(-25,0,-25);
  glVertex3f(-25,-20,-25);
  glVertex3f(-25,-20,0);
  glEnd();
  //pantalon 3d lado abajo
  glBegin(GL_QUADS);
  glVertex3f(-25,-20,0);
  glVertex3f(25,-20,0);
  glVertex3f(25,-20,-25);
  glVertex3f(-25,-20,-25);
  glEnd();
  //pantalon 3d lado arriba
  glBegin(GL_QUADS);
  glVertex3f(-25,0,0);
  glVertex3f(25,0,0);
  glVertex3f(25,0,-25);
  glVertex3f(-25,0,-25);
  glEnd();
  //pantalon pierna izquierdo
  //pantalon pierna adelante
   glBegin(GL_QUADS);
  glVertex3f(-20,-20,-10);
  glVertex3f(-10,-20,-10);
  glVertex3f(-10,-25,-10);
  glVertex3f(-20,-25,-10);
  glEnd(); 
  //pantalon pierna atras
   glBegin(GL_QUADS);
  glVertex3f(-20,-20,-15);
  glVertex3f(-10,-20,-15);
  glVertex3f(-10,-25,-15);
  glVertex3f(-20,-25,-15);
  glEnd(); 
  //pantalon pierna izquierda
   glBegin(GL_QUADS);
  glVertex3f(-20,-20,-15);
  glVertex3f(-20,-20,-10);
  glVertex3f(-20,-25,-10);
  glVertex3f(-20,-25,-15);
  glEnd();
  //pantalon pierna derecha
   glBegin(GL_QUADS);
  glVertex3f(-10,-20,-15);
  glVertex3f(-10,-20,-10);
  glVertex3f(-10,-25,-10);
  glVertex3f(-10,-25,-15);
  glEnd();
  //pantalon pierna abajo
   glBegin(GL_QUADS);
  glVertex3f(-20,-25,-15);
  glVertex3f(-10,-25,-15);
  glVertex3f(-10,-25,-10);
  glVertex3f(-20,-25,-10);
  glEnd(); 
  //pantalon pierna arriba
   glBegin(GL_QUADS);
  glVertex3f(-20,-20,-15);
  glVertex3f(-10,-20,-15);
  glVertex3f(-10,-20,-10);
  glVertex3f(-20,-20,-10);
  glEnd(); 
  //pantalon pierna derecha
  //pantalon pierna adelante
   glBegin(GL_QUADS);
  glVertex3f(20,-20,-10);
  glVertex3f(10,-20,-10);
  glVertex3f(10,-25,-10);
  glVertex3f(20,-25,-10);
  glEnd(); 
  //pantalon pierna atras
   glBegin(GL_QUADS);
  glVertex3f(20,-20,-15);
  glVertex3f(10,-20,-15);
  glVertex3f(10,-25,-15);
  glVertex3f(20,-25,-15);
  glEnd(); 
  //pantalon pierna derecha
   glBegin(GL_QUADS);
  glVertex3f(20,-20,-15);
  glVertex3f(20,-20,-10);
  glVertex3f(20,-25,-10);
  glVertex3f(20,-25,-15);
  glEnd();
  //pantalon pierna izquierda
   glBegin(GL_QUADS);
  glVertex3f(10,-20,-15);
  glVertex3f(10,-20,-10);
  glVertex3f(10,-25,-10);
  glVertex3f(10,-25,-15);
  glEnd();
  //pantalon pierna abajo
   glBegin(GL_QUADS);
  glVertex3f(20,-25,-15);
  glVertex3f(10,-25,-15);
  glVertex3f(10,-25,-10);
  glVertex3f(20,-25,-10);
  glEnd(); 
  //pantalon pierna arriba
   glBegin(GL_QUADS);
  glVertex3f(20,-20,-15);
  glVertex3f(10,-20,-15);
  glVertex3f(10,-20,-10);
  glVertex3f(20,-20,-10);
  glEnd();
  //manga brazos 
  glColor3f(1,1,1);
  //manga brazo derecho
  //manga brazo adelante
  glBegin(GL_QUADS);
  glVertex3f(-25,0,-15);
  glVertex3f(-30,0,-15);
  glVertex3f(-30,-8,-15);
  glVertex3f(-25,-8,-15);
  glEnd();
  //manga brazo atras
  glBegin(GL_QUADS);
  glVertex3f(-25,0,-10);
  glVertex3f(-30,0,-10);
  glVertex3f(-30,-8,-10);
  glVertex3f(-25,-8,-10);
  glEnd();
  //manga brazo izquierdo
  glBegin(GL_QUADS);
  glVertex3f(-30,0,-10);
  glVertex3f(-30,0,-15);
  glVertex3f(-30,-8,-15);
  glVertex3f(-30,-8,-10);
  glEnd();
  //manga brazo derecho
  glBegin(GL_QUADS);
  glVertex3f(-25,0,-10);
  glVertex3f(-25,0,-15);
  glVertex3f(-25,-8,-15);
  glVertex3f(-25,-8,-10);
  glEnd();
  //manga brazo arriba
  glBegin(GL_QUADS);
  glVertex3f(-25,-0,-10);
  glVertex3f(-30,-0,-10);
  glVertex3f(-30,-0,-15);
  glVertex3f(-25,-0,-15);
  glEnd();
   //manga brazo abajo
  glBegin(GL_QUADS);
  glVertex3f(-25,-8,-10);
  glVertex3f(-30,-8,-10);
  glVertex3f(-30,-8,-15);
  glVertex3f(-25,-8,-15);
  glEnd();
  //manga brazo izquierdo
  //manga brazo adelante
  glBegin(GL_QUADS);
  glVertex3f(25,0,-15);
  glVertex3f(30,0,-15);
  glVertex3f(30,-8,-15);
  glVertex3f(25,-8,-15);
  glEnd();
  //manga brazo atras
  glBegin(GL_QUADS);
  glVertex3f(25,0,-10);
  glVertex3f(30,0,-10);
  glVertex3f(30,-8,-10);
  glVertex3f(25,-8,-10);
  glEnd();
  //manga brazo izquierdo
  glBegin(GL_QUADS);
  glVertex3f(30,0,-10);
  glVertex3f(30,0,-15);
  glVertex3f(30,-8,-15);
  glVertex3f(30,-8,-10);
  glEnd();
  //manga brazo derecho
  glBegin(GL_QUADS);
  glVertex3f(25,0,-10);
  glVertex3f(25,0,-15);
  glVertex3f(25,-8,-15);
  glVertex3f(25,-8,-10);
  glEnd();
  //manga brazo arriba
  glBegin(GL_QUADS);
  glVertex3f(25,-0,-10);
  glVertex3f(30,-0,-10);
  glVertex3f(30,-0,-15);
  glVertex3f(25,-0,-15);
  glEnd();
   //manga brazo abajo
  glBegin(GL_QUADS);
  glVertex3f(25,-8,-10);
  glVertex3f(30,-8,-10);
  glVertex3f(30,-8,-15);
  glVertex3f(25,-8,-15);
  glEnd();
  //corbata
  glColor3f(1,0,0);
  glBegin(GL_POLYGON);
  glVertex3f(5,0,1);
  glVertex3f(-5,0,1);
  glVertex3f(-5,-10,1);
  glVertex3f(0,-13,1);
  glVertex3f(5,-10,1);
  glEnd();
  //brazos
  glColor3f(1,1,0);
  //brazo derecho 1
  //brazo derecho adelante
   glBegin(GL_QUADS);
  glVertex3f(30,-6,-11);
  glVertex3f(40,-6,-11);
  glVertex3f(40,-2,-11);
  glVertex3f(30,-2,-11);
  glEnd();
  //brazo derecho atras
   glBegin(GL_QUADS);
  glVertex3f(30,-6,-14);
  glVertex3f(40,-6,-14);
  glVertex3f(40,-2,-14);
  glVertex3f(30,-2,-14);
  glEnd();
  //brazo derecho derecho
   glBegin(GL_QUADS);
  glVertex3f(30,-6,-11);
  glVertex3f(30,-6,-14);
  glVertex3f(30,-2,-14);
  glVertex3f(30,-2,-11);
  glEnd();
  //brazo derecho izquierdo
   glBegin(GL_QUADS);
  glVertex3f(40,-6,-11);
  glVertex3f(40,-6,-14);
  glVertex3f(40,-2,-14);
  glVertex3f(40,-2,-11);
  glEnd();
  //brazo derecho arriba
   glBegin(GL_QUADS);
  glVertex3f(30,-2,-11);
  glVertex3f(40,-2,-11);
  glVertex3f(40,-2,-14);
  glVertex3f(30,-2,-14);
  glEnd();
  //brazo derecho abajo
   glBegin(GL_QUADS);
  glVertex3f(30,-6,-11);
  glVertex3f(40,-6,-11);
  glVertex3f(40,-6,-14);
  glVertex3f(30,-6,-14);
  glEnd();
  //brazo derecho 2 adelante
   glBegin(GL_QUADS);
  glVertex3f(36,-6,-11);
  glVertex3f(40,-6,-11);
  glVertex3f(40,-25,-11);
  glVertex3f(36,-25,-11);
  glEnd();
  //brazo derecho 2 atras
   glBegin(GL_QUADS);
  glVertex3f(36,-6,-14);
  glVertex3f(40,-6,-14);
  glVertex3f(40,-25,-14);
  glVertex3f(36,-25,-14);
  glEnd();
  //brazo derecho 2 izquierda
   glBegin(GL_QUADS);
  glVertex3f(36,-6,-11);
  glVertex3f(36,-6,-14);
  glVertex3f(36,-25,-14);
  glVertex3f(36,-25,-11);
  glEnd();
  //brazo derecho 2 derecha
   glBegin(GL_QUADS);
  glVertex3f(40,-6,-11);
  glVertex3f(40,-6,-14);
  glVertex3f(40,-25,-14);
  glVertex3f(40,-25,-11);
  glEnd();
  //brazo derecho 2 arriba
   glBegin(GL_QUADS);
  glVertex3f(36,-6,-11);
  glVertex3f(40,-6,-11);
  glVertex3f(40,-6,-14);
  glVertex3f(36,-6,-14);
  glEnd();
  //brazo derecho 2 abajo
   glBegin(GL_QUADS);
  glVertex3f(36,-25,-11);
  glVertex3f(40,-25,-11);
  glVertex3f(40,-25,-14);
  glVertex3f(36,-25,-14);
  glEnd();
  //dedo derecho adelante
  glBegin(GL_QUADS);
  glVertex3f(36,-23,-12);
  glVertex3f(33,-23,-12);
  glVertex3f(33,-20,-12);
  glVertex3f(36,-20,-12);
  glEnd();
  //dedo derecho atras
  glBegin(GL_QUADS);
  glVertex3f(36,-23,-13);
  glVertex3f(33,-23,-13);
  glVertex3f(33,-20,-13);
  glVertex3f(36,-20,-13);
  glEnd();
  //dedo derecho izquierda
  glBegin(GL_QUADS);
  glVertex3f(33,-23,-12);
  glVertex3f(33,-23,-13);
  glVertex3f(33,-20,-13);
  glVertex3f(33,-20,-12);
  glEnd();
  //dedo derecho derecha
  glBegin(GL_QUADS);
  glVertex3f(36,-23,-12);
  glVertex3f(36,-23,-13);
  glVertex3f(36,-20,-13);
  glVertex3f(36,-20,-12);
  glEnd();
  //dedo derecho arriba
  glBegin(GL_QUADS);
  glVertex3f(36,-20,-12);
  glVertex3f(33,-20,-12);
  glVertex3f(33,-20,-13);
  glVertex3f(36,-20,-13);
  glEnd();
  //dedo derecho abajo
  glBegin(GL_QUADS);
  glVertex3f(36,-23,-12);
  glVertex3f(33,-23,-12);
  glVertex3f(33,-23,-13);
  glVertex3f(36,-23,-13);
  glEnd();
  //brazo izquierdo 1
  //brazo izquierdo adelante
   glBegin(GL_QUADS);
  glVertex3f(-30,-6,-11);
  glVertex3f(-40,-6,-11);
  glVertex3f(-40,-2,-11);
  glVertex3f(-30,-2,-11);
  glEnd();
  //brazo izquierdo atras
   glBegin(GL_QUADS);
  glVertex3f(-30,-6,-14);
  glVertex3f(-40,-6,-14);
  glVertex3f(-40,-2,-14);
  glVertex3f(-30,-2,-14);
  glEnd();
  //brazo izquierdo derecho
   glBegin(GL_QUADS);
  glVertex3f(-30,-6,-11);
  glVertex3f(-30,-6,-14);
  glVertex3f(-30,-2,-14);
  glVertex3f(-30,-2,-11);
  glEnd();
  //brazo izquierdo izquierdo
   glBegin(GL_QUADS);
  glVertex3f(-40,-6,-11);
  glVertex3f(-40,-6,-14);
  glVertex3f(-40,-2,-14);
  glVertex3f(-40,-2,-11);
  glEnd();
  //brazo izquierdo arriba
   glBegin(GL_QUADS);
  glVertex3f(-30,-2,-11);
  glVertex3f(-40,-2,-11);
  glVertex3f(-40,-2,-14);
  glVertex3f(-30,-2,-14);
  glEnd();
  //brazo izquierdo abajo
   glBegin(GL_QUADS);
  glVertex3f(-30,-6,-11);
  glVertex3f(-40,-6,-11);
  glVertex3f(-40,-6,-14);
  glVertex3f(-30,-6,-14);
  glEnd();
  //brazo izquierdo 2 adelante
   glBegin(GL_QUADS);
  glVertex3f(-36,-6,-11);
  glVertex3f(-40,-6,-11);
  glVertex3f(-40,-25,-11);
  glVertex3f(-36,-25,-11);
  glEnd();
  //brazo izquierdo 2 atras
   glBegin(GL_QUADS);
  glVertex3f(-36,-6,-14);
  glVertex3f(-40,-6,-14);
  glVertex3f(-40,-25,-14);
  glVertex3f(-36,-25,-14);
  glEnd();
  //brazo izquierdo 2 izquierda
   glBegin(GL_QUADS);
  glVertex3f(-36,-6,-11);
  glVertex3f(-36,-6,-14);
  glVertex3f(-36,-25,-14);
  glVertex3f(-36,-25,-11);
  glEnd();
  //brazo izquierdo 2 derecha
   glBegin(GL_QUADS);
  glVertex3f(-40,-6,-11);
  glVertex3f(-40,-6,-14);
  glVertex3f(-40,-25,-14);
  glVertex3f(-40,-25,-11);
  glEnd();
  //brazo izquierdo 2 arriba
   glBegin(GL_QUADS);
  glVertex3f(-36,-6,-11);
  glVertex3f(-40,-6,-11);
  glVertex3f(-40,-6,-14);
  glVertex3f(-36,-6,-14);
  glEnd();
  //brazo izquierdo 2 abajo
   glBegin(GL_QUADS);
  glVertex3f(-36,-25,-11);
  glVertex3f(-40,-25,-11);
  glVertex3f(-40,-25,-14);
  glVertex3f(-36,-25,-14);
  glEnd();
  //dedo izquierdo adelante
  glBegin(GL_QUADS);
  glVertex3f(-36,-23,-12);
  glVertex3f(-33,-23,-12);
  glVertex3f(-33,-20,-12);
  glVertex3f(-36,-20,-12);
  glEnd();
  //dedo izquierdo atras
  glBegin(GL_QUADS);
  glVertex3f(-36,-23,-13);
  glVertex3f(-33,-23,-13);
  glVertex3f(-33,-20,-13);
  glVertex3f(-36,-20,-13);
  glEnd();
  //dedo izquierdo izquierda
  glBegin(GL_QUADS);
  glVertex3f(-33,-23,-12);
  glVertex3f(-33,-23,-13);
  glVertex3f(-33,-20,-13);
  glVertex3f(-33,-20,-12);
  glEnd();
  //dedo izquierdo derecha
  glBegin(GL_QUADS);
  glVertex3f(-36,-23,-12);
  glVertex3f(-36,-23,-13);
  glVertex3f(-36,-20,-13);
  glVertex3f(-36,-20,-12);
  glEnd();
  //dedo izquierdo arriba
  glBegin(GL_QUADS);
  glVertex3f(-36,-20,-12);
  glVertex3f(-33,-20,-12);
  glVertex3f(-33,-20,-13);
  glVertex3f(-36,-20,-13);
  glEnd();
  //dedo izquierdo abajo
  glBegin(GL_QUADS);
  glVertex3f(-36,-23,-12);
  glVertex3f(-33,-23,-12);
  glVertex3f(-33,-23,-13);
  glVertex3f(-36,-23,-13);
  glEnd();
  //piernas
  //pierna izquierda adelante 
  glBegin(GL_QUADS);
  glVertex3f(-18,-25,-11);
  glVertex3f(-13,-25,-11);
  glVertex3f(-13,-40,-11);
  glVertex3f(-18,-40,-11);
  glEnd();
  //pierna izquierda atras
  glBegin(GL_QUADS);
  glVertex3f(-18,-25,-14);
  glVertex3f(-13,-25,-14);
  glVertex3f(-13,-40,-14);
  glVertex3f(-18,-40,-14);
  glEnd();
  //pierna izquierda izquierda
  glBegin(GL_QUADS);
  glVertex3f(-18,-25,-11);
  glVertex3f(-18,-25,-14);
  glVertex3f(-18,-40,-14);
  glVertex3f(-18,-40,-11);
  glEnd();
  //pierna izquierda derecha
  glBegin(GL_QUADS);
  glVertex3f(-13,-25,-11);
  glVertex3f(-13,-25,-14);
  glVertex3f(-13,-40,-14);
  glVertex3f(-13,-40,-11);
  glEnd();
  //pierna izquierda arriba
  glBegin(GL_QUADS);
  glVertex3f(-18,-25,-11);
  glVertex3f(-13,-25,-11);
  glVertex3f(-13,-25,-14);
  glVertex3f(-18,-25,-14);
  glEnd();
  //pierna izquierda abajo
  glBegin(GL_QUADS);
  glVertex3f(-18,-40,-11);
  glVertex3f(-13,-40,-11);
  glVertex3f(-13,-40,-14);
  glVertex3f(-18,-40,-14);
  glEnd();
  //pierna derecha adelante 
  glBegin(GL_QUADS);
  glVertex3f(18,-25,-11);
  glVertex3f(13,-25,-11);
  glVertex3f(13,-40,-11);
  glVertex3f(18,-40,-11);
  glEnd();
  //pierna derecha atras
  glBegin(GL_QUADS);
  glVertex3f(18,-25,-14);
  glVertex3f(13,-25,-14);
  glVertex3f(13,-40,-14);
  glVertex3f(18,-40,-14);
  glEnd();
  //pierna derecha izquierda
  glBegin(GL_QUADS);
  glVertex3f(18,-25,-11);
  glVertex3f(18,-25,-14);
  glVertex3f(18,-40,-14);
  glVertex3f(18,-40,-11);
  glEnd();
  //pierna derecha derecha
  glBegin(GL_QUADS);
  glVertex3f(13,-25,-11);
  glVertex3f(13,-25,-14);
  glVertex3f(13,-40,-14);
  glVertex3f(13,-40,-11);
  glEnd();
  //pierna derecha arriba
  glBegin(GL_QUADS);
  glVertex3f(18,-25,-11);
  glVertex3f(13,-25,-11);
  glVertex3f(13,-25,-14);
  glVertex3f(18,-25,-14);
  glEnd();
  //pierna derecha abajo
  glBegin(GL_QUADS);
  glVertex3f(18,-40,-11);
  glVertex3f(13,-40,-11);
  glVertex3f(13,-40,-14);
  glVertex3f(18,-40,-14);
  glEnd();
  //calcetines
  glColor3f(1,1,1);
  //calcetin izquierdo adelante 
  glBegin(GL_QUADS);
  glVertex3f(-18,-40,-11);
  glVertex3f(-13,-40,-11);
  glVertex3f(-13,-50,-11);
  glVertex3f(-18,-50,-11);
  glEnd();
  //calcetin izquierdo atras
  glBegin(GL_QUADS);
  glVertex3f(-18,-40,-14);
  glVertex3f(-13,-40,-14);
  glVertex3f(-13,-50,-14);
  glVertex3f(-18,-50,-14);
  glEnd();
  //calcetin izquierdo izquierda
  glBegin(GL_QUADS);
  glVertex3f(-18,-40,-11);
  glVertex3f(-18,-40,-14);
  glVertex3f(-18,-50,-14);
  glVertex3f(-18,-50,-11);
  glEnd();
  //calcetin izquierdo derecha
  glBegin(GL_QUADS);
  glVertex3f(-13,-40,-11);
  glVertex3f(-13,-40,-14);
  glVertex3f(-13,-50,-14);
  glVertex3f(-13,-50,-11);
  glEnd();
  //calcetin izquierdo arriba
  glBegin(GL_QUADS);
  glVertex3f(-18,-40,-11);
  glVertex3f(-13,-40,-11);
  glVertex3f(-13,-40,-14);
  glVertex3f(-18,-40,-14);
  glEnd();
  //calcetin izquierdo abajo
  glBegin(GL_QUADS);
  glVertex3f(-18,-50,-11);
  glVertex3f(-13,-50,-11);
  glVertex3f(-13,-50,-14);
  glVertex3f(-18,-50,-14);
  glEnd();
  //calcetin derecho adelante 
  glBegin(GL_QUADS);
  glVertex3f(18,-40,-11);
  glVertex3f(13,-40,-11);
  glVertex3f(13,-50,-11);
  glVertex3f(18,-50,-11);
  glEnd();
  //calcetin izquierdo atras
  glBegin(GL_QUADS);
  glVertex3f(18,-40,-14);
  glVertex3f(13,-40,-14);
  glVertex3f(13,-50,-14);
  glVertex3f(18,-50,-14);
  glEnd();
  //calcetin izquierdo izquierda
  glBegin(GL_QUADS);
  glVertex3f(18,-40,-11);
  glVertex3f(18,-40,-14);
  glVertex3f(18,-50,-14);
  glVertex3f(18,-50,-11);
  glEnd();
  //calcetin izquierdo derecha
  glBegin(GL_QUADS);
  glVertex3f(13,-40,-11);
  glVertex3f(13,-40,-14);
  glVertex3f(13,-50,-14);
  glVertex3f(13,-50,-11);
  glEnd();
  //calcetin izquierdo arriba
  glBegin(GL_QUADS);
  glVertex3f(18,-40,-11);
  glVertex3f(13,-40,-11);
  glVertex3f(13,-40,-14);
  glVertex3f(18,-40,-14);
  glEnd();
  //calcetin izquierdo abajo
  glBegin(GL_QUADS);
  glVertex3f(18,-50,-11);
  glVertex3f(13,-50,-11);
  glVertex3f(13,-50,-14);
  glVertex3f(18,-50,-14);
  glEnd();
  //zapatos
  glColor3f(0,0,0);
  //zapato izquierdo adelante
   glBegin(GL_QUADS);
  glVertex3f(-20,-50,-9);
  glVertex3f(-11,-50,-9);
  glVertex3f(-11,-54,-9);
  glVertex3f(-20,-54,-9);
  glEnd();
  //zapato izquierdo atras
   glBegin(GL_QUADS);
  glVertex3f(-20,-50,-16);
  glVertex3f(-11,-50,-16);
  glVertex3f(-11,-54,-16);
  glVertex3f(-20,-54,-16);
  glEnd();
  //zapato izquierdo izquierda
   glBegin(GL_QUADS);
  glVertex3f(-20,-50,-9);
  glVertex3f(-20,-50,-16);
  glVertex3f(-20,-54,-16);
  glVertex3f(-20,-54,-9);
  glEnd();
  //zapato izquierdo derecha
   glBegin(GL_QUADS);
  glVertex3f(-11,-50,-9);
  glVertex3f(-11,-50,-16);
  glVertex3f(-11,-54,-16);
  glVertex3f(-11,-54,-9);
  glEnd();
  //zapato izquierdo arriba
   glBegin(GL_QUADS);
  glVertex3f(-20,-50,-9);
  glVertex3f(-11,-50,-9);
  glVertex3f(-11,-50,-16);
  glVertex3f(-20,-50,-16);
  glEnd();
   //zapato izquierdo abajo
   glBegin(GL_QUADS);
  glVertex3f(-20,-54,-9);
  glVertex3f(-11,-54,-9);
  glVertex3f(-11,-54,-16);
  glVertex3f(-20,-54,-16);
  glEnd();
  //zapato derecho adelante
   glBegin(GL_QUADS);
  glVertex3f(20,-50,-9);
  glVertex3f(11,-50,-9);
  glVertex3f(11,-54,-9);
  glVertex3f(20,-54,-9);
  glEnd();
  //zapato derecho atras
   glBegin(GL_QUADS);
  glVertex3f(20,-50,-16);
  glVertex3f(11,-50,-16);
  glVertex3f(11,-54,-16);
  glVertex3f(20,-54,-16);
  glEnd();
  //zapato derecho izquierda
   glBegin(GL_QUADS);
  glVertex3f(20,-50,-9);
  glVertex3f(20,-50,-16);
  glVertex3f(20,-54,-16);
  glVertex3f(20,-54,-9);
  glEnd();
  //zapato derecho derecha
   glBegin(GL_QUADS);
  glVertex3f(11,-50,-9);
  glVertex3f(11,-50,-16);
  glVertex3f(11,-54,-16);
  glVertex3f(11,-54,-9);
  glEnd();
  //zapato derecho arriba
   glBegin(GL_QUADS);
  glVertex3f(20,-50,-9);
  glVertex3f(11,-50,-9);
  glVertex3f(11,-50,-16);
  glVertex3f(20,-50,-16);
  glEnd();
   //zapato derecho abajo
   glBegin(GL_QUADS);
  glVertex3f(20,-54,-9);
  glVertex3f(11,-54,-9);
  glVertex3f(11,-54,-16);
  glVertex3f(20,-54,-16);
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
	glutCreateWindow("Bob Toronja");
	init();
	glEnable(GL_DEPTH_TEST);
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
