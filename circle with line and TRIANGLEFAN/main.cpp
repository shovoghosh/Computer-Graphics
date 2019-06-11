//1-circle with lines and triangle fan start
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

  	int i;
	GLfloat x;
	GLfloat y;
	GLfloat z;
	GLfloat radius;
	GLfloat twicePi;

  //circle with lines

   x=.4f;  y=.4f;  radius =.2f;

	int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

  //circle with triangle fan

	int triangleAmount = 50; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;
    glColor3ub(2, 42, 65);
    x=-.5f;  y=-.5f;  radius =.2f;

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
	glutCreateWindow("All Shape");
	//glutInitWindowSize(520, 520);
	glutReshapeWindow(600, 600);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

  //1-circle with lines and trianglefan end

