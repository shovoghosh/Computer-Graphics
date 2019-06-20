#include <windows.h>
#include <GL/glut.h>
# define PI 3.14159265358979323846
#include<math.h>>

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);
	glColor3ub(230, 204, 104); //ground
	glVertex2f(-1,0);
	glVertex2f(-1,-.4);
	glVertex2f(1,-.4);
	glVertex2f(1,0);

	glColor3f(0.0f,0.9f,0.9f); //sky
	glVertex2f(-1,1);
	glVertex2f(-1,0);
	glVertex2f(1,0);
	glVertex2f(1,1);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 204, 104);
	glVertex2f(-1,-.4);
	glVertex2f(-1,-1);
	glVertex2f(1,-1);
	glVertex2f(1,-.4);
    glEnd();


    	int i;
    	GLfloat x,y,radius;
    	int triangleAmount = 20; //# of triangles used to draw circle
    	GLfloat twicePi = 2.0f * PI;



    glColor3f(1.0f, 1.0f, 0.0f);    //sun start
    x=0.0f;  y=.6f;  radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();  //sun end

    //sun glue

  glColor3f(1.0f, 1.0f, 0.0f);
  glBegin(GL_LINES);
  glVertex2f(-.2,.6);
  glVertex2f(.2,.6);
  glEnd();

  glColor3f(1.0f, 1.0f, 0.0f);
  glBegin(GL_LINES);
  glVertex2f(-.15,.4);
  glVertex2f(.15,.8);
  glEnd();

    glColor3f(1.0f, 1.0f, 0.0f);
  glBegin(GL_LINES);
  glVertex2f(-.15,.8);
  glVertex2f(.15,.4);
  glEnd();

    glColor3f(1.0f, 1.0f, 0.0f);
  glBegin(GL_LINES);
  glVertex2f(0,.8);
  glVertex2f(0,.4);
  glEnd();

    //sun glue end


//cloud start 1
    glColor3f(1.0f, 1.0f, 1.0f);  //cloud 1
    x=-.74f;  y=.54f;  radius =.042f;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();

     x=-.74f;  y=.48f;  radius =.042f; //cloud 2
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();

       x=-.79f;  y=.51f;  radius =.042f; //cloud 2 mid
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();

     x=-.68f;  y=.54f;  radius =.042f; //cloud 3
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();

 x=-.68f;  y=.48f;  radius =.042f; //cloud 4
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();

 x=-.63f;  y=.51f;  radius =.042f; //cloud 4 mid
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();

    //cloud end 1



    x=.74f;  y=.48f;  radius =.042f; //cloud 5
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();

     x=.68f;  y=.54f;  radius =.042f; //cloud 6
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();

       x=.63f;  y=.51f;  radius =.042f; //cloud 6 mid
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();




 x=.68f;  y=.48f;  radius =.042f; //cloud 7
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();

     x=.74f;  y=.54f;  radius =.042f; //cloud 8
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();

      x=.79f;  y=.51f;  radius =.042f; //cloud 8 mid
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();


//cloud end

//pyramid start

    glScalef(1.4,1.4,0.0);
    glTranslatef(.7, .15, 0);
    glBegin(GL_TRIANGLES); //pyramid 1
    glColor3ub(214, 126, 39);
    glVertex2f(-.5,-.5);
    glVertex2f(-.1,-.5);
    glVertex2f(-.3,-.1);

    glColor3ub(164, 111, 70);
    glVertex2f(-.55,-.4);
    glVertex2f(-.5,-.5);
    glVertex2f(-.3,-.1);

    glEnd();

    glLoadIdentity();


    glScalef(1.7,1.7,0.0);
    glTranslatef(.4, .21, 0);
    glBegin(GL_TRIANGLES); //pyramid 2
    glColor3ub(150, 59, 19);
    glVertex2f(-.5,-.5);
    glVertex2f(-.1,-.5);
    glVertex2f(-.3,-.1);

    glColor3ub(164, 111, 70);
    glVertex2f(-.55,-.4);
    glVertex2f(-.5,-.5);
    glVertex2f(-.3,-.1);

    glEnd();

    glLoadIdentity();

    glBegin(GL_TRIANGLES); //pyramid 3
    glColor3ub(150, 59, 19);
    glVertex2f(-.4,-.5);
    glVertex2f(0,-.5);
    glVertex2f(-.2,-.1);
    glEnd();

    glBegin(GL_TRIANGLES); //pyramid 4
    glColor3ub(164, 111, 70);
    glVertex2f(-.45,-.4);
    glVertex2f(-.4,-.5);
    glVertex2f(-.2,-.1);

    glEnd();

    glLoadIdentity();


    glScalef(1.4,1.4,0.0);
    glTranslatef(-.09, .14, 0);
    glBegin(GL_TRIANGLES); //pyramid 5
    glColor3ub(214, 126, 39);
    glVertex2f(-.5,-.5);
    glVertex2f(-.1,-.5);
    glVertex2f(-.3,-.1);

    glColor3ub(164, 111, 70);
    glVertex2f(-.55,-.4);
    glVertex2f(-.5,-.5);
    glVertex2f(-.3,-.1);

    glEnd();

    glLoadIdentity();


	glFlush();
}


    // Render now


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("pyramid view");
	//glutInitWindowSize(320, 320);
	glutReshapeWindow(800, 550);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
