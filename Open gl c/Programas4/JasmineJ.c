#include <GL/glut.h>
#include <math.h>
#include <stdio.h>

void reshape (int width, int height)
{
	glViewport(0,0,width,height);
	glMatrixMode(GL_PROJECTION);
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glOrtho(-100,100,-100,100,-100,100);
	glMatrixMode(GL_MODELVIEW);
}
void linea(int x1, int y1, int x2, int y2){
	glBegin(GL_LINES);
		glVertex3f(x1,y1,0.0);
		glVertex3f(x2,y2,0.0);
	glEnd();
}
void pintalineas(int xc, int yc, int r){ 
	glColor3ub(255,165,0);
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
void Castillo(){
	//cielo
	glColor3ub(30,144,255);
	glBegin(GL_QUADS);
	glVertex3f(-100,100,0);
	glVertex3f(100,100,0);
	glVertex3f(100,40,0);
	glVertex3f(-100,40,0);
	glEnd();
	//pasto
	glColor3ub(0,150,0);
	glBegin(GL_QUADS);
	glVertex3f(-100,40,0);
	glVertex3f(100,40,0);
	glVertex3f(100,0,0);
	glVertex3f(-100,0,0);
	glEnd();
	//agua
	glColor3ub(21,140,255);
	glBegin(GL_QUADS);
	glVertex3f(-100,0,0);
	glVertex3f(100,0,0);
	glVertex3f(100,-50,0);
	glVertex3f(-100,-50,0);
	glEnd();
	//tierra
	glColor3ub(101,72,0);
	glBegin(GL_QUADS);
	glVertex3f(-100,-50,0);
	glVertex3f(100,-50,0);
	glVertex3f(100,-100,0);
	glVertex3f(-100,-100,0);
	glEnd();
	//castillo
	glColor3ub(120,120,120);
	glBegin(GL_QUADS);
	glVertex3f(-80,0,0);
	glVertex3f(-30,0,0);
	glVertex3f(-30,50,0);
	glVertex3f(-80,50,0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(-70,50,0);
	glVertex3f(-60,50,0);
	glVertex3f(-60,55,0);
	glVertex3f(-70,55,0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(-50,50,0);
	glVertex3f(-40,50,0);
	glVertex3f(-40,55,0);
	glVertex3f(-50,55,0);
	glEnd();
	//castillo enmedio
	glBegin(GL_QUADS);
	glVertex3f(-30,0,0);
	glVertex3f(40,0,0);
	glVertex3f(40,75,0);
	glVertex3f(-30,75,0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(-20,75,0);
	glVertex3f(-10,75,0);
	glVertex3f(-10,80,0);
	glVertex3f(-20,80,0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(0,75,0);
	glVertex3f(10,75,0);
	glVertex3f(10,80,0);
	glVertex3f(0,80,0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(20,75,0);
	glVertex3f(30,75,0);
	glVertex3f(30,80,0);
	glVertex3f(20,80,0);
	glEnd();
	//castillo izquierdo
	glBegin(GL_QUADS);
	glVertex3f(90,0,0);
	glVertex3f(40,0,0);
	glVertex3f(40,50,0);
	glVertex3f(90,50,0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(80,50,0);
	glVertex3f(70,50,0);
	glVertex3f(70,55,0);
	glVertex3f(80,55,0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(60,50,0);
	glVertex3f(50,50,0);
	glVertex3f(50,55,0);
	glVertex3f(60,55,0);
	glEnd();
	//banderas
	glColor3ub(0,0,0);
	glLineWidth(20);
	glBegin(GL_LINES);
	glVertex3f(-55,50,0);
	glVertex3f(-55,70,0);
	glEnd();
	glColor3ub(0,107,0);
	glBegin(GL_TRIANGLES);
	glVertex3f(-55,70,0);
	glVertex3f(-65,65,0);
	glVertex3f(-55,60,0);
	glEnd();
	glLineWidth(1);
	//segunda bandera
	glColor3ub(0,0,0);
	glLineWidth(20);
	glBegin(GL_LINES);
	glVertex3f(5,75,0);
	glVertex3f(5,95,0);
	glEnd();
	glColor3ub(0,107,0);
	glBegin(GL_TRIANGLES);
	glVertex3f(5,95,0);
	glVertex3f(-5,90,0);
	glVertex3f(5,85,0);
	glEnd();
	glLineWidth(1);
	//tercera bandera
	glColor3ub(0,0,0);
	glLineWidth(20);
	glBegin(GL_LINES);
	glVertex3f(65,50,0);
	glVertex3f(65,70,0);
	glEnd();
	glColor3ub(0,107,0);
	glBegin(GL_TRIANGLES);
	glVertex3f(65,70,0);
	glVertex3f(55,65,0);
	glVertex3f(65,60,0);
	glEnd();
	glLineWidth(1);
	//puerta
	glColor3ub(172,123,0);
	glBegin(GL_QUADS);
	glVertex3f(-20,0,0);
	glVertex3f(30,0,0);
	glVertex3f(30,35,0);
	glVertex3f(-20,35,0);
	glEnd();
	//lineas puerta
	glLineWidth(20);
	glColor3ub(0,0,0);
	glBegin(GL_LINES);
	glVertex3f(-10,0,0);
	glVertex3f(-10,35,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0,0,0);
	glVertex3f(0,35,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(10,0,0);
	glVertex3f(10,35,0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(20,0,0);
	glVertex3f(20,35,0);
	glEnd();
	glLineWidth(1);
	//puente
	glColor3ub(94,71,14);
	glBegin(GL_QUADS);
	glVertex3f(-20,0,0);
	glVertex3f(30,0,0);
	glVertex3f(10,-50,0);
	glVertex3f(-50,-50,0);
	glEnd();
}
void Jasmine(){
glColor3f(0.400, 0.804, 0.667); //TURQUESA
	glBegin(GL_QUADS); // Pierna Izquierda
	glVertex3f(-15,-20,0);
	glVertex3f(0,-20,0);
	glVertex3f(0,-80,0);
	glVertex3f(-15,-80,0);
	glVertex3f(-20,-55,0);
	glVertex3f(-15,-55,0);
	glVertex3f(-15,-75,0);
	glVertex3f(-20,-75,0);
	glVertex3f(-10,-15,0);
	glVertex3f(-5,-15,0);
	glVertex3f(-5,-20,0);
	glVertex3f(-10,-20,0);
	glVertex3f(-10,-80,0);
	glVertex3f(0,-80,0);
	glVertex3f(0,-85,0);
	glVertex3f(-10,-85,0);
	glVertex3f(5,-25,0); //Pierna Derecha
	glVertex3f(30,-25,0);
	glVertex3f(30,-40,0);
	glVertex3f(5,-40,0);
	glVertex3f(10,-40,0);
	glVertex3f(30,-40,0);
	glVertex3f(30,-50,0);
	glVertex3f(10,-50,0);
	glVertex3f(15,-50,0);
	glVertex3f(30,-50,0);
	glVertex3f(30,-80,0);
	glVertex3f(15,-80,0);
	glVertex3f(0,-25,0);
	glVertex3f(5,-25,0);
	glVertex3f(5,-50,0);
	glVertex3f(0,-50,0);
	glVertex3f(0,-65,0);
	glVertex3f(5,-65,0);
	glVertex3f(5,-80,0);
	glVertex3f(0,-80,0);
	glVertex3f(10,-65,0);
	glVertex3f(15,-65,0);
	glVertex3f(15,-80,0);
	glVertex3f(10,-80,0);
	glVertex3f(30,-55,0);
	glVertex3f(35,-55,0);
	glVertex3f(35,-75,0);
	glVertex3f(30,-75,0);
	glVertex3f(15,-80,0);
	glVertex3f(25,-80,0);
	glVertex3f(25,-85,0);
	glVertex3f(15,-85,0);
	glVertex3f(15,-20,0);
	glVertex3f(30,-20,0);
	glVertex3f(30,-25,0);
	glVertex3f(15,-25,0);
	glVertex3f(20,-15,0);
	glVertex3f(25,-15,0);
	glVertex3f(25,-20,0);
	glVertex3f(20,-20,0);
	glVertex3f(-5,0,0); // Top
	glVertex3f(20,0,0);
	glVertex3f(20,-5,0);
	glVertex3f(-5,-5,0);
	glVertex3f(-10,10,0);
	glVertex3f(25,10,0);
	glVertex3f(25,0,0);
	glVertex3f(-10,0,0);
	glVertex3f(-15,15,0);
	glVertex3f(5,15,0);
	glVertex3f(5,10,0);
	glVertex3f(-15,10,0);
	glVertex3f(-20,20,0);
	glVertex3f(-5,20,0);
	glVertex3f(-5,15,0);
	glVertex3f(-20,15,0);
	glVertex3f(10,15,0);
	glVertex3f(30,15,0);
	glVertex3f(30,10,0);
	glVertex3f(10,10,0);
	glVertex3f(20,20,0);
	glVertex3f(35,20,0);
	glVertex3f(35,15,0);
	glVertex3f(20,15,0);
	glVertex3f(-20,70,0); //Diadema
	glVertex3f(-15,70,0);
	glVertex3f(-15,65,0);
	glVertex3f(-20,65,0);
	glVertex3f(-15,75,0);
	glVertex3f(-5,75,0);
	glVertex3f(-5,70,0);
	glVertex3f(-15,70,0);
	glVertex3f(-10,80,0);
	glVertex3f(0,80,0);
	glVertex3f(0,75,0);
	glVertex3f(-10,75,0);
	glVertex3f(10,80,0);
	glVertex3f(20,80,0);
	glVertex3f(20,75,0);
	glVertex3f(10,75,0);
	glVertex3f(15,75,0);
	glVertex3f(25,75,0);
	glVertex3f(25,70,0);
	glVertex3f(15,70,0);
	glVertex3f(25,70,0);
	glVertex3f(30,70,0);
	glVertex3f(30,65,0);
	glVertex3f(25,65,0);
	
	glColor3f(1.000, 0.843, 0.000); //AMARILLO
	glBegin(GL_QUADS); // Zapato Izquierdo
	glVertex3f(-25,-75,0);
	glVertex3f(-20,-75,0);
	glVertex3f(-20,-90,0);
	glVertex3f(-25,-90,0);
	glVertex3f(-20,-80,0);
	glVertex3f(-10,-80,0);
	glVertex3f(-10,-90,0);
	glVertex3f(-20,-90,0);
	glVertex3f(-10,-85,0);
	glVertex3f(-5,-85,0);
	glVertex3f(-5,-90,0);
	glVertex3f(-10,-90,0);
	glVertex3f(20,-85,0); // Zapato Derecho
	glVertex3f(25,-85,0);
	glVertex3f(25,-90,0);
	glVertex3f(20,-90,0);
	glVertex3f(25,-80,0);
	glVertex3f(40,-80,0);
	glVertex3f(40,-90,0);
	glVertex3f(25,-90,0);
	glVertex3f(35,-75,0);
	glVertex3f(40,-75,0);
	glVertex3f(40,-80,0);
	glVertex3f(35,-80,0);
	glVertex3f(0,-20,0); //Cinturon 
	glVertex3f(15,-20,0);
	glVertex3f(15,-25,0);
	glVertex3f(0,-25,0);
	glVertex3f(15,-15,0);
	glVertex3f(20,-15,0);
	glVertex3f(20,-20,0);
	glVertex3f(15,-20,0);
	glVertex3f(-5,-15,0);
	glVertex3f(0,-15,0);
	glVertex3f(0,-20,0);
	glVertex3f(-5,-20,0);
	glVertex3f(-25,40,0); // Aretes
	glVertex3f(-15,40,0);
	glVertex3f(-15,35,0);
	glVertex3f(-25,35,0);
	glVertex3f(-25,45,0);
	glVertex3f(-20,45,0);
	glVertex3f(-20,40,0);
	glVertex3f(-25,40,0);
	glVertex3f(30,40,0);
	glVertex3f(40,40,0);
	glVertex3f(40,35,0);
	glVertex3f(30,35,0);
	glVertex3f(35,45,0);
	glVertex3f(40,45,0);
	glVertex3f(40,40,0);
	glVertex3f(35,40,0);
	glVertex3f(0,80,0);//Medalla amarilla de arriba que va con la diadema
	glVertex3f(10,80,0);
	glVertex3f(10,75,0);
	glVertex3f(0,75,0);
	glVertex3f(0,85,0);
	glVertex3f(5,85,0);
	glVertex3f(5,80,0);
	glVertex3f(0,80,0);
	
	glColor3f(0.000, 0.000, 0.804); //Azul Rey
	glBegin(GL_QUADS); // Diamante de la Diadema
	glVertex3f(5,85,0);
	glVertex3f(10,85,0);
	glVertex3f(10,80,0);
	glVertex3f(5,80,0);
	glVertex3f(-25,30,0); //Adornos del Pelo
	glVertex3f(-20,30,0);
	glVertex3f(-20,25,0);
	glVertex3f(-25,25,0);
	glVertex3f(-20,25,0);
	glVertex3f(-15,25,0);
	glVertex3f(-15,20,0);
	glVertex3f(-20,20,0);	
	glVertex3f(-40,-20,0);
	glVertex3f(-35,-20,0);
	glVertex3f(-35,-25,0);
	glVertex3f(-40,-25,0);
	glVertex3f(-35,-25,0);
	glVertex3f(-20,-25,0);
	glVertex3f(-20,-30,0);
	glVertex3f(-35,-30,0);
	glVertex3f(-20,-20,0);
	glVertex3f(-15,-20,0);
	glVertex3f(-15,-25,0);
	glVertex3f(-20,-25,0);
	
	glColor3f(1.000, 0.753, 0.796); //Rosado
	glBegin(GL_QUADS); // Mejillas
	glVertex3f(-15,50,0);
	glVertex3f(-10,50,0);
	glVertex3f(-10,40,0);
	glVertex3f(-15,40,0);
	glVertex3f(-10,45,0);
	glVertex3f(-5,45,0);
	glVertex3f(-5,40,0);
	glVertex3f(-10,40,0);
	glVertex3f(20,45,0);
	glVertex3f(30,45,0);
	glVertex3f(30,40,0);
	glVertex3f(20,40,0);
	glVertex3f(25,50,0);
	glVertex3f(30,50,0);
	glVertex3f(30,45,0);
	glVertex3f(25,45,0);
	
	glColor3f(0.804, 0.522, 0.247); //Piel morena
	glBegin(GL_QUADS); // Cuerpo
	glVertex3f(-5,-5,0); //Abdomen
	glVertex3f(20,-5,0);
	glVertex3f(20,-15,0);
	glVertex3f(-5,-15,0);
	glVertex3f(0,-15,0);
	glVertex3f(15,-15,0);
	glVertex3f(15,-20,0);
	glVertex3f(0,-20,0);
	glVertex3f(-30,5,0); //Brazo Izquierdo
	glVertex3f(-20,5,0);
	glVertex3f(-20,-20,0);
	glVertex3f(-30,-20,0);
	glVertex3f(-20,-10,0);
	glVertex3f(-15,-10,0);
	glVertex3f(-15,-15,0);
	glVertex3f(-20,-15,0);
	glVertex3f(-25,10,0);
	glVertex3f(-10,10,0);
	glVertex3f(-10,5,0);
	glVertex3f(-25,5,0);
	glVertex3f(-20,15,0);
	glVertex3f(-15,15,0);
	glVertex3f(-15,10,0);
	glVertex3f(-20,10,0);
	glVertex3f(35,5,0); // Brazo Derecho
	glVertex3f(45,5,0);
	glVertex3f(45,-20,0);
	glVertex3f(35,-20,0);
	glVertex3f(30,-10,0);
	glVertex3f(35,-10,0);
	glVertex3f(35,-15,0);
	glVertex3f(30,-15,0);
	glVertex3f(25,10,0);
	glVertex3f(40,10,0);
	glVertex3f(40,5,0);
	glVertex3f(25,5,0);
	glVertex3f(30,15,0);
	glVertex3f(35,15,0);
	glVertex3f(35,10,0);
	glVertex3f(30,10,0);
	glVertex3f(5,15,0);//Cuello
	glVertex3f(10,15,0);
	glVertex3f(10,10,0);
	glVertex3f(5,10,0);
	glVertex3f(-10,25,0);
	glVertex3f(-5,25,0);
	glVertex3f(-5,20,0);
	glVertex3f(-10,20,0);
	glVertex3f(20,25,0);
	glVertex3f(25,25,0);
	glVertex3f(25,20,0);
	glVertex3f(20,20,0);
	glVertex3f(-5,25,0);
	glVertex3f(20,25,0);
	glVertex3f(20,15,0);
	glVertex3f(-5,15,0);
	glVertex3f(0,40,0);//Cara
	glVertex3f(15,40,0);
	glVertex3f(15,25,0);
	glVertex3f(0,25,0);
	glVertex3f(0,55,0);
	glVertex3f(15,55,0);
	glVertex3f(15,40,0);
	glVertex3f(0,40,0);
	glVertex3f(15,45,0);
	glVertex3f(20,45,0);
	glVertex3f(20,40,0);
	glVertex3f(15,40,0);
	glVertex3f(-5,45,0);
	glVertex3f(0,45,0);
	glVertex3f(0,40,0);
	glVertex3f(-5,40,0);
	glVertex3f(-20,50,0);
	glVertex3f(-15,50,0);
	glVertex3f(-15,40,0);
	glVertex3f(-20,40,0);
	glVertex3f(30,50,0);
	glVertex3f(35,50,0);
	glVertex3f(35,40,0);
	glVertex3f(30,40,0);
	glVertex3f(-10,40,0);
	glVertex3f(0,40,0);
	glVertex3f(0,30,0);
	glVertex3f(-10,30,0);
	glVertex3f(15,40,0);
	glVertex3f(25,40,0);
	glVertex3f(25,30,0);
	glVertex3f(15,30,0);
	glVertex3f(-15,60,0);
	glVertex3f(-10,60,0);
	glVertex3f(-10,50,0);
	glVertex3f(-15,50,0);
	glVertex3f(25,60,0);
	glVertex3f(30,60,0);
	glVertex3f(30,50,0);
	glVertex3f(25,50,0);
	glVertex3f(-10,60,0);
	glVertex3f(25,60,0);
	glVertex3f(25,55,0);
	glVertex3f(-10,55,0);
	glVertex3f(0,65,0);
	glVertex3f(15,65,0);
	glVertex3f(15,60,0);
	glVertex3f(0,60,0);
	glVertex3f(5,70,0);
	glVertex3f(10,70,0);
	glVertex3f(10,65,0);
	glVertex3f(5,65,0);
	glVertex3f(-15,40,0);
	glVertex3f(-10,40,0);
	glVertex3f(-10,35,0);
	glVertex3f(-15,35,0);
	glVertex3f(25,40,0);
	glVertex3f(30,40,0);
	glVertex3f(30,35,0);
	glVertex3f(25,35,0);
	
	glColor3f(0.000, 0.000, 0.000); //Negro
	glBegin(GL_QUADS); 
	glVertex3f(-10,55,0); //Ojo Izquierdo
	glVertex3f(-5,55,0);
	glVertex3f(-5,45,0);
	glVertex3f(-10,45,0);
	glVertex3f(-5,50,0);
	glVertex3f(0,50,0);
	glVertex3f(0,45,0);
	glVertex3f(-5,45,0);
	glVertex3f(20,55,0); //Ojo Derecho
	glVertex3f(25,55,0);
	glVertex3f(25,45,0);
	glVertex3f(20,45,0);
	glVertex3f(15,50,0);
	glVertex3f(20,50,0);
	glVertex3f(20,45,0);
	glVertex3f(15,45,0);
	glVertex3f(-45,-35,0); // Cabello
	glVertex3f(-40,-35,0);
	glVertex3f(-40,-45,0);
	glVertex3f(-45,-45,0);
	glVertex3f(-40,-40,0);
	glVertex3f(-25,-40,0);
	glVertex3f(-25,-50,0);
	glVertex3f(-40,-50,0);
	glVertex3f(-35,-30,0);
	glVertex3f(-15,-30,0);
	glVertex3f(-15,-40,0);
	glVertex3f(-35,-40,0);
	glVertex3f(-25,-40,0);
	glVertex3f(-20,-40,0);
	glVertex3f(-20,-45,0);
	glVertex3f(-25,-45,0);
	glVertex3f(-20,-25,0);
	glVertex3f(-15,-25,0);
	glVertex3f(-15,-30,0);
	glVertex3f(-20,-30,0);
	glVertex3f(-40,-25,0);
	glVertex3f(-35,-25,0);
	glVertex3f(-35,-35,0);
	glVertex3f(-40,-35,0);
	glVertex3f(-45,10,0);
	glVertex3f(-30,10,0);
	glVertex3f(-30,-20,0);
	glVertex3f(-45,-20,0);
	glVertex3f(-35,-20,0);
	glVertex3f(-20,-20,0);
	glVertex3f(-20,-25,0);
	glVertex3f(-35,-25,0);
	glVertex3f(-50,5,0);
	glVertex3f(-45,5,0);
	glVertex3f(-45,-15,0);
	glVertex3f(-50,-15,0);
	glVertex3f(-15,0,0);
	glVertex3f(-5,0,0);
	glVertex3f(-5,-15,0);
	glVertex3f(-15,-15,0);
	glVertex3f(-20,-15,0);
	glVertex3f(-10,-15,0);
	glVertex3f(-10,-20,0);
	glVertex3f(-20,-20,0);
	glVertex3f(-20,0,0);
	glVertex3f(-15,0,0);
	glVertex3f(-15,-10,0);
	glVertex3f(-20,-10,0);
	glVertex3f(-20,5,0);
	glVertex3f(-10,5,0);
	glVertex3f(-10,0,0);
	glVertex3f(-20,0,0);
	glVertex3f(-30,10,0);
	glVertex3f(-25,10,0);
	glVertex3f(-25,5,0);
	glVertex3f(-30,5,0);
	glVertex3f(-35,20,0);
	glVertex3f(-20,20,0);
	glVertex3f(-20,10,0);
	glVertex3f(-35,10,0);
	glVertex3f(-40,15,0);
	glVertex3f(-35,15,0);
	glVertex3f(-35,10,0);
	glVertex3f(-40,10,0);
	glVertex3f(-30,25,0);
	glVertex3f(-20,25,0);
	glVertex3f(-20,20,0);
	glVertex3f(-30,20,0);
	glVertex3f(-15,25,0);
	glVertex3f(-10,25,0);
	glVertex3f(-10,20,0);
	glVertex3f(-15,20,0);
	glVertex3f(-20,30,0);
	glVertex3f(0,30,0);
	glVertex3f(0,25,0);
	glVertex3f(-20,25,0);
	glVertex3f(-30,35,0);
	glVertex3f(-10,35,0);
	glVertex3f(-10,30,0);
	glVertex3f(-30,30,0);
	glVertex3f(-30,45,0);
	glVertex3f(-25,45,0);
	glVertex3f(-25,35,0);
	glVertex3f(-30,35,0);
	glVertex3f(-35,65,0);
	glVertex3f(-20,65,0);
	glVertex3f(-20,45,0);
	glVertex3f(-35,45,0);
	glVertex3f(-30,70,0);
	glVertex3f(-20,70,0);
	glVertex3f(-20,65,0);
	glVertex3f(-30,65,0);
	glVertex3f(-20,65,0);
	glVertex3f(-15,65,0);
	glVertex3f(-15,50,0);
	glVertex3f(-20,50,0);
	glVertex3f(-15,70,0);
	glVertex3f(0,70,0);
	glVertex3f(0,60,0);
	glVertex3f(-15,60,0);
	glVertex3f(0,70,0);
	glVertex3f(5,70,0);
	glVertex3f(5,65,0);
	glVertex3f(0,65,0);
	glVertex3f(-5,75,0);
	glVertex3f(15,75,0);
	glVertex3f(15,70,0);
	glVertex3f(-5,70,0);
	glVertex3f(10,70,0);
	glVertex3f(25,70,0);
	glVertex3f(25,65,0);
	glVertex3f(10,65,0);
	glVertex3f(15,65,0);
	glVertex3f(30,65,0);
	glVertex3f(30,60,0);
	glVertex3f(15,60,0);
	glVertex3f(-20,80,0);
	glVertex3f(-15,80,0);
	glVertex3f(-15,70,0);
	glVertex3f(-20,70,0);
	glVertex3f(-15,85,0);
	glVertex3f(-10,85,0);
	glVertex3f(-10,75,0);
	glVertex3f(-15,75,0);
	glVertex3f(-10,90,0);
	glVertex3f(0,90,0);
	glVertex3f(0,80,0);
	glVertex3f(-10,80,0);
	glVertex3f(0,90,0);
	glVertex3f(25,90,0);
	glVertex3f(25,85,0);
	glVertex3f(0,85,0);
	glVertex3f(10,85,0);
	glVertex3f(30,85,0);
	glVertex3f(30,80,0);
	glVertex3f(10,80,0);
	glVertex3f(20,80,0);
	glVertex3f(35,80,0);
	glVertex3f(35,75,0);
	glVertex3f(20,75,0);
	glVertex3f(25,75,0);
	glVertex3f(35,75,0);
	glVertex3f(35,70,0);
	glVertex3f(25,70,0);
	glVertex3f(30,70,0);
	glVertex3f(45,70,0);
	glVertex3f(45,50,0);
	glVertex3f(30,50,0);
	glVertex3f(45,65,0);
	glVertex3f(50,65,0);
	glVertex3f(50,45,0);
	glVertex3f(45,45,0);
	glVertex3f(35,50,0);
	glVertex3f(45,50,0);
	glVertex3f(45,45,0);
	glVertex3f(35,45,0);
	glVertex3f(40,45,0);
	glVertex3f(45,45,0);
	glVertex3f(45,30,0);
	glVertex3f(40,30,0);
	glVertex3f(25,35,0);
	glVertex3f(40,35,0);
	glVertex3f(40,25,0);
	glVertex3f(25,25,0);
	glVertex3f(25,25,0);
	glVertex3f(35,25,0);
	glVertex3f(35,20,0);
	glVertex3f(25,20,0);
	glVertex3f(15,30,0);
	glVertex3f(25,30,0);
	glVertex3f(25,25,0);
	glVertex3f(15,25,0);

	glEnd();
	
}
void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	Castillo();
	glLoadIdentity();
	glScalef( .1, .1, .1 ); 
	glTranslatef(800,800,0);
	pintalineas(0,0,20);
	glLoadIdentity();
	glScalef( .5, .5, 1.0 ); 
	glTranslatef(-100,-100,0);
	Jasmine();
	glLoadIdentity();
	glScalef( .2, .2, 1.0 ); 
	glTranslatef(50,90,0);
	Jasmine();	
	glLoadIdentity();
	glScalef( .2, .2, 1.0 ); 
	glTranslatef(400,150,0);
	glRotatef( 85, 0.0, 0.0, 1.0 );
	Jasmine();
	glLoadIdentity();
	glScalef( .3, .3, 1.0 ); 
	glTranslatef(200,-250,0);
	glRotatef( 85, 0.0, 0.0, 1.0 );
	Jasmine();
	glFlush();	
};
//El dibujo me recordo a megaman , por eso puse la barra en vez un cielo
void init()
{
glClearColor(1,1,1,1);
}
int main(int argc, char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(100, 100);
glutInitWindowSize(600, 600);
glutCreateWindow("Jazmin");
init();
glutDisplayFunc(display);
glutReshapeFunc(reshape);
glutMainLoop();
return 0;
}


