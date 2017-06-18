#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#define GL_GLEXT_PROTOTYPES
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
 
// ----------------------------------------------------------
// Prototipos de función
// ----------------------------------------------------------
void display();
void specialKeys();
void reshape();
 
// ----------------------------------------------------------
// Variables globales
// ----------------------------------------------------------
double rotate_y=0; 
double rotate_x=0;
double rotate_z=0;

double translate_y=0; 
double translate_x=0;
double translate_z=0;

//funcion reshape
void reshape(int width, int height)
	{
		glViewport(0, 0, width, height);
		glMatrixMode(GL_PROJECTION);
		glClear(GL_COLOR_BUFFER_BIT);
		glColor3f(1,1,1);
		
		glLineWidth(1);
		glBegin(GL_LINES);
		glVertex3f(-100,0,0);
		glVertex3f(100,0,0);
		glVertex3f(0,-100,0);
		glVertex3f(0,100,0);
		glEnd();  
    
		glLoadIdentity();
		glOrtho(-100, 100, -100, 100, -100, 100);
		glMatrixMode(GL_MODELVIEW);
		
		glEnd();
		glFlush();
	}
 
// ----------------------------------------------------------
// Función de retrollamada “display()”
// ----------------------------------------------------------
void display(){
 
  //  Borrar pantalla y Z-buffer
  glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
 
  // Resetear transformaciones 
  glLoadIdentity(); 
  // Otras transformaciones
  // glTranslatef( 0.1, 0.0, 0.0 );      // No incluido
  // glRotatef( 180, 0.0, 1.0, 0.0 );    // No incluido
  
  //Transladar
  glTranslatef(translate_x,0,0);
  glTranslatef(0,translate_y,0);
  glTranslatef(0,0,translate_z);
  // Rotar cuando el usuario cambie “rotate_x” y “rotate_y” AND rotate pero no funciona el eje z >c
  glRotatef( rotate_x, 1.0, 0.0, 0.0 );
  glRotatef( rotate_y, 0.0, 1.0, 0.0 );
  glRotatef( rotate_z, 0.0, 0.0, 1.0 );
 
  // Otras transformaciones
   //glScalef( 2.0, 2.0, 0.0 );          // lo hice 2 veces mas grande pero no agarro
 
  //LADO FRONTAL: rojo
  
  float out=(1.0f/255)*207;
	float out2=(1.0f/255)*27;
	float out3=(1.0f/255)*27;
	 glColor3f(out,out2,out3);
  
  glBegin(GL_POLYGON); 
  glVertex3f(  30, -30, -30 );     
  glVertex3f(  30,  30, -30 );      
  glVertex3f( -30,  30, -30 );       
  glVertex3f( -30, -30, -30 );      
  glEnd();
 
  // LADO TRASERO: lado dorado
  
	out=(1.0f/255)*152;
	out2=(1.0f/255)*147;
	out3=(1.0f/255)*25;
	 glColor3f(out,out2,out3);
  
  glBegin(GL_POLYGON);
  glVertex3f(  30, -30, 30 );
  glVertex3f(  30,  30, 30 );
  glVertex3f( -30,  30, 30 );
  glVertex3f( -30, -30, 30 );
  glEnd();
 
  // LADO DERECHO: lado morado
  
	out=(1.0f/255)*119;
	out2=(1.0f/255)*25;
	out3=(1.0f/255)*152;
	 glColor3f(out,out2,out3);
  
  glBegin(GL_POLYGON);
  glVertex3f( 30, -30, -30 );
  glVertex3f( 30,  30, -30 );
  glVertex3f( 30,  30,  30 );
  glVertex3f( 30, -30,  30 );
  glEnd();
 
  // LADO IZQUIERDO: lado verde
  
  out=(1.0f/255)*90;
	out2=(1.0f/255)*220;
	out3=(1.0f/255)*41;
	 glColor3f(out,out2,out3);
  
  glBegin(GL_POLYGON);
  glVertex3f( -30, -30,  30 );
  glVertex3f( -30,  30,  30 );
  glVertex3f( -30,  30, -30 );
  glVertex3f( -30, -30, -30 );
  glEnd();
 
  // LADO SUPERIOR: lado cafe
  
  out=(1.0f/255)*197;
	out2=(1.0f/255)*115;
	out3=(1.0f/255)*80;
	 glColor3f(out,out2,out3);
  
  glBegin(GL_POLYGON);
  glVertex3f(  30,  30,  30 );
  glVertex3f(  30,  30, -30 );
  glVertex3f( -30,  30, -30 );
  glVertex3f( -30,  30,  30 );
  glEnd();
 
  // LADO INFERIOR: lado azul agua
  
  out=(1.0f/255)*80;
	out2=(1.0f/255)*194;
	out3=(1.0f/255)*197;
	 glColor3f(out,out2,out3);

  glBegin(GL_POLYGON);
  glVertex3f(  30, -30, -30 );
  glVertex3f(  30, -30,  30 );
  glVertex3f( -30, -30,  30 );
  glVertex3f( -30, -30, -30 );
  glEnd();
 
  glFlush();
  glutSwapBuffers();
 
}
 
// ----------------------------------------------------------
// Función de retrollamada “specialKeys()” 
// ----------------------------------------------------------
void specialKeys( int key, int x, int y ) {
 
  //  Flecha derecha: aumentar rotación 5 grados
  if (key == GLUT_KEY_RIGHT){
    rotate_y += 5;
    translate_y+=5;
 }
  //  Flecha izquierda: disminuir rotación 5 grados
  else if (key == GLUT_KEY_LEFT){
    rotate_y -= 5;
    translate_y-=5;
 }
  else if (key == GLUT_KEY_UP){
    rotate_x += 5;
    translate_x+=5;
 }
  else if (key == GLUT_KEY_DOWN){
    rotate_x -= 5;
    translate_x-=5;
   } 
  else if (key == 116 ){//alt izquierdo
    rotate_z += 5;
    translate_z+=5;
}
  else if (key == 114){//control izquierdo
    rotate_z -= 5; 
    translate_z-=5;   
 }
 //printf("%d ",key);
  //  Solicitar actualización de visualización
  glutPostRedisplay();
 
}

void init()
	{
		glClearColor(0,0,0,0);
	}
 
// ----------------------------------------------------------
// Función “main()”
// ----------------------------------------------------------
int main(int argc, char* argv[]){
 
  //  Inicializar los parámetros GLUT y de usuario proceso
  glutInit(&argc,argv);
 
  //  Solicitar ventana con color real y doble buffer con Z-buffer 
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
  
  glutInitWindowPosition(200, 200);
		glutInitWindowSize(500, 500);
 
  // Crear ventana
  glutCreateWindow("Cubito rotador");
  
  init();
  //  Habilitar la prueba de profundidad de Z-buffer
  glEnable(GL_DEPTH_TEST);
 
  // Funciones de retrollamada
  glutDisplayFunc(display);
  glutSpecialFunc(specialKeys);
  glutReshapeFunc(reshape);
  //  Pasar el control de eventos a GLUT
  glutMainLoop();
 
  //  Regresar al sistema operativo
  return 0;
 
}
