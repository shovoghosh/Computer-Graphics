#include <windows.h>
#include <GL/glut.h>
# define PI 3.142
#include<math.h>>

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.5f, 1.5f, 1.5f);

//Flag
glColor3ub(0, 106, 78);
  glBegin(GL_QUADS);
  glVertex2f(-.4,.2);
  glVertex2f(.6,.2);
  glVertex2f(.6,.8);
  glVertex2f(-.4,.8);
  glEnd();

  //stand

  glColor3ub(26, 37, 46);
  glBegin(GL_QUADS);
  glVertex2f(-.5,-.7);
  glVertex2f(-.4,-.7);
  glVertex2f(-.4,.8);
  glVertex2f(-.5,.8);
  glEnd();

   //stand

 glColor3ub(35, 61, 84);
  glBegin(GL_QUADS);
  glVertex2f(-.7,-.8);
  glVertex2f(-.2,-.8);
  glVertex2f(-.2,-.7);
  glVertex2f(-.7,-.7);
  glEnd();


  //circle

	int i;

	float x;
	float y;
	float z;
	float radius;

	int triangleAmount = 50; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * PI;


    glColor3ub(244, 42, 65);
    x=0.1f;  y=.5f;  radius =.2f;




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




    glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Bangladesh");
	//glutInitWindowSize(520, 520);
	glutReshapeWindow(600, 600);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
