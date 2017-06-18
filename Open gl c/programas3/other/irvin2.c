#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592


static int rotar = 0;
static int rotarx = 0;
static int rotary = 0;
static int rotarz = 0;

static float largo=1;
static float ancho=1;
static float alto=1;

static int camarax = 0;
static int camaray = 0;
static int camaraz = -900;

static int xt = 0;
static int yt = 0;
static int zt = 0;

void ejes();
	void reshape(int width, int height)
	{
        glClear(GL_COLOR_BUFFER_BIT);
        glMatrixMode(GL_PROJECTION);
        glViewport(0, 0,(GLsizei)width,(GLsizei)height);
        glLoadIdentity();
        glOrtho(-1000, 1000, -1000, 1000, -1000, 1000);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
}


    void figura()
	{

	float x1,y1,z1;
	float x2,y2,z2;
	float x3,z3;
	float x4,z4;
	float x5,z5;
    float A,A2;
    float t,t2;
    float y;

    y=-600;
    t=700;
    t2=350;
    y1=200;
    y2=450;
    A2=0.52;
	A2+=A=PI/3;

    glBegin(GL_TRIANGLES);

        glColor3f(0,0,1);
	    x1=cos(A)*(t);	z1=sin(A)*(t);
	    for (int i=0;i<6;i++)
	        {
                glColor3f(0,0,1);
                x2=x1;  z2=z1;
                glVertex3f(x1,y1,z1);
                A+=PI/3;

                x1=cos(A)*(t);	z1=sin(A)*(t);
                x3=x1;  z3=z1;
                glVertex3f(x1,y1,z1);
                glVertex3f(0,y,0);

                glColor3f(0,1,0);
                x4=cos(A2)*(t2);	z4=sin(A2)*(t2);
                glVertex3f(x2,y1,z2);
                glVertex3f(x3,y1,z3);
                glVertex3f(x4,y2,z4);

                A2+=PI/3;
            }

        A2=0.52;
        A2+=A=PI/3;
        x1=cos(A)*(t);	z1=sin(A)*(t);
        glColor3f(1,0,0);
        for(int i=0;i<6;i++)
        {
                A+=PI/3;
                x2=x1;
                z2=z1;

                x1=cos(A)*(t);
                z1=sin(A)*(t);

                x3=x1;
                z3=z1;
                glVertex3f(x1,y1,z1);

                x4=cos(A2)*(t2);
                z4=sin(A2)*(t2);
                glVertex3f(x4,y2,z4);
                A2+=PI/3;

                x5=cos(A2)*(t2);
                z5=sin(A2)*(t2);
                glVertex3f(x5,y2,z5);
        }

        A2=0.52;
        A2+=A=PI/3;

        x1=cos(A2)*(t2);
        z1=sin(A2)*(t2);

        glColor3f(0,0,0);

       for(int i=0;i<6;i++)
        {
            glVertex3f(x1,y2,z1);

            A2+=PI/3;
            x1=cos(A2)*(t2);
            z1=sin(A2)*(t2);

            glVertex3f(x1,y2,z1);
            glVertex3f(0,y2,0);
        }
    glEnd();
    }

/*void ejes()
{
	glLineWidth(4);
    int p=2000;

    glBegin(GL_LINES);

        glVertex3f(-p,0,0);
		glVertex3f(p,0,0);

        glVertex3f(0,-p,0);
		glVertex3f(0,p,0);

        glVertex3f(0,0,-p);
		glVertex3f(0,0,p);

	glEnd();

}*/
	void display()
	{
		//ejes();

		glPushMatrix();

		glPopMatrix();

		GLfloat qacolor1[] = {0.0, 0.0, 1.0, 1.0};
		GLfloat qacolor2[] = {0.0, 1, 0.0, 1.0};
		GLfloat qacolor3[] = {1.0, 0.0, 0.0, 1.0};

		glMaterialfv(GL_FRONT, GL_AMBIENT, qacolor1);
		glMaterialfv(GL_FRONT, GL_DIFFUSE, qacolor2);
	    glMaterialfv(GL_FRONT, GL_SPECULAR, qacolor3);
		glMaterialf(GL_FRONT, GL_SHININESS, 60.0);

		glPushMatrix();

        glGluLookAt(0,0,0,camarax,camaray,camaraz,0,1,0);
		glRotatef(rotar,rotarx,rotary,rotarz);
		glScalef (ancho,alto,largo);
		
		figura();
		glTranslatef (xt, yt, zt);

		glPopMatrix();

		glMatrixMode(GL_PROJECTION);

		glPopMatrix();

		glutSwapBuffers();
		glFlush();

	}
