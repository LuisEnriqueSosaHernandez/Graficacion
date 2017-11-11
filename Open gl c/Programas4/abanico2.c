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


void linea(int x1, int y1, int x2, int y2){//metodo mas avanzado para dibujar lineas >?:v
	glBegin(GL_LINES);
		glVertex3f(x1,y1,0.0);
		glVertex3f(x2,y2,0.0);
	glEnd();
}

void linea_directo(int x1, int y1, int x2, int y2){ //metodo que me robe del pdf que me dio primavera
int i;
float m; 
int xi,yi,xf,yf;
if (x1>x2) {
	xi=x2; yi=y2; xf=x1; yf=y1;
	}
else {
	xi=x1; yi=y1; xf=x2; yf=y2;
	};
m=(float)(yf-yi)/(xf-xi);
glBegin(GL_POINTS);
for(i=xi;i<=xf;i++)
{
glVertex3f(i,yi+round(m*(i-xi)),0);
if(i%10==0){
	linea(-100,-100,i,yi+round(m*(i-xi)));//uso el metodo de la curvatura de linea directo para hacerle la curvatura a mi abanico
	//brenda te amo :c , ojala conseguir tu amor fuera tan facil como los programas de primavera
}
}
glEnd();
}

void abanico(){//with este metodo dibujo el pseudo abanico de arriba y el restante del cuarto cuadrante del abanico grande
	int y,y2=-100;
	for(y=0;y<100;y+=10){
		linea(-100,100,100,y);
		linea(-100,-100,100,y2);
		y2+=10;
	}
	

}
void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.97f, 0.02f, 0.92f);	//cambio el color a un morado que me recuerda a brenda :c
	linea_directo(-100,100,100,0);//dibujo el abanico que tiene la curvatura
	abanico();//dibujo el resto del abanico y el de arriba
	glFlush();
};

void init(){
 glClearColor(1,1,1,0.7607);//cambie el color de fondo por que si
}

int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Abanico");//le puse nombre de abanico 
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}

