//shohid minar start

 #include <windows.h>
#include <GL/glut.h>
# define PI 3.142
#include<math.h>>

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.5f, 1.5f, 1.5f);



  	int i;
	GLfloat x;
	GLfloat y;
	GLfloat z;
	GLfloat radius;
	GLfloat twicePi;



  //circle with triangle fan

	int triangleAmount = 50; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;
    glColor3ub(254, 0, 0);
    x=.1f;  y=-.1f;  radius =.35f;

	glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();



   //shohid minar start

//stand 1

  glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2f(-.85,-.65);
  glVertex2f(.85,-.65);
  glVertex2f(.85,-.55);
  glVertex2f(-.85,-.55);
  glEnd();



//stand 2

  glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2f(-.8,-.55);
  glVertex2f(.8,-.55);
  glVertex2f(.8,-.5);
  glVertex2f(-.8,-.5);
  glEnd();


  //left 1

    glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2f(-.7,-.5);
  glVertex2f(-.5,-.5);
  glVertex2f(-.4,0);
  glVertex2f(-.55,.2);
  glEnd();

  //left 2

    glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2f(-.4,-.5);
  glVertex2f(-.25,-.5);
  glVertex2f(-.2,.1);
  glVertex2f(-.3,.15);
  glEnd();

  //main

    glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2f(-.1,-.5);
  glVertex2f(.3,-.5);
  glVertex2f(.3,.05);
  glVertex2f(-.1,.2);
  glEnd();

     glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2f(-.1,.2);
  glVertex2f(.3,.05);
  glVertex2f(.4,.25);
  glVertex2f(.1,.6);
  glEnd();


   //right 1
        glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2f(.4,-.5);
  glVertex2f(.55,-.5);
  glVertex2f(.55,-.05);
  glVertex2f(.4,-.1);
  glEnd();



    //right 2

    glColor3f(0,0,0);
  glBegin(GL_QUADS);
  glVertex2f(.65,-.5);
  glVertex2f(.75,-.5);
  glVertex2f(.75,-.2);
  glVertex2f(.65,-.15);
  glEnd();




  //birds

 //1
   glColor3f(0,0,0);
  glBegin(GL_TRIANGLES);
  glVertex2f(.68,.2);
  glVertex2f(.78,.2);
  glVertex2f(.7,.23);
   glEnd();

      glColor3f(0,0,0);
  glBegin(GL_TRIANGLES);
  glVertex2f(.71,.22);
  glVertex2f(.75,.21);
  glVertex2f(.8,.3);
   glEnd();

      glColor3f(0,0,0);
  glBegin(GL_TRIANGLES);
  glVertex2f(.7,.2);
  glVertex2f(.71,.21);
  glVertex2f(.65,.3);
   glEnd();


    //2
   glColor3f(0,0,0);
  glBegin(GL_TRIANGLES);
  glVertex2f(.78,.3);
  glVertex2f(.88,.3);
  glVertex2f(.8,.33);
   glEnd();

      glColor3f(0,0,0);
  glBegin(GL_TRIANGLES);
  glVertex2f(.81,.32);
  glVertex2f(.85,.31);
  glVertex2f(.9,.4);
   glEnd();

      glColor3f(0,0,0);
  glBegin(GL_TRIANGLES);
  glVertex2f(.8,.3);
  glVertex2f(.81,.31);
  glVertex2f(.75,.4);
   glEnd();



  glFlush();
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Shohid Minar");
	//glutInitWindowSize(520, 520);
	glutReshapeWindow(600, 500);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}



 //shohid minar end






