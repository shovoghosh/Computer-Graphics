

#include <windows.h>
#include <GL/glut.h>
# define PI 3.142
#include<math.h>>

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.5f, 1.5f, 1.5f);


  //x Axis
  glColor3f(1,0,0);
  glBegin(GL_LINES);
  glVertex2f(1,0);
  glVertex2f(-1,0);
  glEnd();
  //Y Axis
  glColor3f(0,0,1);
  glBegin(GL_LINES);
  glVertex2f(0,1);
  glVertex2f(0,-1);
  glEnd();



  //for square
  glColor3f(1,0,0);
  glBegin(GL_QUADS);
  glVertex2f(.3,.3);
  glVertex2f(.7,.3);
  glVertex2f(.7,.7);
  glVertex2f(.3,.7);
  glEnd();

 //for triangle
   glColor3f(0,0,1);
  glBegin(GL_TRIANGLES);
  glVertex2f(-.3,.3);
  glVertex2f(-.5,.7);
  glVertex2f(-.7,.3);
   glEnd();

   //for triangle with lines
   /*
   glColor3f(1,0,0);
  glBegin(GL_LINES);
  glVertex2f(.5,-.6);
  glVertex2f(.7,-.3);
  glEnd();
  glColor3f(1,0,0);
  glBegin(GL_LINES);
  glVertex2f(.7,-.3);
  glVertex2f(.3,-.3);
  glEnd();
  glColor3f(1,0,0);
  glBegin(GL_LINES);
  glVertex2f(.3,-.3);
  glVertex2f(.5,-.6);
  glEnd();*/

  //circle

	int i;

	float x;
	float y;
	float z;
	float radius;

	int triangleAmount = 50; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * PI;


    glColor3ub(2, 42, 65);
    x=0.5f;  y=-.5f;  radius =.2f;




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




  //for polygon
  glColor3f(1,0,1);
  glBegin(GL_POLYGON);
  glVertex2f(-.3,-.8);
  glVertex2f(-.2,-.6);
  glVertex2f(-.2,-.4);
  glVertex2f(-.3,-.2);
  glVertex2f(-.6,-.2);
  glVertex2f(-.7,-.4);
  glVertex2f(-.7,-.6);
  glVertex2f(-.6,-.8);
  glEnd();


  glFlush();
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("All Shape");
	//glutInitWindowSize(520, 520);
	glutReshapeWindow(600, 600);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}


