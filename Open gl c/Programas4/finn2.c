#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#include <time.h>


void reshape(int width, int height){
 glViewport(0, 0, width, height);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glOrtho(-100, 100, -100, 100, -100, 100);
 glMatrixMode(GL_MODELVIEW);
}
void linea(int x1, int y1, int x2, int y2){
	glBegin(GL_LINES);
		glVertex3f(x1,y1,0.0);
		glVertex3f(x2,y2,0.0);
	glEnd();
}
void pintalineas(int xc, int yc, int r){ 
	int p,x,y;
x=0; y=r; p=(float)5/4-r;
glBegin(GL_POINTS);
while(y>x)
{ 
	if(x%1==0){	

//Esquinas
//linea(xc+x,100,xc+x,yc+y);
linea(100,100,xc+x,yc+y); //1 derecha arriba

//linea(xc-x,100,xc-x,yc+y);
linea(-100,100,xc-x,yc+y); //1 izquierda arriba

//linea(xc+x,-100,xc+x,yc-y);
linea(100,-100,xc+x,yc-y); //1 derecha abajo
 
 //linea(xc-x,-100,xc-x,yc-y);
 linea(-100,-100,xc-x,yc-y); // 1 izquierda abajo

//linea(xc+y,100,xc+y,yc+x);
linea(100,100,xc+y,yc+x); //2 derecha arriba

//linea(xc+y,-100,xc+y,yc-x);
linea(100,-100,xc+y,yc-x); // 2derecha abajo

//linea(xc-y,100,xc-y,yc+x);
linea(-100,100,xc-y,yc+x); //2 izquierda arriba

//linea(xc-y,-100,xc-y,yc-x);
linea(-100,-100,xc-y,yc-x); //2 izquierda abajo


//Enmedio

//linea(xc+x,100,xc+x,yc+y);
linea(0,0,xc+x,yc+y);

//linea(xc-x,100,xc-x,yc+y);
linea(0,0,xc-x,yc+y);

//linea(xc+x,-100,xc+x,yc-y);
linea(0,0,xc+x,yc-y);
 
 //linea(xc-x,-100,xc-x,yc-y);
 linea(0,0,xc-x,yc-y);

//linea(xc+y,100,xc+y,yc+x);
linea(0,0,xc+y,yc+x);

//linea(xc+y,-100,xc+y,yc-x);
linea(0,0,xc+y,yc-x);

//linea(xc-y,100,xc-y,yc+x);
linea(0,0,xc-y,yc+x);

//linea(xc-y,-100,xc-y,yc-x);
linea(0,0,xc-y,yc-x);

//Estrella


//linea(xc+x,100,xc+x,yc+y);
linea(0,100,xc+x,yc+y); //1 derecha arriba

//linea(xc-x,100,xc-x,yc+y);
linea(0,100,xc-x,yc+y); //1 izquierda arriba

//linea(xc+x,-100,xc+x,yc-y);
linea(0,-100,xc+x,yc-y); //1 derecha abajo
 
 //linea(xc-x,-100,xc-x,yc-y);
 linea(0,-100,xc-x,yc-y); // 1 izquierda abajo

//linea(xc+y,100,xc+y,yc+x);
linea(100,0,xc+y,yc+x); //2 derecha arriba

//linea(xc+y,-100,xc+y,yc-x);
linea(100,0,xc+y,yc-x); // 2derecha abajo

//linea(xc-y,100,xc-y,yc+x);
linea(-100,0,xc-y,yc+x); //2 izquierda arriba

//linea(xc-y,-100,xc-y,yc-x);
linea(-100,0,xc-y,yc-x); //2 izquierda abajo

}
if (p<0) {p+=2*x+3;}
else { p+=2*(x-y)+5; y--;};
x++;
}
glEnd();
}

