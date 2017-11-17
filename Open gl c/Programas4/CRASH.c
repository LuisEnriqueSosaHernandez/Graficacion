#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

float scale_x=0.5,scale_y=0.5,scale_z=0.5,rotate_x=0.0,rotate_y=0.0,rotate_z=0.0,translate_x=0.0,translate_y=0.0,translate_z=0.0;

void reshape(int width, int height){
 glViewport(0, 0, width, height);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glOrtho(-500, 500, -500, 500, -500, 500);
 glMatrixMode(GL_MODELVIEW);
}
void crash()
	{
		//PIE_DERECHO
		//AZUL_PANTALON
		glColor3ub(0,0,255);
		glBegin(GL_QUADS);
		glVertex3f(-50,-20,0);
		glVertex3f(-50,40,0);
		glVertex3f(-20,40,0);
		glVertex3f(-20,-20,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-40,40,0);
		glVertex3f(-40,50,0);
		glVertex3f(-20,50,0);
		glVertex3f(-20,40,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-20,50,0);
		glVertex3f(-10,50,0);
		glVertex3f(-10,30,0);
		glVertex3f(-20,0,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-30,70,0);
		glVertex3f(0,70,0);
		glVertex3f(0,50,0);
		glVertex3f(-30,50,0);
		glEnd();
		//END_PANTALON
		
		glColor3ub(0,0,0);
		glBegin(GL_QUADS);
		glVertex3f(-100,-60,0);
		glVertex3f(-100,-90,0);
		glVertex3f(-90,-90,0);
		glVertex3f(-90,-60,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-90,-90,0);
		glVertex3f(-90,-80,0);
		glVertex3f(-10,-80,0);
		glVertex3f(-10,-90,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-20,-80,0);
		glVertex3f(-10,-80,0);
		glVertex3f(-10,-50,0);
		glVertex3f(-20,-50,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-30,-50,0);
		glVertex3f(-20,-50,0);
		glVertex3f(-20,-30,0);
		glVertex3f(-30,-30,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-90,-60,0);
		glVertex3f(-90,-50,0);
		glVertex3f(-60,-50,0);
		glVertex3f(-60,-60,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-60,-50,0);
		glVertex3f(-60,-40,0);
		glVertex3f(-50,-40,0);
		glVertex3f(-50,-50,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-50,-40,0);
		glVertex3f(-50,-30,0);
		glVertex3f(-40,-30,0);
		glVertex3f(-40,-40,0);
		glEnd();
		
		glColor3ub(191,191,191);
		glBegin(GL_QUADS);
		glVertex3f(-80,-70,0);
		glVertex3f(-80,-60,0);
		glVertex3f(-20,-60,0);
		glVertex3f(-20,-70,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-50,-60,0);
		glVertex3f(-50,-50,0);
		glVertex3f(-20,-50,0);
		glVertex3f(-20,-60,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-40,-50,0);
		glVertex3f(-30,-50,0);
		glVertex3f(-30,-30,0);
		glVertex3f(-40,-30,0);
		glEnd();
		
		glColor3ub(0,0,0);
		glBegin(GL_QUADS);
		glVertex3f(-60,-30,0);
		glVertex3f(-60,-20,0);
		glVertex3f(-10,-20,0);
		glVertex3f(-10,-30,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-60,-20,0);
		glVertex3f(-60,50,0);
		glVertex3f(-50,50,0);
		glVertex3f(-50,-20,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-20,-20,0);
		glVertex3f(-20,30,0);
		glVertex3f(-10,30,0);
		glVertex3f(-10,-20,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-10,20,0);
		glVertex3f(-10,50,0);
		glVertex3f(0,50,0);
		glVertex3f(0,20,0);
		glEnd();
		
		//END_PIE_DERECHO
		
		//PIE IZQUIERDO
		
		//AZUL_PANTALON
		glColor3ub(0,0,255);
		glBegin(GL_QUADS);
		glVertex3f(20,10,0);
		glVertex3f(20,-20,0);
		glVertex3f(50,-20,0);
		glVertex3f(50,10,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(10,50,0);
		glVertex3f(40,50,0);
		glVertex3f(40,10,0);
		glVertex3f(10,10,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(0,50,0);
		glVertex3f(10,50,0);
		glVertex3f(10,30,0);
		glVertex3f(0,30,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(0,70,0);
		glVertex3f(30,70,0);
		glVertex3f(30,50,0);
		glVertex3f(0,50,0);
		glEnd();
		
		//END_PANTALON_AZUL
		
		glColor3ub(0,0,0);
		glBegin(GL_QUADS);
		glVertex3f(-50,40,0);
		glVertex3f(-50,50,0);
		glVertex3f(-40,50,0);
		glVertex3f(-40,40,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-40,50,0);
		glVertex3f(-40,80,0);
		glVertex3f(-30,80,0);
		glVertex3f(-30,50,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(0,30,0);
		glVertex3f(10,30,0);
		glVertex3f(10,10,0);
		glVertex3f(0,10,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(10,10,0);
		glVertex3f(20,10,0);
		glVertex3f(20,-30,0);
		glVertex3f(10,-30,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(20,-30,0);
		glVertex3f(20,-20,0);
		glVertex3f(60,-20,0);
		glVertex3f(60,-30,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(50,-20,0);
		glVertex3f(50,10,0);
		glVertex3f(60,10,0);
		glVertex3f(60,-20,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(50,10,0);
		glVertex3f(40,10,0);
		glVertex3f(40,50,0);
		glVertex3f(50,50,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(40,50,0);
		glVertex3f(30,50,0);
		glVertex3f(30,70,0);
		glVertex3f(40,70,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(20,-30,0);
		glVertex3f(20,-40,0);
		glVertex3f(30,-40,0);
		glVertex3f(30,-30,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(10,-40,0);
		glVertex3f(20,-40,0);
		glVertex3f(20,-60,0);
		glVertex3f(10,-60,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(0,-60,0);
		glVertex3f(10,-60,0);
		glVertex3f(10,-90,0);
		glVertex3f(0,-90,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(10,-80,0);
		glVertex3f(10,-90,0);
		glVertex3f(70,-90,0);
		glVertex3f(70,-80,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(60,-80,0);
		glVertex3f(70,-80,0);
		glVertex3f(70,-60,0);
		glVertex3f(60,-60,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(50,-60,0);
		glVertex3f(60,-60,0);
		glVertex3f(60,-40,0);
		glVertex3f(50,-40,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(40,-30,0);
		glVertex3f(50,-30,0);
		glVertex3f(50,-40,0);
		glVertex3f(40,-40,0);
		glEnd();
		
		glColor3ub(191,191,191);
		glBegin(GL_QUADS);
		glVertex3f(30,-30,0);
		glVertex3f(40,-30,0);
		glVertex3f(40,-40,0);
		glVertex3f(30,-40,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(20,-50,0);
		glVertex3f(20,-40,0);
		glVertex3f(30,-40,0);
		glVertex3f(30,-50,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(40,-40,0);
		glVertex3f(50,-40,0);
		glVertex3f(50,-50,0);
		glVertex3f(40,-50,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(30,-50,0);
		glVertex3f(40,-50,0);
		glVertex3f(40,-60,0);
		glVertex3f(30,-60,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(10,-60,0);
		glVertex3f(10,-70,0);
		glVertex3f(60,-70,0);
		glVertex3f(60,-60,0);
		glEnd();
		//END PIE IZQUIERDO
		
		//BEGIN_TORZO
		glColor3ub(0,0,0);
		glBegin(GL_QUADS);
		glVertex3f(-30,70,0);
		glVertex3f(-30,110,0);
		glVertex3f(-20,110,0);
		glVertex3f(-20,70,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(10,70,0);
		glVertex3f(10,80,0);
		glVertex3f(30,80,0);
		glVertex3f(30,70,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(20,80,0);
		glVertex3f(20,100,0);
		glVertex3f(30,100,0);
		glVertex3f(30,80,0);
		glEnd();
		
		glColor3ub(77,77,77);
		glBegin(GL_QUADS);
		glVertex3f(-20,80,0);
		glVertex3f(10,80,0);
		glVertex3f(10,70,0);
		glVertex3f(-20,70,0);
		glEnd();
		
		//PARTE CARNE
		glColor3ub(255,206,64);
		glBegin(GL_QUADS);
		glVertex3f(-20,80,0);
		glVertex3f(-20,170,0);
		glVertex3f(10,170,0);
		glVertex3f(10,80,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-30,110,0);
		glVertex3f(-30,170,0);
		glVertex3f(-20,170,0);
		glVertex3f(-20,110,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(10,100,0);
		glVertex3f(10,170,0);
		glVertex3f(20,170,0);
		glVertex3f(20,100,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(20,140,0);
		glVertex3f(20,170,0);
		glVertex3f(30,170,0);
		glVertex3f(30,140,0);
		glEnd();
		//END PARTE CARNE
		
		glColor3ub(255,74,0);
		glBegin(GL_QUADS);
		glVertex3f(10,80,0);
		glVertex3f(10,100,0);
		glVertex3f(20,100,0);
		glVertex3f(20,80,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(20,100,0);
		glVertex3f(20,140,0);
		glVertex3f(30,140,0);
		glVertex3f(30,100,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(30,130,0);
		glVertex3f(30,170,0);
		glVertex3f(40,170,0);
		glVertex3f(40,130,0);
		glEnd();
		
		glColor3ub(0,0,0);
		glBegin(GL_QUADS);
		glVertex3f(30,100,0);
		glVertex3f(30,130,0);
		glVertex3f(40,130,0);
		glVertex3f(40,100,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(40,130,0);
		glVertex3f(40,170,0);
		glVertex3f(50,170,0);
		glVertex3f(50,130,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-40,110,0);
		glVertex3f(-40,160,0);
		glVertex3f(-30,160,0);
		glVertex3f(-30,110,0);
		glEnd();
		
		glColor3ub(255,206,64);
		glBegin(GL_QUADS);
		glVertex3f(-40,170,0);
		glVertex3f(-30,170,0);
		glVertex3f(-30,160,0);
		glVertex3f(-40,160,0);
		glEnd();
		//END_TORZO
		
		//CARA
		glColor3ub(255,206,64);
		glBegin(GL_QUADS);
		glVertex3f(-10,200,0);
		glVertex3f(-10,210,0);
		glVertex3f(30,210,0);
		glVertex3f(30,200,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-10,170,0);
		glVertex3f(-10,180,0);
		glVertex3f(40,180,0);
		glVertex3f(40,170,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(10,180,0);
		glVertex3f(10,190,0);
		glVertex3f(40,190,0);
		glVertex3f(40,180,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(20,190,0);
		glVertex3f(20,200,0);
		glVertex3f(40,200,0);
		glVertex3f(40,190,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-70,180,0);
		glVertex3f(-70,190,0);
		glVertex3f(-10,190,0);
		glVertex3f(-10,180,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-80,190,0);
		glVertex3f(-80,200,0);
		glVertex3f(10,200,0);
		glVertex3f(10,190,0);
		glEnd();
		
		
		glBegin(GL_QUADS);
		glVertex3f(-80,200,0);
		glVertex3f(-80,210,0);
		glVertex3f(-60,210,0);
		glVertex3f(-60,200,0);
		glEnd();
		
		glColor3ub(61, 43, 31);
		glBegin(GL_QUADS);
		glVertex3f(-50,170,0);
		glVertex3f(-50,180,0);
		glVertex3f(-10,180,0);
		glVertex3f(-10,170,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-10,180,0);
		glVertex3f(-10,190,0);
		glVertex3f(10,190,0);
		glVertex3f(10,180,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(10,190,0);
		glVertex3f(10,200,0);
		glVertex3f(20,200,0);
		glVertex3f(20,190,0);
		glEnd();
		
		
		
		glColor3ub(0, 0,0);
		glBegin(GL_QUADS);
		glVertex3f(-70,170,0);
		glVertex3f(-70,180,0);
		glVertex3f(-50,180,0);
		glVertex3f(-50,170,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-80,180,0);
		glVertex3f(-80,190,0);
		glVertex3f(-70,190,0);
		glVertex3f(-70,180,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-90,190,0);
		glVertex3f(-90,210,0);
		glVertex3f(-80,210,0);
		glVertex3f(-80,190,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-100,200,0);
		glVertex3f(-100,210,0);
		glVertex3f(-90,210,0);
		glVertex3f(-90,200,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-110,210,0);
		glVertex3f(-110,230,0);
		glVertex3f(-100,230,0);
		glVertex3f(-100,210,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-100,220,0);
		glVertex3f(-100,230,0);
		glVertex3f(-90,230,0);
		glVertex3f(-90,220,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-90,220,0);
		glVertex3f(-70,220,0);
		glVertex3f(-70,210,0);
		glVertex3f(-90,210,0);
		glEnd();
		
		
		
		glColor3ub(255,74,0);
		glBegin(GL_QUADS);
		glVertex3f(-60,200,0);
		glVertex3f(-60,210,0);
		glVertex3f(-10,210,0);
		glVertex3f(-10,200,0);
		glEnd();
		
		
		
		glBegin(GL_QUADS);
		glVertex3f(-70,210,0);
		glVertex3f(-70,220,0);
		glVertex3f(50,220,0);
		glVertex3f(50,210,0);
		glEnd();
		
		
		glBegin(GL_QUADS);
		glVertex3f(0,220,0);
		glVertex3f(0,230,0);
		glVertex3f(50,230,0);
		glVertex3f(50,220,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(10,230,0);
		glVertex3f(10,240,0);
		glVertex3f(50,240,0);
		glVertex3f(50,230,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(10,240,0);
		glVertex3f(10,270,0);
		glVertex3f(40,270,0);
		glVertex3f(40,240,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-50,220,0);
		glVertex3f(-50,250,0);
		glVertex3f(-40,250,0);
		glVertex3f(-40,220,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-40,220,0);
		glVertex3f(-40,260,0);
		glVertex3f(-30,260,0);
		glVertex3f(-30,220,0);
		glEnd();
		
		//OJO IZQ
		glColor3ub(0,128,0);
		glBegin(GL_QUADS);
		glVertex3f(-60,220,0);
		glVertex3f(-60,230,0);
		glVertex3f(-50,230,0);
		glVertex3f(-50,220,0);
		glEnd();
		
		glColor3ub(0,0,0);
		glBegin(GL_QUADS);
		glVertex3f(-70,220,0);
		glVertex3f(-70,250,0);
		glVertex3f(-60,250,0);
		glVertex3f(-60,220,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-60,230,0);
		glVertex3f(-60,240,0);
		glVertex3f(-50,240,0);
		glVertex3f(-50,230,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-60,250,0);
		glVertex3f(-60,260,0);
		glVertex3f(-50,260,0);
		glVertex3f(-50,250,0);
		glEnd();
		
		glColor3ub(255,74,0);
		glBegin(GL_QUADS);
		glVertex3f(-70,250,0);
		glVertex3f(-70,260,0);
		glVertex3f(-60,260,0);
		glVertex3f(-60,250,0);
		glEnd();
		//END OJO IZQ
		
		//OJO DERECHO
		glColor3ub(0,128,0);
		glBegin(GL_QUADS);
		glVertex3f(-30,220,0);
		glVertex3f(-30,230,0);
		glVertex3f(-10,230,0);
		glVertex3f(-10,220,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-20,230,0);
		glVertex3f(-20,250,0);
		glVertex3f(-10,250,0);
		glVertex3f(-10,230,0);
		glEnd();
		
		glColor3ub(0,0,0);
		glBegin(GL_QUADS);
		glVertex3f(-30,230,0);
		glVertex3f(-30,240,0);
		glVertex3f(-20,240,0);
		glVertex3f(-20,230,0);
		glEnd();
		
		//END OJO DERECHO
		glColor3ub(0,0,0);
		glBegin(GL_QUADS);
		glVertex3f(-30,250,0);
		glVertex3f(-30,270,0);
		glVertex3f(-20,270,0);
		glVertex3f(-20,250,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-20,250,0);
		glVertex3f(-20,260,0);
		glVertex3f(-10,260,0);
		glVertex3f(-10,250,0);
		glEnd();
		
		glColor3ub(191,191,191);
		glBegin(GL_QUADS);
		glVertex3f(-10,220,0);
		glVertex3f(-10,230,0);
		glVertex3f(0,230,0);
		glVertex3f(0,220,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(0,230,0);
		glVertex3f(0,240,0);
		glVertex3f(10,240,0);
		glVertex3f(10,230,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(0,250,0);
		glVertex3f(0,260,0);
		glVertex3f(10,260,0);
		glVertex3f(10,250,0);
		glEnd();
		
		glColor3ub(0,0,0);
		glBegin(GL_QUADS);
		glVertex3f(-10,260,0);
		glVertex3f(-10,270,0);
		glVertex3f(10,270,0);
		glVertex3f(10,260,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(0,280,0);
		glVertex3f(30,280,0);
		glVertex3f(30,270,0);
		glVertex3f(0,270,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(30,280,0);
		glVertex3f(30,290,0);
		glVertex3f(50,290,0);
		glVertex3f(50,280,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(50,290,0);
		glVertex3f(50,300,0);
		glVertex3f(90,300,0);
		glVertex3f(90,290,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(80,290,0);
		glVertex3f(90,290,0);
		glVertex3f(90,270,0);
		glVertex3f(80,270,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(70,270,0);
		glVertex3f(80,270,0);
		glVertex3f(80,250,0);
		glVertex3f(70,250,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(60,250,0);
		glVertex3f(70,250,0);
		glVertex3f(70,240,0);
		glVertex3f(60,240,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(50,240,0);
		glVertex3f(60,240,0);
		glVertex3f(60,210,0);
		glVertex3f(50,210,0);
		glEnd();
		
		
		glColor3ub(255,74,0);
		glBegin(GL_QUADS);
		glVertex3f(50,280,0);
		glVertex3f(50,290,0);
		glVertex3f(80,290,0);
		glVertex3f(80,280,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(70,280,0);
		glVertex3f(80,280,0);
		glVertex3f(80,270,0);
		glVertex3f(70,270,0);
		glEnd();
		
		glColor3ub(0,0,0);
		glBegin(GL_QUADS);
		glVertex3f(60,280,0);
		glVertex3f(70,280,0);
		glVertex3f(70,260,0);
		glVertex3f(60,260,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(50,270,0);
		glVertex3f(60,270,0);
		glVertex3f(60,250,0);
		glVertex3f(50,250,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(40,250,0);
		glVertex3f(50,250,0);
		glVertex3f(50,240,0);
		glVertex3f(40,240,0);
		glEnd();
		
		glColor3ub(255,74,0);
		glBegin(GL_QUADS);
		glVertex3f(30,270,0);
		glVertex3f(30,280,0);
		glVertex3f(50,280,0);
		glVertex3f(50,270,0);
		glEnd();
		
		glColor3ub(96, 48, 0);
		glBegin(GL_QUADS);
		glVertex3f(40,270,0);
		glVertex3f(50,270,0);
		glVertex3f(50,250,0);
		glVertex3f(40,250,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(50,280,0);
		glVertex3f(60,280,0);
		glVertex3f(60,270,0);
		glVertex3f(50,270,0);
		glEnd();
		
		glColor3ub(255,74,0); 
		glBegin(GL_QUADS);
		glVertex3f(60,260,0);
		glVertex3f(70,260,0);
		glVertex3f(70,250,0);
		glVertex3f(60,250,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(50,250,0);
		glVertex3f(60,250,0);
		glVertex3f(60,240,0);
		glVertex3f(50,240,0);
		glEnd();
		
		glColor3ub(0,0,0); 
		glBegin(GL_QUADS);
		glVertex3f(-80,250,0);
		glVertex3f(-80,270,0);
		glVertex3f(-70,270,0);
		glVertex3f(-70,250,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-90,270,0);
		glVertex3f(-90,300,0);
		glVertex3f(-80,300,0);
		glVertex3f(-80,270,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-80,300,0);
		glVertex3f(-60,300,0);
		glVertex3f(-60,290,0);
		glVertex3f(-80,290,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-70,260,0);
		glVertex3f(-70,280,0);
		glVertex3f(-60,280,0);
		glVertex3f(-60,260,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-60,290,0);
		glVertex3f(-50,290,0);
		glVertex3f(-50,270,0);
		glVertex3f(-60,270,0);
		glEnd();
		
		glColor3ub(255,74,0); 
		glBegin(GL_QUADS);
		glVertex3f(-80,270,0);
		glVertex3f(-80,290,0);
		glVertex3f(-70,290,0);
		glVertex3f(-70,270,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-70,290,0);
		glVertex3f(-60,290,0);
		glVertex3f(-60,280,0);
		glVertex3f(-70,280,0);
		glEnd();
		
		glColor3ub(191,191,191);
		glBegin(GL_QUADS);
		glVertex3f(-60,270,0);
		glVertex3f(-50,270,0);
		glVertex3f(-50,260,0);
		glVertex3f(-60,260,0);
		glEnd();
		
		glColor3ub(0,0,0);
		glBegin(GL_QUADS);
		glVertex3f(-60,250,0);
		glVertex3f(-40,250,0);
		glVertex3f(-40,260,0);
		glVertex3f(-60,260,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-50,270,0);
		glVertex3f(-40,270,0);
		glVertex3f(-40,260,0);
		glVertex3f(-50,260,0);
		glEnd();
		
		glColor3ub(96, 48, 0);
		glBegin(GL_QUADS);
		glVertex3f(-50,310,0);
		glVertex3f(-40,310,0);
		glVertex3f(-40,270,0);
		glVertex3f(-50,270,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-40,260,0);
		glVertex3f(-40,320,0);
		glVertex3f(-30,320,0);
		glVertex3f(-30,260,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-30,270,0);
		glVertex3f(-30,300,0);
		glVertex3f(-20,300,0);
		glVertex3f(-20,270,0);
		glEnd();
		
		glColor3ub(0,0,0); 
		glBegin(GL_QUADS);
		glVertex3f(10,300,0);
		glVertex3f(10,290,0);
		glVertex3f(0,290,0);
		glVertex3f(0,300,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-10,290,0);
		glVertex3f(0,290,0);
		glVertex3f(0,280,0);
		glVertex3f(-10,280,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-20,280,0);
		glVertex3f(-20,260,0);
		glVertex3f(-10,260,0);
		glVertex3f(-10,280,0);
		glEnd();
		
		glColor3ub(191,191,191);
		glBegin(GL_QUADS);
		glVertex3f(-10,280,0);
		glVertex3f(0,280,0);
		glVertex3f(0,270,0);
		glVertex3f(-10,270,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(0,290,0);
		glVertex3f(10,290,0);
		glVertex3f(10,280,0);
		glVertex3f(0,280,0);
		glEnd();
		//END_CARA
		//BRAZO IZQUIERDO
		glColor3ub(0,0,0);
		glBegin(GL_QUADS);
		glVertex3f(60,210,0);
		glVertex3f(70,210,0);
		glVertex3f(70,190,0);
		glVertex3f(60,190,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(70,190,0);
		glVertex3f(80,190,0);
		glVertex3f(80,170,0);
		glVertex3f(70,170,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(80,170,0);
		glVertex3f(80,130,0);
		glVertex3f(90,130,0);
		glVertex3f(90,170,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(90,130,0);
		glVertex3f(90,70,0);
		glVertex3f(100,70,0);
		glVertex3f(100,130,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(100,70,0);
		glVertex3f(100,50,0);
		glVertex3f(110,50,0);
		glVertex3f(110,70,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(110,50,0);
		glVertex3f(110,20,0);
		glVertex3f(120,20,0);
		glVertex3f(120,50,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(100,20,0);
		glVertex3f(100,10,0);
		glVertex3f(110,10,0);
		glVertex3f(110,20,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(70,10,0);
		glVertex3f(70,0,0);
		glVertex3f(100,0,0);
		glVertex3f(100,10,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(60,30,0);
		glVertex3f(60,10,0);
		glVertex3f(70,10,0);
		glVertex3f(70,30,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(50,140,0);
		glVertex3f(50,120,0);
		glVertex3f(60,120,0);
		glVertex3f(60,140,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(60,120,0);
		glVertex3f(60,90,0);
		glVertex3f(70,90,0);
		glVertex3f(70,120,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(70,90,0);
		glVertex3f(70,60,0);
		glVertex3f(80,60,0);
		glVertex3f(80,90,0);
		glEnd();
	    
	    glColor3ub(255,74,0); 	
		glBegin(GL_QUADS);
		glVertex3f(70,20,0);
		glVertex3f(70,10,0);
		glVertex3f(90,10,0);
		glVertex3f(90,20,0);
		glEnd();
		
		glColor3ub(96, 48, 0);
		glBegin(GL_QUADS);
		glVertex3f(100,50,0);
		glVertex3f(100,20,0);
		glVertex3f(110,20,0);
		glVertex3f(110,50,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(90,70,0);
		glVertex3f(90,10,0);
		glVertex3f(100,10,0);
		glVertex3f(100,70,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(80,60,0);
		glVertex3f(80,20,0);
		glVertex3f(90,20,0);
		glVertex3f(90,60,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(70,60,0);
		glVertex3f(70,40,0);
		glVertex3f(80,40,0);
		glVertex3f(80,60,0);
		glEnd();
		
		glColor3ub(0, 0, 0);
		glBegin(GL_QUADS);
		glVertex3f(70,40,0);
		glVertex3f(70,20,0);
		glVertex3f(80,20,0);
		glVertex3f(80,40,0);
		glEnd();
		
		glColor3ub(255,74,0); 
		glBegin(GL_QUADS);
		glVertex3f(80,130,0);
		glVertex3f(80,60,0);
		glVertex3f(90,60,0);
		glVertex3f(90,130,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(70,170,0);
		glVertex3f(70,90,0);
		glVertex3f(80,90,0);
		glVertex3f(80,170,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(60,190,0);
		glVertex3f(60,120,0);
		glVertex3f(70,120,0);
		glVertex3f(70,190,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(50,210,0);
		glVertex3f(50,140,0);
		glVertex3f(60,140,0);
		glVertex3f(60,210,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(40,210,0);
		glVertex3f(40,170,0);
		glVertex3f(50,170,0);
		glVertex3f(50,210,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(30,210,0);
		glVertex3f(30,200,0);
		glVertex3f(40,200,0);
		glVertex3f(40,210,0);
		glEnd();
		//END BRAZO IZQUIERDO 
		//BRAZO DERECHO
		glColor3ub(0,0,0); 
		glBegin(GL_QUADS);
		glVertex3f(-60,170,0);
		glVertex3f(-60,160,0);
		glVertex3f(-40,160,0);
		glVertex3f(-40,170,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-60,160,0);
		glVertex3f(-60,150,0);
		glVertex3f(-50,150,0);
		glVertex3f(-50,160,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-70,150,0);
		glVertex3f(-70,130,0);
		glVertex3f(-60,130,0);
		glVertex3f(-60,150,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-80,130,0);
		glVertex3f(-80,80,0);
		glVertex3f(-70,80,0);
		glVertex3f(-70,130,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-90,80,0);
		glVertex3f(-90,60,0);
		glVertex3f(-80,60,0);
		glVertex3f(-80,80,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-100,60,0);
		glVertex3f(-100,30,0);
		glVertex3f(-90,30,0);
		glVertex3f(-90,60,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-90,30,0);
		glVertex3f(-90,20,0);
		glVertex3f(-80,20,0);
		glVertex3f(-80,30,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-80,20,0);
		glVertex3f(-80,10,0);
		glVertex3f(-60,10,0);
		glVertex3f(-60,20,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-50,120,0);
		glVertex3f(-50,100,0);
		glVertex3f(-40,100,0);
		glVertex3f(-40,120,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-60,100,0);
		glVertex3f(-60,70,0);
		glVertex3f(-50,70,0);
		glVertex3f(-50,100,0);
		glEnd();
		
		glColor3ub(255,74,0); 
		glBegin(GL_QUADS);
		glVertex3f(-50,160,0);
		glVertex3f(-50,120,0);
		glVertex3f(-40,120,0);
		glVertex3f(-40,160,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-60,150,0);
		glVertex3f(-60,100,0);
		glVertex3f(-50,100,0);
		glVertex3f(-50,150,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-70,130,0);
		glVertex3f(-70,70,0);
		glVertex3f(-60,70,0);
		glVertex3f(-60,130,0);
		glEnd();
		
		glColor3ub(96, 48, 0);
		glBegin(GL_QUADS);
		glVertex3f(-90,60,0);
		glVertex3f(-90,30,0);
		glVertex3f(-80,30,0);
		glVertex3f(-80,60,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-80,80,0);
		glVertex3f(-80,20,0);
		glVertex3f(-70,20,0);
		glVertex3f(-70,80,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-70,70,0);
		glVertex3f(-70,30,0);
		glVertex3f(-60,30,0);
		glVertex3f(-60,70,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-60,70,0);
		glVertex3f(-60,50,0);
		glVertex3f(-50,50,0);
		glVertex3f(-50,70,0);
		glEnd();
		
		glBegin(GL_QUADS);
		glVertex3f(-50,60,0);
		glVertex3f(-50,50,0);
		glVertex3f(-40,50,0);
		glVertex3f(-40,60,0);
		glEnd();
		
		glColor3ub(255,74,0); 
		glBegin(GL_QUADS);
		glVertex3f(-70,30,0);
		glVertex3f(-70,20,0);
		glVertex3f(-60,20,0);
		glVertex3f(-60,30,0);
		glEnd();
		//END BRAZO DERECHO
		
		
		
		
	}

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glScalef( scale_x, scale_y, scale_z ); 
	glRotatef( rotate_x, 1.0, 0.0, 0.0 );
	glRotatef( rotate_y, 0.0, 1.0, 0.0 );
	glRotatef( rotate_z, 0.0, 0.0, 1.0 );
	glTranslatef(translate_x,translate_y,translate_z);
	crash();
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
	glutCreateWindow("Crash Bandicoot (PLEASE SEND HELP)");
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