void constante_en_teclado()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glutPostRedisplay();
	//ejes();
}
void teclado(unsigned char key,int x,int y)
{
	switch(key)
	{
		case 27:
			exit(0);
		break;
		case 'a':
			rotary=1;
			rotarx=0;
            rotarz=0;
			rotar = (rotar - 10)%360;
			constante_en_teclado();
		break;
		case 'd':
			rotary=1;
			rotarx=0;
            rotarz=0;
			rotar = (rotar + 10)%360;
			constante_en_teclado();
		break;

		case 'w':
			rotarx=1;
            rotary=0;
            rotarz=0;
			rotar = (rotar - 10)%360;
			constante_en_teclado();
		break;
        case 't':
			rotarz=1;
            rotary=0;
            rotarx=0;
			rotar = (rotar - 10)%360;
			constante_en_teclado();
		break;
        case 'm':
			rotarx=0;
            rotary=0;
            rotarz=1;
			rotar = (rotar - 10)%360;
			constante_en_teclado();
		break;
		case 's':
			rotarx=1;
			rotary=0;
            rotarz=0;
			rotar = (rotar + 10)%360;
			constante_en_teclado();
		break;
		case 'W':
			camaraz+=1;
			camaray-=1;
			camarax+=1;
			//gluLookAt(0,0,0,camarax,camaray,camaraz,0,1,0);
			constante_en_teclado();
		break;
		case 'S':
			camaraz-=1;
			camaray+=1;
			camarax-=1;
			//gluLookAt(0,0,0,camarax,camaray,camaraz,0,1,0);
			constante_en_teclado();
		break;
		case 'C':case 'c':
			rotar=rotarx=rotary=rotarz=0;
			camarax=camaray=0;
			camaraz=-900;
			largo=alto=ancho=1;

			//gluLookAt(0,0,0,camarax,camaray,camaraz,0,1,0);
			constante_en_teclado();
		break;
		case '1':
			ancho+=0.1;
			constante_en_teclado();
		break;
		case '2':
			alto+=0.1;
			constante_en_teclado();
		break;
		case '3':
			largo+=0.1;
			constante_en_teclado();
		break;
		case '4':
			ancho-=0.1;
			constante_en_teclado();
		break;
		case '5':
			alto-=0.1;
			constante_en_teclado();
		break;
		case '6':
			largo-=0.1;
			constante_en_teclado();
		break;
		case '7':
			largo=alto=ancho+=0.1;
			constante_en_teclado();
		break;
		case '8':
			largo=alto=ancho-=0.1;
			constante_en_teclado();
		break;
		case 'x':
            glTranslatef (20, 0, 0);
			constante_en_teclado();
		break;
		case 'X':
            glTranslatef (-20, 0, 0);
			constante_en_teclado();
		break;
		case 'Y':
            glTranslatef (0, -20, 0);
			constante_en_teclado();
		break;
		case 'y':
			glTranslatef (0, 20, 0);
			constante_en_teclado();
		break;
		case 'z':
            glTranslatef (0, 0, 20);
			constante_en_teclado();
		break;
		case 'Z':
            glTranslatef (0,0, -20);
			constante_en_teclado();
		break;
		default:
		break;
	}
}


	void init()
	{
        //color del fondo
		glClearColor(1,1,1,1);

        // Lighting set up
		glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, GL_TRUE);
		glEnable(GL_LIGHTING);
		glEnable(GL_LIGHT0);

		// Set lighting intensity and color
		GLfloat qaAmbientLight[]	= {0.2, 0.2, 0.2, 0.5};
		GLfloat qaDiffuseLight[]	= {0.0, 1, 0.0, 0.5};
		GLfloat qaSpecularLight[]	= {0.1, 0, 0, 0.5};

		glLightfv(GL_LIGHT0, GL_AMBIENT, qaAmbientLight);
		glLightfv(GL_LIGHT0, GL_DIFFUSE, qaDiffuseLight);
		glLightfv(GL_LIGHT0, GL_SPECULAR, qaSpecularLight);

		// Set the light position
		GLfloat qaLightPosition[]	= {1, 1, 1.0, 1.0};
		glLightfv(GL_LIGHT0, GL_POSITION, qaLightPosition);
	}


	int main(int argc, char **argv)
	{
		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
		glutInitWindowPosition(0, 0);
		glutInitWindowSize(800, 800);
		glutCreateWindow("DIAMANTE");
		init();
		glutDisplayFunc(display);
		glutReshapeFunc(reshape);
	    glutKeyboardFunc(teclado);
        glutMainLoop();
		return 0;
	}