void cir_bres(int xc, int yc, int r){ 
	int p,x,y;
x=0; y=r; p=(float)5/4-r;
glBegin(GL_POINTS);
while(y>x)
{ 
	glVertex3f(xc+x,yc+y,0.0); 
	glVertex3f(xc-x,yc+y,0.0);
glVertex3f(xc+x,yc-y,0.0);
 glVertex3f(xc-x,yc-y,0.0);
glVertex3f(xc+y,yc+x,0.0); 
glVertex3f(xc+y,yc-x,0.0);
glVertex3f(xc-y,yc+x,0.0); 
glVertex3f(xc-y,yc-x,0.0);
if (p<0) {p+=2*x+3;}
else { p+=2*(x-y)+5; y--;};
x++;
}
glEnd();
}
void pintaluna(){
	int i=0;
glColor3ub(255, 255, 255);
for(i=200;i>0;i--){
cir_bres(0,0,i);
}
}
void cuadricula(){
	glColor3ub(104, 68, 67);
	glBegin(GL_QUADS);
	glVertex3f(-100,-100,0);
	glVertex3f(100,-100,0);
	glVertex3f(100,50,0);
	glVertex3f(-100,50,0);
	glEnd();
	
glColor3ub(255, 255, 255);
int x,y;
	int i=250; 
	while(i>0){
		 x=rand () % 200-100;
		 y=rand () % 50+50;
	glBegin(GL_POINTS);
	glVertex3f(x,y,0);
	glEnd();
	i--;
}
glColor3ub(10, 127, 0);
	i=10000;
	while(i>0){
		x=rand () % 200-100;
		y=rand () % 150-100;
	glBegin(GL_POINTS);
	glVertex3f(x,y,0);
	glEnd();
	i--;
}
glColor3ub(45, 45, 45);
	glBegin(GL_QUADS);
	glVertex3f(-100,-100,0);
	glVertex3f(-0,-100,0);
	glVertex3f(50,50,0);
	glVertex3f(0,50,0);
	glEnd();
	glColor3f(255, 255, 255);
	glBegin(GL_QUADS);
	glVertex3f(-50,-75,0);
	glVertex3f(-25,-75,0);
	glVertex3f(0,-25,0);
	glVertex3f(-25,-25,0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(-15,0,0);
	glVertex3f(10,0,0);
	glVertex3f(30,40,0);
	glVertex3f(10,40,0);
	glEnd();
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
 glVertex3f(30,85,30);
 glVertex3f(30,45,30);
 glVertex3f(30,45,0);
 glEnd();
 //cabeza 3d derecha
  glBegin(GL_QUADS);
 glVertex3f(-30,85,0);
 glVertex3f(-30,85,30);
 glVertex3f(-30,45,30);
 glVertex3f(-30,45,0);
 glEnd();
 //cabeza 3d atras
  glBegin(GL_QUADS);
 glVertex3f(-30,85,30);
 glVertex3f(30,85,30);
 glVertex3f(30,45,30);
 glVertex3f(-30,45,30);
 glEnd();
 //cabeza 3d arriba
  glBegin(GL_QUADS);
 glVertex3f(-30,85,0);
 glVertex3f(30,85,0);
 glVertex3f(30,85,30);
 glVertex3f(-30,85,30);
 glEnd();
 //cabeza 3d abajo
  glBegin(GL_QUADS);
 glVertex3f(-30,45,0);
 glVertex3f(30,45,0);
 glVertex3f(30,45,30);
 glVertex3f(-30,45,30);
 glEnd();
 //cabeza gorro izquierda
  glBegin(GL_QUADS);
 glVertex3f(-30,85,10);
 glVertex3f(-30,95,10);
 glVertex3f(-15,95,10);
 glVertex3f(-15,85,10);
 glEnd();
 //cabeza gorro 3d izquierda izquierda
  glBegin(GL_QUADS);
 glVertex3f(-30,85,10);
 glVertex3f(-30,95,10);
 glVertex3f(-30,95,20);
 glVertex3f(-30,85,20);
 glEnd();
 //cabeza gorro 3d izquierda derecha
  glBegin(GL_QUADS);
 glVertex3f(-15,85,10);
 glVertex3f(-15,95,10);
 glVertex3f(-15,95,20);
 glVertex3f(-15,85,20);
 glEnd();
 //cabeza gorro 3d izquierda atras
  glBegin(GL_QUADS);
 glVertex3f(-30,85,20);
 glVertex3f(-30,95,20);
 glVertex3f(-15,95,20);
 glVertex3f(-15,85,20);
 glEnd();
 //cabeza gorro 3d izquierda arriba
  glBegin(GL_QUADS);
 glVertex3f(-30,95,10);
 glVertex3f(-30,95,20);
 glVertex3f(-15,95,20);
 glVertex3f(-15,95,10);
 glEnd();
 //cabeza gorro derecha
  glBegin(GL_QUADS);
 glVertex3f(30,85,10);
 glVertex3f(30,95,10);
 glVertex3f(15,95,10);
 glVertex3f(15,85,10);
 glEnd();
 //cabeza gorro 3d derecha derecha
  glBegin(GL_QUADS);
 glVertex3f(30,85,10);
 glVertex3f(30,95,10);
 glVertex3f(30,95,20);
 glVertex3f(30,85,20);
 glEnd();
 //cabeza gorro 3d derecha izquierda
  glBegin(GL_QUADS);
 glVertex3f(15,85,10);
 glVertex3f(15,95,10);
 glVertex3f(15,95,20);
 glVertex3f(15,85,20);
 glEnd();
 //cabeza gorro 3d derecha atras
  glBegin(GL_QUADS);
 glVertex3f(30,85,20);
 glVertex3f(30,95,20);
 glVertex3f(15,95,20);
 glVertex3f(15,85,20);
 glEnd();
 //cabeza gorro 3d derecha arriba
  glBegin(GL_QUADS);
 glVertex3f(30,95,10);
 glVertex3f(30,95,20);
 glVertex3f(15,95,20);
 glVertex3f(15,95,10);
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
 //cuerpo 3d izquierda
 glBegin(GL_QUADS);
glVertex3f(30,45,0);
glVertex3f(30,45,30);
glVertex3f(30,-10,30);
glVertex3f(30,-10,0);
 glEnd();
  //cuerpo 3d derecha
 glBegin(GL_QUADS);
glVertex3f(-30,45,0);
glVertex3f(-30,45,30);
glVertex3f(-30,-10,30);
glVertex3f(-30,-10,0);
 glEnd();
  //cuerpo 3d arriba
 glBegin(GL_QUADS);
glVertex3f(30,45,0);
glVertex3f(-30,45,0);
glVertex3f(-30,45,30);
glVertex3f(30,45,30);
glEnd();
 //cuerpo 3d abajo
 glBegin(GL_QUADS);
glVertex3f(30,-10,0);
glVertex3f(-30,-10,0);
glVertex3f(-30,-10,30);
glVertex3f(30,-10,30);
glEnd();
 //manga izquierda
 glBegin(GL_QUADS);
glVertex3f(-30,45,10);
glVertex3f(-40,45,10);
glVertex3f(-40,40,10);
glVertex3f(-30,40,10);
 glEnd();
 //manga izquierda 3d izquierda
 glBegin(GL_QUADS);
glVertex3f(-40,45,10);
glVertex3f(-40,45,20);
glVertex3f(-40,40,20);
glVertex3f(-40,40,10);
 glEnd();
 //manga izquierda 3d derecha
 glBegin(GL_QUADS);
glVertex3f(-30,45,10);
glVertex3f(-30,45,20);
glVertex3f(-30,40,20);
glVertex3f(-30,40,10);
 glEnd();
 //manga izquierda 3d arriba
 glBegin(GL_QUADS);
glVertex3f(-30,45,10);
glVertex3f(-40,45,10);
glVertex3f(-40,45,20);
glVertex3f(-30,45,20);
 glEnd();
 //manga izquierda 3d abajo
 glBegin(GL_QUADS);
glVertex3f(-30,40,10);
glVertex3f(-40,40,10);
glVertex3f(-40,40,20);
glVertex3f(-30,40,20);
 glEnd();
 //manga derecha
  glBegin(GL_QUADS);
glVertex3f(30,45,10);
glVertex3f(40,45,10);
glVertex3f(40,40,10);
glVertex3f(30,40,10);
 glEnd();
 //manga derecha 3d derecha
 glBegin(GL_QUADS);
glVertex3f(40,45,10);
glVertex3f(40,45,20);
glVertex3f(40,40,20);
glVertex3f(40,40,10);
 glEnd();
 //manga derecha 3d izquierda
 glBegin(GL_QUADS);
glVertex3f(30,45,10);
glVertex3f(30,45,20);
glVertex3f(30,40,20);
glVertex3f(30,40,10);
 glEnd();
 //manga derecha 3d arriba
 glBegin(GL_QUADS);
glVertex3f(30,45,10);
glVertex3f(40,45,10);
glVertex3f(40,45,20);
glVertex3f(30,45,20);
 glEnd();
 //manga derecha 3d abajo
 glBegin(GL_QUADS);
glVertex3f(30,40,10);
glVertex3f(40,40,10);
glVertex3f(40,40,20);
glVertex3f(30,40,20);
 glEnd();
 glColor3f(0.65,0.83,0.61);
 //mochila derecha arriba
 glLineWidth(20);
 glBegin(GL_LINE_STRIP);
glVertex3f(31,50,10);
glVertex3f(31,45,10);
 glEnd();
 //mochila 3d derecha arriba arriba
 glBegin(GL_LINE_STRIP);
glVertex3f(31,50,10);
glVertex3f(31,50,30);
 glEnd();
  //mochila 3d derecha arriba atras
 glBegin(GL_LINE_STRIP);
glVertex3f(31,50,30);
glVertex3f(31,45,30);
 glEnd();
 //mochila izquierda arriba
 glBegin(GL_LINE_STRIP);
glVertex3f(-31,50,10);
glVertex3f(-31,45,10);
 glEnd();
 //mochila 3d izquierda arriba arriba
 glBegin(GL_LINE_STRIP);
glVertex3f(-31,50,10);
glVertex3f(-31,50,30);
 glEnd();
  //mochila 3d izquierda arriba atras
 glBegin(GL_LINE_STRIP);
glVertex3f(-31,50,30);
glVertex3f(-31,45,30);
 glEnd();
 //mochila atras arriba
 glBegin(GL_QUADS);
glVertex3f(-30,45,30);
glVertex3f(30,45,30);
glVertex3f(30,15,30);
glVertex3f(-30,15,30);
glEnd();
//mochila atras arriba 3d izquierda
 glBegin(GL_QUADS);
glVertex3f(-30,45,30);
glVertex3f(-30,45,50);
glVertex3f(-30,15,50);
glVertex3f(-30,15,30);
glEnd();
//mochila atras arriba 3d derecha
 glBegin(GL_QUADS);
glVertex3f(30,45,30);
glVertex3f(30,45,50);
glVertex3f(30,15,50);
glVertex3f(30,15,30);
glEnd();
//mochila atras arriba 3d arriba
 glBegin(GL_QUADS);
glVertex3f(-30,45,30);
glVertex3f(30,45,30);
glVertex3f(30,45,50);
glVertex3f(-30,45,50);
glEnd();
//mochila atras arriba 3d abajo
 glBegin(GL_QUADS);
glVertex3f(-30,15,30);
glVertex3f(30,15,30);
glVertex3f(30,15,50);
glVertex3f(-30,15,50);
glEnd();
//mochila atras arriba 3d atras
 glBegin(GL_QUADS);
glVertex3f(-30,45,50);
glVertex3f(30,45,50);
glVertex3f(30,15,50);
glVertex3f(-30,15,50);
glEnd();
 glColor3f(0.42,0.70,0.26);
//mochila atras arriba boton
 glBegin(GL_QUADS);
glVertex3f(3,18,50);
glVertex3f(-3,18,50);
glVertex3f(-3,15,50);
glVertex3f(3,15,50);
glEnd();
 //mochila derecha abajo 
 glBegin(GL_LINE_STRIP);
glVertex3f(31,45,10);
glVertex3f(31,40,10);
 glEnd();
 //mochila derecha abajo abajo
 glBegin(GL_LINE_STRIP);
glVertex3f(31,40,10);
glVertex3f(31,40,30);
 glEnd();
 //mochila derecha abajo atras
 glBegin(GL_LINE_STRIP);
glVertex3f(31,45,30);
glVertex3f(31,40,30);
 glEnd();
 //mochila izquierda abajo
 glBegin(GL_LINE_STRIP);
glVertex3f(-31,45,10);
glVertex3f(-31,40,10);
 glEnd();
  //mochila izquierda abajo abajo
 glBegin(GL_LINE_STRIP);
glVertex3f(-31,40,10);
glVertex3f(-31,40,30);
 glEnd();
 //mochila izquierda abajo atras
 glBegin(GL_LINE_STRIP);
glVertex3f(-31,45,30);
glVertex3f(-31,40,30);
 glEnd();
 //mochila atras abajo
 glBegin(GL_QUADS);
glVertex3f(-30,15,30);
glVertex3f(30,15,30);
glVertex3f(30,-10,30);
glVertex3f(-30,-10,30);
glEnd();
//mochila atras arriba 3d izquierda
 glBegin(GL_QUADS);
glVertex3f(-30,15,30);
glVertex3f(-30,15,50);
glVertex3f(-30,-10,50);
glVertex3f(-30,-10,30);
glEnd();
//mochila atras arriba 3d derecha
 glBegin(GL_QUADS);
glVertex3f(30,15,30);
glVertex3f(30,15,50);
glVertex3f(30,-10,50);
glVertex3f(30,-10,30);
glEnd();
//mochila atras arriba 3d arriba
 glBegin(GL_QUADS);
glVertex3f(-30,15,30);
glVertex3f(30,15,30);
glVertex3f(30,15,50);
glVertex3f(-30,15,50);
glEnd();
//mochila atras arriba 3d abajo
 glBegin(GL_QUADS);
glVertex3f(-30,-10,30);
glVertex3f(30,-10,30);
glVertex3f(30,-10,50);
glVertex3f(-30,-10,50);
glEnd();
//mochila atras 3d abajo atras
 glBegin(GL_QUADS);
glVertex3f(-30,15,50);
glVertex3f(30,15,50);
glVertex3f(30,-10,50);
glVertex3f(-30,-10,50);
glEnd();
glColor3f(0.65,0.83,0.61);
 //mochila atras arriba boton
 glBegin(GL_QUADS);
glVertex3f(3,15,50);
glVertex3f(-3,15,50);
glVertex3f(-3,12,50);
glVertex3f(3,12,50);
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
glVertex3f(-30,-10,30);
glVertex3f(-30,-20,30);
glVertex3f(-30,-20,0);
glEnd();
//pantalon centro 3d derecho
 glBegin(GL_QUADS);
glVertex3f(30,-10,0);
glVertex3f(30,-10,30);
glVertex3f(30,-20,30);
glVertex3f(30,-20,0);
glEnd();
//pantalon centro 3d arriba
 glBegin(GL_QUADS);
glVertex3f(-30,-10,0);
glVertex3f(30,-10,0);
glVertex3f(30,-10,30);
glVertex3f(-30,-10,30);
glEnd();
//pantalon centro 3d abajo
 glBegin(GL_QUADS);
glVertex3f(-30,-20,0);
glVertex3f(30,-20,0);
glVertex3f(30,-20,30);
glVertex3f(-30,-20,30);
glEnd();
//pantalon centro 3d atras
 glBegin(GL_QUADS);
glVertex3f(-30,-10,30);
glVertex3f(30,-10,30);
glVertex3f(30,-20,30);
glVertex3f(-30,-20,30);
glEnd();
//pantalon izquierdo
 glBegin(GL_QUADS);
glVertex3f(-30,-20,10);
glVertex3f(-25,-20,10);
glVertex3f(-25,-40,10);
glVertex3f(-30,-40,10);
 glEnd();
 //pantalon izquierdo 3d izquierdo
 glBegin(GL_QUADS);
glVertex3f(-30,-20,10);
glVertex3f(-30,-20,20);
glVertex3f(-30,-40,20);
glVertex3f(-30,-40,10);
 glEnd();
 //pantalon izquierdo 3d derecho
 glBegin(GL_QUADS);
glVertex3f(-25,-20,10);
glVertex3f(-25,-20,20);
glVertex3f(-25,-40,20);
glVertex3f(-25,-40,10);
 glEnd();
 //pantalon izquierdo 3d arriba
 glBegin(GL_QUADS);
glVertex3f(-30,-20,10);
glVertex3f(-25,-20,10);
glVertex3f(-25,-20,20);
glVertex3f(-30,-20,20);
 glEnd();
 //pantalon izquierdo 3d abajo
 glBegin(GL_QUADS);
glVertex3f(-30,-40,10);
glVertex3f(-25,-40,10);
glVertex3f(-25,-40,20);
glVertex3f(-30,-40,20);
 glEnd();
 //pantalon izquierdo 3d atras
 glBegin(GL_QUADS);
glVertex3f(-30,-20,20);
glVertex3f(-25,-20,20);
glVertex3f(-25,-40,20);
glVertex3f(-30,-40,20);
 glEnd();
 //pantalon derecho
 glBegin(GL_QUADS);
glVertex3f(30,-20,10);
glVertex3f(25,-20,10);
glVertex3f(25,-40,10);
glVertex3f(30,-40,10);
 glEnd();
 //pantalon derecho 3d derecho
 glBegin(GL_QUADS);
glVertex3f(30,-20,10);
glVertex3f(30,-20,20);
glVertex3f(30,-40,20);
glVertex3f(30,-40,10);
 glEnd();
 //pantalon derecho 3d izquierdo
 glBegin(GL_QUADS);
glVertex3f(25,-20,10);
glVertex3f(25,-20,20);
glVertex3f(25,-40,20);
glVertex3f(25,-40,10);
 glEnd();
 //pantalon derecho 3d arriba
 glBegin(GL_QUADS);
glVertex3f(30,-20,10);
glVertex3f(25,-20,10);
glVertex3f(25,-20,20);
glVertex3f(30,-20,20);
 glEnd();
 //pantalon derecho 3d abajo
 glBegin(GL_QUADS);
glVertex3f(30,-40,10);
glVertex3f(25,-40,10);
glVertex3f(25,-40,20);
glVertex3f(30,-40,20);
 glEnd();
 //pantalon derecho 3d atras
 glBegin(GL_QUADS);
glVertex3f(30,-20,20);
glVertex3f(25,-20,20);
glVertex3f(25,-40,20);
glVertex3f(30,-40,20);
 glEnd();
 //pierna derecha
 glColor3f(0.98,0.82,0.75);
 glBegin(GL_QUADS);
glVertex3f(30,-40,10);
glVertex3f(25,-40,10);
glVertex3f(25,-70,10);
glVertex3f(30,-70,10);
 glEnd();
 //pierna derecha 3d izquierda
 glBegin(GL_QUADS);
glVertex3f(30,-40,10);
glVertex3f(30,-40,20);
glVertex3f(30,-70,20);
glVertex3f(30,-70,10);
 glEnd();
 //pierna derecha 3d derecha
 glBegin(GL_QUADS);
glVertex3f(25,-40,10);
glVertex3f(25,-40,20);
glVertex3f(25,-70,20);
glVertex3f(25,-70,10);
 glEnd();
  //pierna derecha 3d arriba
 glBegin(GL_QUADS);
glVertex3f(30,-40,10);
glVertex3f(25,-40,10);
glVertex3f(25,-40,20);
glVertex3f(30,-40,20);
 glEnd();
 //pierna derecha 3d abajo
 glBegin(GL_QUADS);
glVertex3f(30,-70,10);
glVertex3f(25,-70,10);
glVertex3f(25,-70,20);
glVertex3f(30,-70,20);
 glEnd();
 //pierna derecha 3d atras
 glBegin(GL_QUADS);
glVertex3f(30,-40,20);
glVertex3f(25,-40,20);
glVertex3f(25,-70,20);
glVertex3f(30,-70,20);
 glEnd();
 //pierna izquierda
 glBegin(GL_QUADS);
glVertex3f(-30,-40,10);
glVertex3f(-25,-40,10);
glVertex3f(-25,-70,10);
glVertex3f(-30,-70,10);
 glEnd();
  //pierna izquierda 3d derecha
 glBegin(GL_QUADS);
glVertex3f(-30,-40,10);
glVertex3f(-30,-40,20);
glVertex3f(-30,-70,20);
glVertex3f(-30,-70,10);
 glEnd();
 //pierna izquierda 3d izquierda
 glBegin(GL_QUADS);
glVertex3f(-25,-40,10);
glVertex3f(-25,-40,20);
glVertex3f(-25,-70,20);
glVertex3f(-25,-70,10);
 glEnd();
  //pierna izquierda 3d arriba
 glBegin(GL_QUADS);
glVertex3f(-30,-40,10);
glVertex3f(-25,-40,10);
glVertex3f(-25,-40,20);
glVertex3f(-30,-40,20);
 glEnd();
 //pierna izquierda 3d abajo
 glBegin(GL_QUADS);
glVertex3f(-30,-70,10);
glVertex3f(-25,-70,10);
glVertex3f(-25,-70,20);
glVertex3f(-30,-70,20);
 glEnd();
 //pierna izquierda 3d atras
 glBegin(GL_QUADS);
glVertex3f(-30,-40,20);
glVertex3f(-25,-40,20);
glVertex3f(-25,-70,20);
glVertex3f(-30,-70,20);
 glEnd();
 //brazo izquierdo arriba
  glBegin(GL_QUADS);
glVertex3f(-40,45,10);
glVertex3f(-50,45,10);
glVertex3f(-50,40,10);
glVertex3f(-40,40,10);
 glEnd();
  //brazo izquierdo arriba 3d izquierdo
  glBegin(GL_QUADS);
glVertex3f(-50,45,10);
glVertex3f(-50,45,20);
glVertex3f(-50,40,20);
glVertex3f(-50,40,10);
 glEnd();
 //brazo izquierdo arriba 3d derecho
  glBegin(GL_QUADS);
glVertex3f(-40,45,10);
glVertex3f(-40,45,20);
glVertex3f(-40,40,20);
glVertex3f(-40,40,10);
 glEnd();
 //brazo izquierdo arriba 3d arriba
  glBegin(GL_QUADS);
glVertex3f(-40,45,10);
glVertex3f(-50,45,10);
glVertex3f(-50,45,20);
glVertex3f(-40,45,20);
 glEnd();
 //brazo izquierdo arriba 3d abajo
  glBegin(GL_QUADS);
glVertex3f(-40,40,10);
glVertex3f(-50,40,10);
glVertex3f(-50,40,20);
glVertex3f(-40,40,20);
 glEnd();
 //brazo izquierdo arriba 3d atras
  glBegin(GL_QUADS);
glVertex3f(-40,45,20);
glVertex3f(-50,45,20);
glVertex3f(-50,40,20);
glVertex3f(-40,40,20);
 glEnd();
  //brazo izquierdo abajo
 glBegin(GL_QUADS);
glVertex3f(-45,45,10);
glVertex3f(-50,45,10);
glVertex3f(-50,0,10);
glVertex3f(-45,0,10);
 glEnd();
 //brazo izquierdo abajo 3d izquierdo
 glBegin(GL_QUADS);
glVertex3f(-50,45,10);
glVertex3f(-50,45,20);
glVertex3f(-50,0,20);
glVertex3f(-50,0,10);
 glEnd();
 //brazo izquierdo abajo 3d derecho
 glBegin(GL_QUADS);
glVertex3f(-45,45,10);
glVertex3f(-45,45,20);
glVertex3f(-45,0,20);
glVertex3f(-45,0,10);
 glEnd();
 //brazo izquierdo abajo 3d arriba
 glBegin(GL_QUADS);
glVertex3f(-45,45,10);
glVertex3f(-50,45,10);
glVertex3f(-50,45,20);
glVertex3f(-45,45,20);
 glEnd();
 //brazo izquierdo abajo 3d abajo
 glBegin(GL_QUADS);
glVertex3f(-45,0,10);
glVertex3f(-50,0,10);
glVertex3f(-50,0,20);
glVertex3f(-45,0,20);
 glEnd();
 //brazo izquierdo abajo 3d atras
 glBegin(GL_QUADS);
glVertex3f(-45,45,20);
glVertex3f(-50,45,20);
glVertex3f(-50,0,20);
glVertex3f(-45,0,20);
 glEnd();
 //dedo izquierdo
 glBegin(GL_QUADS);
glVertex3f(-45,6,10);
glVertex3f(-42,6,10);
glVertex3f(-42,3,10);
glVertex3f(-45,3,10);
 glEnd();
 //dedo izquierdo 3d izquierdo
 glBegin(GL_QUADS);
glVertex3f(-45,6,10);
glVertex3f(-45,6,13);
glVertex3f(-45,3,13);
glVertex3f(-45,3,10);
 glEnd();
 //dedo izquierdo 3d derecho
 glBegin(GL_QUADS);
glVertex3f(-42,6,10);
glVertex3f(-42,6,13);
glVertex3f(-42,3,13);
glVertex3f(-42,3,10);
 glEnd();
 //dedo izquierdo 3d arriba
 glBegin(GL_QUADS);
glVertex3f(-45,6,10);
glVertex3f(-42,6,10);
glVertex3f(-42,6,13);
glVertex3f(-45,6,13);
 glEnd();
 //dedo izquierdo 3d abajo
 glBegin(GL_QUADS);
glVertex3f(-45,3,10);
glVertex3f(-42,3,10);
glVertex3f(-42,3,13);
glVertex3f(-45,3,13);
 glEnd();
  //dedo izquierdo 3d atras
 glBegin(GL_QUADS);
glVertex3f(-45,6,13);
glVertex3f(-42,6,13);
glVertex3f(-42,3,13);
glVertex3f(-45,3,13);
 glEnd();
 //brazo derecho arriba
  glBegin(GL_QUADS);
glVertex3f(40,45,10);
glVertex3f(50,45,10);
glVertex3f(50,40,10);
glVertex3f(40,40,10);
 glEnd();
  //brazo derecho arriba 3d derecho
  glBegin(GL_QUADS);
glVertex3f(50,45,10);
glVertex3f(50,45,20);
glVertex3f(50,40,20);
glVertex3f(50,40,10);
 glEnd();
 //brazo derecho arriba 3d izquierdo
  glBegin(GL_QUADS);
glVertex3f(40,45,10);
glVertex3f(40,45,20);
glVertex3f(40,40,20);
glVertex3f(40,40,10);
 glEnd();
 //brazo derecho arriba 3d arriba
  glBegin(GL_QUADS);
glVertex3f(40,45,10);
glVertex3f(50,45,10);
glVertex3f(50,45,20);
glVertex3f(40,45,20);
 glEnd();
 //brazo derecho arriba 3d abajo
  glBegin(GL_QUADS);
glVertex3f(40,40,10);
glVertex3f(50,40,10);
glVertex3f(50,40,20);
glVertex3f(40,40,20);
 glEnd();
 //brazo derecho arriba 3d atras
  glBegin(GL_QUADS);
glVertex3f(40,45,20);
glVertex3f(50,45,20);
glVertex3f(50,40,20);
glVertex3f(40,40,20);
 glEnd();
 //brazo derecho abajo
 glBegin(GL_QUADS);
glVertex3f(45,45,10);
glVertex3f(50,45,10);
glVertex3f(50,0,10);
glVertex3f(45,0,10);
 glEnd();
 //brazo derecho abajo 3d derecho
 glBegin(GL_QUADS);
glVertex3f(50,45,10);
glVertex3f(50,45,20);
glVertex3f(50,0,20);
glVertex3f(50,0,10);
 glEnd();
 //brazo derecho abajo 3d derecho
 glBegin(GL_QUADS);
glVertex3f(45,45,10);
glVertex3f(45,45,20);
glVertex3f(45,0,20);
glVertex3f(45,0,10);
 glEnd();
 //brazo derecho abajo 3d arriba
 glBegin(GL_QUADS);
glVertex3f(45,45,10);
glVertex3f(50,45,10);
glVertex3f(50,45,20);
glVertex3f(45,45,20);
 glEnd();
 //brazo derecho abajo 3d abajo
 glBegin(GL_QUADS);
glVertex3f(45,0,10);
glVertex3f(50,0,10);
glVertex3f(50,0,20);
glVertex3f(45,0,20);
 glEnd();
 //brazo derecho abajo 3d atras
 glBegin(GL_QUADS);
glVertex3f(45,45,20);
glVertex3f(50,45,20);
glVertex3f(50,0,20);
glVertex3f(45,0,20);
 glEnd();
 //dedo derecho
 glBegin(GL_QUADS);
glVertex3f(45,6,10);
glVertex3f(42,6,10);
glVertex3f(42,3,10);
glVertex3f(45,3,10);
 glEnd();
 //dedo derecho 3d derecho
 glBegin(GL_QUADS);
glVertex3f(45,6,10);
glVertex3f(45,6,13);
glVertex3f(45,3,13);
glVertex3f(45,3,10);
 glEnd();
 //dedo derecho 3d izquierdo
 glBegin(GL_QUADS);
glVertex3f(42,6,10);
glVertex3f(42,6,13);
glVertex3f(42,3,13);
glVertex3f(42,3,10);
 glEnd();
 //dedo derecho 3d arriba
 glBegin(GL_QUADS);
glVertex3f(45,6,10);
glVertex3f(42,6,10);
glVertex3f(42,6,13);
glVertex3f(45,6,13);
 glEnd();
 //dedo derecho 3d abajo
 glBegin(GL_QUADS);
glVertex3f(45,3,10);
glVertex3f(42,3,10);
glVertex3f(42,3,13);
glVertex3f(45,3,13);
 glEnd();
   //dedo derecho 3d atras
 glBegin(GL_QUADS);
glVertex3f(45,6,13);
glVertex3f(42,6,13);
glVertex3f(42,3,13);
glVertex3f(45,3,13);
 glEnd();
 //calcetin izquierdo
 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
glVertex3f(-25,-70,10);
glVertex3f(-30,-70,10);
glVertex3f(-30,-75,10);
glVertex3f(-25,-75,10);
 glEnd();
 //calcetin izquierdo 3d izquierdo
 glBegin(GL_QUADS);
glVertex3f(-30,-70,10);
glVertex3f(-30,-70,20);
glVertex3f(-30,-75,20);
glVertex3f(-30,-75,10);
 glEnd();
  //calcetin izquierdo 3d derecho
 glBegin(GL_QUADS);
glVertex3f(-25,-70,10);
glVertex3f(-25,-70,20);
glVertex3f(-25,-75,20);
glVertex3f(-25,-75,10);
 glEnd();
 //calcetin izquierdo 3d arriba
 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
glVertex3f(-25,-75,10);
glVertex3f(-30,-75,10);
glVertex3f(-30,-75,20);
glVertex3f(-25,-75,20);
 glEnd();
 //calcetin izquierdo 3d abajo
 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
glVertex3f(-25,-70,10);
glVertex3f(-30,-70,10);
glVertex3f(-30,-70,20);
glVertex3f(-25,-70,20);
 glEnd();
 //calcetin izquierdo 3d atras
 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
glVertex3f(-25,-70,20);
glVertex3f(-30,-70,20);
glVertex3f(-30,-75,20);
glVertex3f(-25,-75,20);
 glEnd();
 //calcetin derecho
 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
glVertex3f(25,-70,10);
glVertex3f(30,-70,10);
glVertex3f(30,-75,10);
glVertex3f(25,-75,10);
 glEnd();
 //calcetin derecho 3d derecho
 glBegin(GL_QUADS);
glVertex3f(30,-70,10);
glVertex3f(30,-70,20);
glVertex3f(30,-75,20);
glVertex3f(30,-75,10);
 glEnd();
  //calcetin derecho 3d izquierdo
 glBegin(GL_QUADS);
glVertex3f(25,-70,10);
glVertex3f(25,-70,20);
glVertex3f(25,-75,20);
glVertex3f(25,-75,10);
 glEnd();
 //calcetin derecho 3d arriba
 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
glVertex3f(25,-75,10);
glVertex3f(30,-75,10);
glVertex3f(30,-75,20);
glVertex3f(25,-75,20);
 glEnd();
 //calcetin derecho 3d abajo
 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
glVertex3f(25,-70,10);
glVertex3f(30,-70,10);
glVertex3f(30,-70,20);
glVertex3f(25,-70,20);
 glEnd();
 //calcetin derecho 3d atras
 glColor3f(1.0,1.0,1.0);
 glBegin(GL_QUADS);
glVertex3f(25,-70,20);
glVertex3f(30,-70,20);
glVertex3f(30,-75,20);
glVertex3f(25,-75,20);
 glEnd();
 //pie izquierdo
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_QUADS);
glVertex3f(-22,-75,7);
glVertex3f(-33,-75,7);
glVertex3f(-33,-80,7);
glVertex3f(-22,-80,7);
 glEnd();
 //pie izquierdo 3d izquierdo
 glBegin(GL_QUADS);
glVertex3f(-33,-75,7);
glVertex3f(-33,-75,23);
glVertex3f(-33,-80,23);
glVertex3f(-33,-80,7);
 glEnd();
 //pie izquierdo 3d derecho
 glBegin(GL_QUADS);
glVertex3f(-22,-75,7);
glVertex3f(-22,-75,23);
glVertex3f(-22,-80,23);
glVertex3f(-22,-80,7);
 glEnd();
 //pie izquierdo 3d arriba
 glBegin(GL_QUADS);
glVertex3f(-22,-75,7);
glVertex3f(-33,-75,7);
glVertex3f(-33,-75,23);
glVertex3f(-22,-75,23);
 glEnd();
 //pie izquierdo 3d abajo
 glBegin(GL_QUADS);
glVertex3f(-22,-80,7);
glVertex3f(-33,-80,7);
glVertex3f(-33,-80,23);
glVertex3f(-22,-80,23);
 glEnd();
  //pie izquierdo 3d atras
 glBegin(GL_QUADS);
glVertex3f(-22,-75,23);
glVertex3f(-33,-75,23);
glVertex3f(-33,-80,23);
glVertex3f(-22,-80,23);
 glEnd();
//pie derecho
 glBegin(GL_QUADS);
glVertex3f(22,-75,7);
glVertex3f(33,-75,7);
glVertex3f(33,-80,7);
glVertex3f(22,-80,7);
 glEnd();
 //pie derecho 3d derecho
 glBegin(GL_QUADS);
glVertex3f(33,-75,7);
glVertex3f(33,-75,23);
glVertex3f(33,-80,23);
glVertex3f(33,-80,7);
 glEnd();
 //pie derecho 3d izquierdo
 glBegin(GL_QUADS);
glVertex3f(22,-75,7);
glVertex3f(22,-75,23);
glVertex3f(22,-80,23);
glVertex3f(22,-80,7);
 glEnd();
 //pie derecho 3d arriba
 glBegin(GL_QUADS);
glVertex3f(22,-75,7);
glVertex3f(33,-75,7);
glVertex3f(33,-75,23);
glVertex3f(22,-75,23);
 glEnd();
 //pie derecho 3d abajo
 glBegin(GL_QUADS);
glVertex3f(22,-80,7);
glVertex3f(33,-80,7);
glVertex3f(33,-80,23);
glVertex3f(22,-80,23);
 glEnd();
  //pie derecho 3d atras
 glBegin(GL_QUADS);
glVertex3f(22,-75,23);
glVertex3f(33,-75,23);
glVertex3f(33,-80,23);
glVertex3f(22,-80,23);
 glEnd();
 glFlush();
}

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	cuadricula();
	glLoadIdentity();
	glScalef( .25, .25, .25 ); 
	glTranslatef(-240,300,0);
	pintalineas(0,0,20);
	glLoadIdentity();
	glScalef( .1, .1, .1 ); 
	glTranslatef(900,900,0);
	pintaluna();
	glLoadIdentity();
	glScalef( .5, .5, .5 ); 
	glTranslatef(-30,-50,0);
	finn();
	glLoadIdentity();
	glScalef( .3, .3, .3 ); 
	glTranslatef(40,160,0);
	finn();
	glLoadIdentity();
	glScalef( .25, .25, .25 ); 
	glTranslatef(320,-300,0);
	glRotatef( 90, 0.0, 1.0, 0.0 );
	finn();
	glLoadIdentity();
	glScalef( .3, .3, .3 ); 
	glTranslatef(250,120,0);
	glRotatef( 90, 0.0, 1.0, 0.0 );
	finn();
	glFlush();
	glutSwapBuffers();
};
void init(){
 glClearColor(0,0,0,0);
}
int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Finn the human");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
