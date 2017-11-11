#include <GL/glut.h>
#include <math.h>
#include <stdio.h>


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
void abanico(){
	int x=100,y=100,x1=-100,y1=100;
	
	for(y=-100;y<100;y+=9){
		glColor3f(0.97f, 0.02f, 0.92f); //Line black
		linea(-100,100,x,y);
		glColor3f(0.97f, 0.78f, 0.02f); //Line black
		linea(-100,-100,x1,y1);
		x1+=9;
		y1-=9;
	}

}
void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	
	abanico();
	glFlush();
};

void init(){
 glClearColor(1,1,1,0.7607);
}

int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Abanico");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}

