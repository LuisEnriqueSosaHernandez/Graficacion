#include <stdio.h>
#include <math.h>
#include <GL/glut.h>
#include <unistd.h>
#include <time.h>
void display();
void specialKeys();
void reshape();
void keyboard();
void mouse();
void pintar();
void figuras();

double rotate_x=0;
double rotate_y=0;
double rotate_z=0;
double escale_y=1.0; 
double escale_x=1.0;
double escale_z=1.0;
double translate_x=0.0;
float z1=60, z2=-60;
int i=0;
int empezar=0;
float velocidad=1;
float escalax=1;
	
void reshape(int width, int height){
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glOrtho(-100, 100, -100, 100, -100, 100);
	glMatrixMode(GL_MODELVIEW);	
	glEnd();
	glFlush();
	}
	
	void cuadritos(){
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
		//Triangulo frontal
		glPushMatrix();
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
		glPopMatrix();
	}
	
	
void display(){
		glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
		glPushMatrix();
		cuadritos();
		glPopMatrix();
		glPushMatrix();
		 glRotatef( rotate_y, 0.0, 1.0, 1.0 );
		 glScalef(escalax,escalax,escalax);
		minion();
		glPopMatrix();
		
		glFlush();
		
		glutSwapBuffers();
		
		if(empezar==1){
			//rotate_x+=velocidad;
			rotate_y+=velocidad;
			//rotate_z+=velocidad;
			if(escalax<=0){
				escalax=1;
			}
			escalax-=0.01;
		glutPostRedisplay();

}
}
	void mouse(int button,int state,int x,int y){
		switch(button){
			case GLUT_LEFT_BUTTON:
				empezar=1;
				velocidad+=.4;
			break;
			case GLUT_RIGHT_BUTTON:
				empezar=0;
				velocidad=1;
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
	glutInitWindowSize(500, 500);
	glutCreateWindow("Minion");
	init();
	glEnable(GL_DEPTH_TEST);
	glutDisplayFunc(display);
	//glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
	}

