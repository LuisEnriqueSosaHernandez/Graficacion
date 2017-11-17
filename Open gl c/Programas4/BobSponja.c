#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
//variables globales para los movimientos sobre los ejes, ya que el display se recarga con cada interaccion , es necesario tenerlas 
//aparte, si se declaran dentro del metodo display, supongo que las variables se reiniciarian a sus valores inciales
//habria que hacer la prueba , o preguntarle a solecito, por que la neta me da hueva probarlo
float scale_x=1.0,scale_y=1.0,scale_z=1.0,rotate_x=0.0,rotate_y=0.0,rotate_z=0.0,translate_x=0.0,translate_y=0.0,translate_z=0.0;

void reshape(int width, int height){
 glViewport(0, 0, width, height);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glOrtho(-200, 200, -200, 200, -200, 200);
 glMatrixMode(GL_MODELVIEW);
}
void bob_esponja(){//Metemos todo el dibujo en un metodo para que solecito no nos vea feo
glLineWidth(5);
	//Ojos
	glColor3f(0.439216,0.858824,0.858824);
	glBegin(GL_QUADS);
	glVertex3f(20,50,0);
	glVertex3f(20,60,0);
	glVertex3f(30,60,0);
	glVertex3f(30,50,0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(-20,60,0);
	glVertex3f(-10,60,0);
	glVertex3f(-10,50,0);
	glVertex3f(-20,50,0);
	glEnd();
	
	//Boca
	glColor3f(0,0,0);
	glBegin(GL_QUADS);
	glVertex3f(-20,20,0);
	glVertex3f(-20,30,0);
	glVertex3f(-10,30,0);
	glVertex3f(-10,20,0);
	glEnd();
	glColor3f(0,0,0);
	glBegin(GL_QUADS);
	glVertex3f(-10,10,0);
	glVertex3f(-10,20,0);
	glVertex3f(20,20,0);
	glVertex3f(20,10,0);
	glEnd();
	glColor3f(0,0,0);
	glBegin(GL_QUADS);
	glVertex3f(20,20,0);
	glVertex3f(20,30,0);
	glVertex3f(30,30,0);
	glVertex3f(30,20,0);
	glEnd();
	//Corbata
	glColor3f(1,0,0);
	glBegin(GL_QUADS);
	glVertex3f(0,0,0);
	glVertex3f(10,0,0);
	glVertex3f(10,-20,0);
	glVertex3f(0,-20,0);
	glEnd();
	//Zapatos
	glColor3f(0.36,0.25,0.20);
	glBegin(GL_QUADS);
	glVertex3f(-30,-70,0);
	glVertex3f(0,-70,0);
	glVertex3f(0,-80,0);
	glVertex3f(-30,-80,0);
	glEnd();
	glColor3f(0.36,0.25,0.2);
	glBegin(GL_QUADS);
	glVertex3f(10,-70,0);
	glVertex3f(40,-70,0);
	glVertex3f(40,-80,0);
	glVertex3f(10,-80,0);
	glEnd();
	//Piernas
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(-20,-50,0);
	glVertex3f(0,-50,0);
	glVertex3f(0,-70,0);
	glVertex3f(-20,-70,0);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(10,-50,0);
	glVertex3f(30,-50,0);
	glVertex3f(30,-70,0);
	glVertex3f(10,-70,0);
	glEnd();
	//Brazos
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(-50,-10,0);
	glVertex3f(-40,-10,0);
	glVertex3f(-40,-40,0);
	glVertex3f(-50,-40,0);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(50,-10,0);
	glVertex3f(60,-10,0);
	glVertex3f(60,-40,0);
	glVertex3f(50,-40,0);
	glEnd();
	//Pantalon
	glColor3f(0.36,0.25,0.2);
	glBegin(GL_QUADS);
	glVertex3f(-40,-10,0);
	glVertex3f(0,-10,0);
	glVertex3f(0,-40,0);
	glVertex3f(-40,-40,0);
	glEnd();
	glColor3f(0.36,0.25,0.2);
	glBegin(GL_QUADS);
	glVertex3f(0,-20,0);
	glVertex3f(10,-20,0);
	glVertex3f(10,-40,0);
	glVertex3f(0,-40,0);
	glEnd();
	glColor3f(0.36,0.25,0.2);
	glBegin(GL_QUADS);
	glVertex3f(10,-10,0);
	glVertex3f(50,-10,0);
	glVertex3f(50,-40,0);
	glVertex3f(10,-40,0);
	glEnd();
	glColor3f(0.36,0.25,0.2);
	glBegin(GL_QUADS);
	glVertex3f(10,-40,0);
	glVertex3f(30,-40,0);
	glVertex3f(30,-50,0);
	glVertex3f(10,-50,0);
	glEnd();
	glColor3f(0.36,0.25,0.2);
	glBegin(GL_QUADS);
	glVertex3f(-20,-40,0);
	glVertex3f(0,-40,0);
	glVertex3f(0,-50,0);
	glVertex3f(-20,-50,0);
	glEnd();
	//Cara
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(-40,10,0);
	glVertex3f(50,10,0);
	glVertex3f(50,0,0);
	glVertex3f(-40,0,0);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(-40,20,0);
	glVertex3f(-10,20,0);
	glVertex3f(-10,10,0);
	glVertex3f(-40,10,0);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(20,20,0);
	glVertex3f(50,20,0);
	glVertex3f(50,10,0);
	glVertex3f(20,10,0);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(-10,30,0);
	glVertex3f(20,30,0);
	glVertex3f(20,20,0);
	glVertex3f(-10,20,0);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(-40,40,0);
	glVertex3f(50,40,0);
	glVertex3f(50,30,0);
	glVertex3f(-40,30,0);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(-40,80,0);
	glVertex3f(50,80,0);
	glVertex3f(50,70,0);
	glVertex3f(-40,70,0);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(0,70,0);
	glVertex3f(10,70,0);
	glVertex3f(10,40,0);
	glVertex3f(0,40,0);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(-40,70,0);
	glVertex3f(-30,70,0);
	glVertex3f(-30,40,0);
	glVertex3f(-40,40,0);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(-40,30,0);
	glVertex3f(-20,30,0);
	glVertex3f(-20,20,0);
	glVertex3f(-40,20,0);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(40,70,0);
	glVertex3f(50,70,0);
	glVertex3f(50,30,0);
	glVertex3f(40,30,0);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex3f(30,30,0);
	glVertex3f(50,30,0);
	glVertex3f(50,20,0);
	glVertex3f(30,20,0);
	glEnd();
}
void display(void)
{ 
	glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();//Cargamos una matriz de identidad para que solo afecte a lo que este despues de ella , por si tenemos un
	//dibujo despues de otro, se podria hacer dentro del mismo metodo, para que no se enoje solecito
	//metodos de movimiento incluido los del eje z , aunque no funcionan del todo por que el dibujo no esta en 3d 
	glScalef( scale_x, scale_y, scale_z ); 
	glRotatef( rotate_x, 1.0, 0.0, 0.0 );
	glRotatef( rotate_y, 0.0, 1.0, 0.0 );
	glRotatef( rotate_z, 0.0, 0.0, 1.0 );
	glTranslatef(translate_x,translate_y,translate_z);
	bob_esponja();
glFlush();
glutSwapBuffers();//doble buffer para que no se vea lageado el dibujito
};
//ponemos el metodo que escucha a las teclas , este metodo es el ficticio que me dio solecito , tengo uno mas pro, pero es con
//codigo ascii y solecito se enoja
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
  case 'p': //Tecla de reinicio 
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
int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);//agregamos el doble buffer 
	glutInitWindowPosition(200, 200);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Bob Esponja :)");
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);//agregegamos el metodo que escuchara a las teclas
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
//cafe (0.647059,0.164706,0.164706)
//azul (0.74902,0.847059,0.847059)
