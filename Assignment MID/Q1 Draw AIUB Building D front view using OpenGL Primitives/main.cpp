//Shovo Ghosh
//15-30048-2

#include <windows.h>
#include <GL/glut.h>
# define PI 3.14159265358979323846
#include<math.h>>


void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);


	glBegin(GL_QUADS);
	glColor3ub(28, 191, 208);  //sky
	glVertex2f(-1,1);
	glVertex2f(-1,-1);
	glVertex2f(1,-1);
	glVertex2f(1,1);
    glEnd();

//green field

	glBegin(GL_QUADS);
	glColor3ub(139, 193, 109);
	glVertex2f(-1,-.7);
	glVertex2f(-1,-1);
	glVertex2f(1,-1);
	glVertex2f(1,-.7);
    glEnd();

//road
    glBegin(GL_QUADS);
	glColor3ub(100, 104, 90);
	glVertex2f(-1,-.74);
	glVertex2f(-1,-.7);
	glVertex2f(1,-.7);
	glVertex2f(1,-.74);
    glEnd();

//building start

//last

    glBegin(GL_QUADS);
	glColor3ub(164, 106, 89);
	glVertex2f(-1,-.7);
	glVertex2f(1,-.7);
    glVertex2f(1,-.58);
	glVertex2f(-1,-.58);
    glEnd();

    //middle
    glBegin(GL_QUADS);
	glColor3ub(50, 58, 79);
	glVertex2f(-.8,-.58);
	glVertex2f(.7,-.58);
    glVertex2f(.7,.6);
	glVertex2f(-.8,.6);
    glEnd();

    //middle 1

    glBegin(GL_QUADS);
	glColor3ub(212, 144, 121);
	glVertex2f(-.8,-.58);
	glVertex2f(-.2,-.58);
    glVertex2f(-.2,.6);
	glVertex2f(-.8,.6);
    glEnd();

    //middle 3

    glBegin(GL_QUADS);
	glColor3ub(52, 58, 82);
	glVertex2f(.1,-.58);
	glVertex2f(.7,-.58);
    glVertex2f(.7,.6);
	glVertex2f(.1,.6);
    glEnd();

//3rd middle 1 windows

    //middle 1 window 1

    glBegin(GL_QUADS);
	glColor3ub(50, 58, 79);
	glVertex2f(-.75,-.5);
	glVertex2f(-.68,-.5);
    glVertex2f(-.68,-.3);
	glVertex2f(-.75,-.3);
    glEnd();

    //border
    glBegin(GL_QUADS);
	glColor3ub(247, 210, 180);
	glVertex2f(-.75,-.39);
	glVertex2f(-.68,-.39);
    glVertex2f(-.68,-.4);
	glVertex2f(-.75,-.4);
    glEnd();

    //middle 1 window 2

    glBegin(GL_QUADS);
	glColor3ub(50, 58, 79);
	glVertex2f(-.55,-.5);
	glVertex2f(-.48,-.5);
    glVertex2f(-.48,-.3);
	glVertex2f(-.55,-.3);
    glEnd();

    //border

     glBegin(GL_QUADS);
	glColor3ub(247, 210, 180);
	glVertex2f(-.55,-.39);
	glVertex2f(-.48,-.39);
    glVertex2f(-.48,-.4);
	glVertex2f(-.55,-.4);
    glEnd();

    //middle 1 window 3

    glBegin(GL_QUADS);
	glColor3ub(50, 58, 79);
	glVertex2f(-.35,-.5);
	glVertex2f(-.28,-.5);
    glVertex2f(-.28,-.3);
	glVertex2f(-.35,-.3);
    glEnd();

//2nd middle 1 windows

    //middle 1 window 1

    glBegin(GL_QUADS);
	glColor3ub(50, 58, 79);
	glVertex2f(-.75,-.25);
	glVertex2f(-.68,-.25);
    glVertex2f(-.68,-.05);
	glVertex2f(-.75,-.05);
    glEnd();

    //border
    glBegin(GL_QUADS);
	glColor3ub(247, 210, 180);
	glVertex2f(-.75,-.15);
	glVertex2f(-.68,-.15);
    glVertex2f(-.68,-.141);
	glVertex2f(-.75,-.141);
    glEnd();

    //middle 1 window 2

    glBegin(GL_QUADS);
	glColor3ub(50, 58, 79);
	glVertex2f(-.55,-.25);
	glVertex2f(-.48,-.25);
    glVertex2f(-.48,-.05);
	glVertex2f(-.55,-.05);
    glEnd();

    //border
    glBegin(GL_QUADS);
	glColor3ub(247, 210, 180);
	glVertex2f(-.55,-.15);
	glVertex2f(-.48,-.15);
    glVertex2f(-.48,-.141);
	glVertex2f(-.55,-.141);
    glEnd();

    //middle 1 window 3

    glBegin(GL_QUADS);
	glColor3ub(50, 58, 79);
	glVertex2f(-.35,-.25);
	glVertex2f(-.28,-.25);
    glVertex2f(-.28,-.05);
	glVertex2f(-.35,-.05);
    glEnd();

        //border
    glBegin(GL_QUADS);
	glColor3ub(247, 210, 180);
	glVertex2f(-.35,-.15);
	glVertex2f(-.28,-.15);
    glVertex2f(-.28,-.141);
	glVertex2f(-.35,-.141);
    glEnd();

    //1st middle 1 windows

      //middle 1 window 1

    glBegin(GL_QUADS);
	glColor3ub(50, 58, 79);
	glVertex2f(-.75,0);
	glVertex2f(-.68,0);
    glVertex2f(-.68,.2);
	glVertex2f(-.75,.2);
    glEnd();

        //border
    glBegin(GL_QUADS);
	glColor3ub(247, 210, 180);
	glVertex2f(-.75,.09);
	glVertex2f(-.68,.09);
    glVertex2f(-.68,.098);
	glVertex2f(-.75,.098);
    glEnd();

    //middle 1 window 2

    glBegin(GL_QUADS);
	glColor3ub(50, 58, 79);
	glVertex2f(-.55,0);
	glVertex2f(-.48,0);
    glVertex2f(-.48,.2);
	glVertex2f(-.55,.2);
    glEnd();

    //border
    glBegin(GL_QUADS);
	glColor3ub(247, 210, 180);
	glVertex2f(-.55,.09);
	glVertex2f(-.48,.09);
    glVertex2f(-.48,.098);
	glVertex2f(-.55,.098);
    glEnd();

    //middle 1 window 3

    glBegin(GL_QUADS);
	glColor3ub(50, 58, 79);
	glVertex2f(-.35,0);
	glVertex2f(-.28,0);
    glVertex2f(-.28,.2);
	glVertex2f(-.35,.2);
    glEnd();

    //border
    glBegin(GL_QUADS);
	glColor3ub(247, 210, 180);
	glVertex2f(-.35,.09);
	glVertex2f(-.28,.09);
    glVertex2f(-.28,.098);
	glVertex2f(-.35,.098);
    glEnd();

//0 middle 1 windows

    //middle 1 window 1

    glBegin(GL_QUADS);
	glColor3ub(50, 58, 79);
	glVertex2f(-.75,.25);
	glVertex2f(-.68,.25);
    glVertex2f(-.68,.45);
	glVertex2f(-.75,.45);
    glEnd();

    //border
    glBegin(GL_QUADS);
	glColor3ub(247, 210, 180);
	glVertex2f(-.75,.34);
	glVertex2f(-.68,.34);
    glVertex2f(-.68,.35);
	glVertex2f(-.75,.35);
    glEnd();

    //middle 1 window 2

    glBegin(GL_QUADS);
	glColor3ub(50, 58, 79);
	glVertex2f(-.55,.25);
	glVertex2f(-.48,.25);
    glVertex2f(-.48,.45);
	glVertex2f(-.55,.45);
    glEnd();

    //border
    glBegin(GL_QUADS);
	glColor3ub(247, 210, 180);
	glVertex2f(-.55,.34);
	glVertex2f(-.48,.34);
    glVertex2f(-.48,.35);
	glVertex2f(-.55,.35);
    glEnd();

    //middle 1 window 3

    glBegin(GL_QUADS);
	glColor3ub(50, 58, 79);
	glVertex2f(-.35,.25);
	glVertex2f(-.28,.25);
    glVertex2f(-.28,.45);
	glVertex2f(-.35,.45);
    glEnd();

        //border
    glBegin(GL_QUADS);
	glColor3ub(247, 210, 180);
	glVertex2f(-.35,.34);
	glVertex2f(-.28,.34);
    glVertex2f(-.28,.35);
	glVertex2f(-.35,.35);
    glEnd();

//window end

//middle 2

    glBegin(GL_QUADS);
	glColor3ub(226, 187, 124);
	glVertex2f(-.105,-.58);
	glVertex2f(-.1,-.58);
    glVertex2f(-.1,.6);
	glVertex2f(-.105,.6);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(226, 187, 124);
	glVertex2f(0,-.58);
	glVertex2f(.006,-.58);
    glVertex2f(.006,.6);
	glVertex2f(0,.6);
    glEnd();

//line 1

    glBegin(GL_QUADS);
	glColor3ub(226, 187, 124);
	glVertex2f(-.2,-.25);
	glVertex2f(.1,-.25);
    glVertex2f(.1,-.259);
	glVertex2f(-.2,-.259);
    glEnd();

//line 2

    glBegin(GL_QUADS);
	glColor3ub(226, 187, 124);
	glVertex2f(-.2,0);
	glVertex2f(.1,0);
    glVertex2f(.1,.009);
	glVertex2f(-.2,.009);
    glEnd();

    //line 3

    glBegin(GL_QUADS);
	glColor3ub(226, 187, 124);
	glVertex2f(-.2,.25);
	glVertex2f(.1,.25);
    glVertex2f(.1,.259);
	glVertex2f(-.2,.259);
    glEnd();

    //3rd side ..line

    //vertical lines
    //1

    glBegin(GL_QUADS);
	glColor3ub(204, 149, 119);
	glVertex2f(.1,-.5);
	glVertex2f(.7,-.5);
    glVertex2f(.7,-.482);
	glVertex2f(.1,-.482);
    glEnd();

      //2

    glBegin(GL_QUADS);
	glColor3ub(204, 149, 119);
	glVertex2f(.1,-.35);
	glVertex2f(.7,-.35);
    glVertex2f(.7,-.365);
	glVertex2f(.1,-.365);
    glEnd();

    //3

    glBegin(GL_QUADS);
	glColor3ub(204, 149, 119);
	glVertex2f(.1,-.2);
	glVertex2f(.7,-.2);
    glVertex2f(.7,-.218);
	glVertex2f(.1,-.218);
    glEnd();

    //4

    glBegin(GL_QUADS);
	glColor3ub(204, 149, 119);
	glVertex2f(.1,-.05);
	glVertex2f(.7,-.05);
    glVertex2f(.7,-.068);
	glVertex2f(.1,-.068);
    glEnd();

      //5

    glBegin(GL_QUADS);
	glColor3ub(204, 149, 119);
	glVertex2f(.1,.1);
	glVertex2f(.7,.1);
    glVertex2f(.7,.119);
	glVertex2f(.1,.119);
    glEnd();

      //6
    glBegin(GL_QUADS);
	glColor3ub(204, 149, 119);
	glVertex2f(.1,.25);
	glVertex2f(.7,.25);
    glVertex2f(.7,.268);
	glVertex2f(.1,.268);
    glEnd();

    //horizontal line

    //1
    glBegin(GL_QUADS);
	glColor3ub(252, 142, 156);
	glVertex2f(.2,-.58);
	glVertex2f(.21,-.58);
   glVertex2f(.21,.6);
	glVertex2f(.2,.6);
    glEnd();

//2
    glBegin(GL_QUADS);
	glColor3ub(196, 240, 144);
	glVertex2f(.3,-.58);
	glVertex2f(.31,-.58);
    glVertex2f(.31,.6);
	glVertex2f(.3,.6);
    glEnd();

//3
    glBegin(GL_QUADS);
	glColor3ub(141, 86, 221);
	glVertex2f(.4,-.58);
	glVertex2f(.41,-.58);
    glVertex2f(.41,.6);
	glVertex2f(.4,.6);
    glEnd();

//4
    glBegin(GL_QUADS);
	glColor3ub(167, 219, 233);
	glVertex2f(.5,-.58);
	glVertex2f(.51,-.58);
    glVertex2f(.51,.6);
	glVertex2f(.5,.6);
    glEnd();

//5
    glBegin(GL_QUADS);
	glColor3ub(252, 142, 156);
	glVertex2f(.6,-.58);
	glVertex2f(.61,-.58);
    glVertex2f(.61,.6);
	glVertex2f(.6,.6);
    glEnd();

    //title text space

    glBegin(GL_QUADS);
	glColor3ub(250, 212, 175);
	glVertex2f(.1,.4);
	glVertex2f(.999,.4);
    glVertex2f(.999,.6);
	glVertex2f(.1,.6);
    glEnd();

//middle border 1

    glBegin(GL_QUADS);
	glColor3ub(165, 106, 88);
	glVertex2f(.1,-.58);
	glVertex2f(.13,-.58);
    glVertex2f(.13,.6);
	glVertex2f(.1,.6);
    glEnd();

//middle border 2

    glBegin(GL_QUADS);
	glColor3ub(165, 106, 88);
	glVertex2f(-.2,.5);
	glVertex2f(.1,.5);
    glVertex2f(.1,.6);
	glVertex2f(-.2,.6);
    glEnd();

//middle border 3

    glBegin(GL_QUADS);
	glColor3ub(165, 106, 88);
	glVertex2f(-.2,-.58);
	glVertex2f(-.23,-.58);
    glVertex2f(-.23,.6);
	glVertex2f(-.2,.6);
    glEnd();

//left side glass

    glBegin(GL_QUADS);
	glColor3ub(189, 243, 255);
	glVertex2f(-.999,-.58);
	glVertex2f(-.8,-.58);
    glVertex2f(-.8,-.2);
	glVertex2f(-.999,-.2);
    glEnd();

//middle
    glBegin(GL_QUADS);
	glColor3ub(250, 212, 175);
	glVertex2f(-.999,-.2);
	glVertex2f(-.8,-.2);
    glVertex2f(-.8,-.1);
	glVertex2f(-.999,-.1);
    glEnd();

    //last
    glBegin(GL_QUADS);
	glColor3ub(189, 242, 255);
	glVertex2f(-.999,-.1);
	glVertex2f(-.8,-.1);
    glVertex2f(-.8,.6);
	glVertex2f(-.999,.6);
    glEnd();

    //shiny

    glBegin(GL_QUADS);
	glColor3ub(254, 254, 250);
	glVertex2f(-.88,-.1);
	glVertex2f(-.85,-.1);
    glVertex2f(-.85,.6);
	glVertex2f(-.88,.6);
    glEnd();

    //carve

    int i;
	float x;
	float y;
	float z;
	float radius;
	GLfloat twicePi;
	int triangleAmount;

	 triangleAmount = 50; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;

    //1st

    glColor3ub(211, 143, 120);
    x=-.94f;  y=.64f;  radius =.149f;

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

    //2nd
   glColor3ub(28, 191, 208);
    x=-.95f;  y=.68f;  radius =.17f;

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

    //right glass
    //glass 1
    glBegin(GL_QUADS);
	glColor3ub(189, 243, 255);
	glVertex2f(.7,-.7);
	glVertex2f(.999,-.7);
    glVertex2f(.999,-.3);
	glVertex2f(.7,-.3);
    glEnd();

//border 1

    glBegin(GL_QUADS);
	glColor3ub(251, 211, 176);
	glVertex2f(.7,-.3);
	glVertex2f(.999,-.3);
    glVertex2f(.999,-.2);
	glVertex2f(.7,-.2);
    glEnd();

    //glass 2
    glBegin(GL_QUADS);
	glColor3ub(189, 243, 255);
	glVertex2f(.7,-.2);
	glVertex2f(.999,-.2);
    glVertex2f(.999,0);
	glVertex2f(.7,0);
    glEnd();

      //glass 2 shiny
    glBegin(GL_QUADS);
	glColor3ub(253, 255, 250);
	glVertex2f(.93,-.2);
	glVertex2f(.97,-.2);
    glVertex2f(.97,0);
	glVertex2f(.93,0);
    glEnd();

//border 2

    glBegin(GL_QUADS);
	glColor3ub(251, 211, 176);
	glVertex2f(.7,0);
	glVertex2f(.999,0);
    glVertex2f(.999,.015);
	glVertex2f(.7,.015);

    glEnd();

        //glass 3
    glBegin(GL_QUADS);
	glColor3ub(189, 243, 255);
	glVertex2f(.7,.015);
	glVertex2f(.999,.015);
    glVertex2f(.999,.2);
	glVertex2f(.7,.2);
    glEnd();

    //border 3

    glBegin(GL_QUADS);
	glColor3ub(251, 211, 176);
	glVertex2f(.7,.2);
	glVertex2f(.999,.2);
    glVertex2f(.999,.27);
	glVertex2f(.7,.27);

    glEnd();

    //glass 4
    glBegin(GL_QUADS);
	glColor3ub(189, 243, 255);
	glVertex2f(.7,.27);
	glVertex2f(.999,.27);
    glVertex2f(.999,.4);
	glVertex2f(.7,.4);
    glEnd();

    //glass 4 shiny
   glBegin(GL_QUADS);
	glColor3ub(253, 255, 250);
	glVertex2f(.93,.27);
	glVertex2f(.97,.27);
    glVertex2f(.97,.4);
	glVertex2f(.93,.4);
    glEnd();

    //fence
//1
    glBegin(GL_QUADS);
	glColor3ub(48, 90, 102);
	glVertex2f(.7,-.58);
	glVertex2f(.999,-.58);
    glVertex2f(.999,-.57);
	glVertex2f(.7,-.57);
    glEnd();
//2
      glBegin(GL_QUADS);
	glColor3ub(48, 90, 102);
	glVertex2f(.72,-.7);
	glVertex2f(.725,-.7);
    glVertex2f(.725,-.57);
	glVertex2f(.72,-.57);
    glEnd();
//3

    glBegin(GL_QUADS);
	glColor3ub(48, 90, 102);
	glVertex2f(.74,-.7);
	glVertex2f(.745,-.7);
    glVertex2f(.745,-.57);
	glVertex2f(.74,-.57);
    glEnd();

    //4

    glBegin(GL_QUADS);
	glColor3ub(48, 90, 102);
	glVertex2f(.76,-.7);
	glVertex2f(.765,-.7);
    glVertex2f(.765,-.57);
	glVertex2f(.76,-.57);
    glEnd();

//fence 2

    glBegin(GL_QUADS);
	glColor3ub(48, 90, 102);
	glVertex2f(.96,-.7);
	glVertex2f(.965,-.7);
    glVertex2f(.965,-.57);
	glVertex2f(.96,-.57);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(48, 90, 102);
	glVertex2f(.92,-.7);
	glVertex2f(.925,-.7);
    glVertex2f(.925,-.57);
	glVertex2f(.92,-.57);
    glEnd();
//3
    glBegin(GL_QUADS);
	glColor3ub(48, 90, 102);
	glVertex2f(.94,-.7);
	glVertex2f(.945,-.7);
    glVertex2f(.945,-.57);
	glVertex2f(.94,-.57);
    glEnd();

   //fence 3

    glBegin(GL_QUADS);
	glColor3ub(48, 90, 102);
	glVertex2f(.86,-.7);
	glVertex2f(.865,-.7);
    glVertex2f(.865,-.57);
	glVertex2f(.86,-.57);
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(48, 90, 102);
	glVertex2f(.82,-.7);
	glVertex2f(.825,-.7);
    glVertex2f(.825,-.57);
	glVertex2f(.82,-.57);
    glEnd();
//3

    glBegin(GL_QUADS);
	glColor3ub(48, 90, 102);
	glVertex2f(.84,-.7);
	glVertex2f(.845,-.7);
    glVertex2f(.845,-.57);
	glVertex2f(.84,-.57);
    glEnd();

//main gate

//1
    glBegin(GL_QUADS);
	glColor3ub(227, 186, 124);
	glVertex2f(-.4,-.7);
	glVertex2f(.1,-.7);
    glVertex2f(.1,-.25);
	glVertex2f(-.4,-.25);
    glEnd();

    //2
    glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-.4,-.35);
	glVertex2f(.1,-.35);
    glVertex2f(.1,-.25);
	glVertex2f(-.4,-.25);
    glEnd();

//door
//1
    glBegin(GL_QUADS);
	glColor3ub(51, 58, 77);
	glVertex2f(-.39,-.58);
	glVertex2f(-.3,-.58);
    glVertex2f(-.3,-.35);
	glVertex2f(-.39,-.35);
    glEnd();

//2
    glBegin(GL_QUADS);
	glColor3ub(51, 58, 77);
	glVertex2f(-.29,-.58);
	glVertex2f(-.2,-.58);
    glVertex2f(-.2,-.35);
	glVertex2f(-.29,-.35);
    glEnd();

//3
    glBegin(GL_QUADS);
	glColor3ub(51, 58, 77);
	glVertex2f(-.19,-.58);
	glVertex2f(-.1,-.58);
    glVertex2f(-.1,-.35);
	glVertex2f(-.19,-.35);
    glEnd();

//4
    glBegin(GL_QUADS);
	glColor3ub(51, 58, 77);
	glVertex2f(-.09,-.58);
	glVertex2f(.09,-.58);
    glVertex2f(.09,-.35);
	glVertex2f(-.09,-.35);
    glEnd();

    //shiri
//1
    glBegin(GL_QUADS);
	glColor3ub(52, 58, 80);
	glVertex2f(-.4,-.7);
	glVertex2f(.1,-.7);
    glVertex2f(.1,-.58);
	glVertex2f(-.4,-.58);
    glEnd();

    //2
    glBegin(GL_QUADS);
	glColor3ub(255, 238, 188);
	glVertex2f(-.4,-.67);
	glVertex2f(.1,-.67);
    glVertex2f(.1,-.58);
	glVertex2f(-.4,-.58);
    glEnd();
    //3
    glBegin(GL_QUADS);
	glColor3ub(52, 58, 80);
	glVertex2f(-.4,-.64);
	glVertex2f(.1,-.64);
    glVertex2f(.1,-.58);
	glVertex2f(-.4,-.58);
    glEnd();
 //4
    glBegin(GL_QUADS);
	glColor3ub(255, 238, 188);
	glVertex2f(-.4,-.61);
	glVertex2f(.1,-.61);
    glVertex2f(.1,-.58);
	glVertex2f(-.4,-.58);
    glEnd();

    //id punch
    //1

    glBegin(GL_QUADS);
	glColor3ub(82, 123, 123);
	glVertex2f(-.35,-.58);
	glVertex2f(-.3,-.6);
    glVertex2f(-.3,-.5);
	glVertex2f(-.35,-.49);
    glEnd();

 //2
    glBegin(GL_QUADS);
	glColor3ub(82, 123, 123);
	glVertex2f(-.25,-.58);
	glVertex2f(-.2,-.6);
    glVertex2f(-.2,-.5);
	glVertex2f(-.25,-.49);
    glEnd();

     //3

    glBegin(GL_QUADS);
	glColor3ub(82, 123, 123);
	glVertex2f(-.15,-.58);
	glVertex2f(-.1,-.6);
    glVertex2f(-.1,-.5);
	glVertex2f(-.15,-.49);
    glEnd();

//exit door
//1
    glBegin(GL_QUADS);
	glColor3ub(246, 245, 243);
	glVertex2f(.01,-.57);
	glVertex2f(.09,-.57);
    glVertex2f(.09,-.36);
	glVertex2f(.01,-.36);
    glEnd();

    //2
    glBegin(GL_QUADS);
	glColor3ub(246, 245, 243);
	glVertex2f(-.01,-.57);
	glVertex2f(-.09,-.57);
    glVertex2f(-.09,-.36);
	glVertex2f(-.01,-.36);
    glEnd();

    //tree

    //1
      glBegin(GL_QUADS);
	glColor3ub(103, 57, 45);
	glVertex2f(-.76,-.7);
	glVertex2f(-.75,-.7);
    glVertex2f(-.75,-.53);
	glVertex2f(-.76,-.53);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(75, 188, 132);
    glVertex2f(-.8,-.55);
    glVertex2f(-.7,-.55);
    glVertex2f(-.75,-.5);

    glVertex2f(-.8,-.58);
    glVertex2f(-.7,-.58);
    glVertex2f(-.75,-.53);

    glVertex2f(-.8,-.62);
    glVertex2f(-.7,-.62);
    glVertex2f(-.75,-.55);
    glEnd();

  //2
      glBegin(GL_QUADS);
	glColor3ub(103, 57, 45);
	glVertex2f(-.51,-.7);
	glVertex2f(-.50,-.7);
    glVertex2f(-.50,-.53);
	glVertex2f(-.51,-.53);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(75, 188, 132);
    glVertex2f(-.55,-.55);
    glVertex2f(-.45,-.55);
    glVertex2f(-.5,-.5);

    glVertex2f(-.55,-.58);
    glVertex2f(-.45,-.58);
    glVertex2f(-.5,-.53);

    glVertex2f(-.55,-.62);
    glVertex2f(-.45,-.62);
    glVertex2f(-.5,-.55);
    glEnd();

//right side tree

//1
     glBegin(GL_QUADS);
	glColor3ub(103, 57, 45);
	glVertex2f(.2,-.7);
	glVertex2f(.21,-.7);
    glVertex2f(.21,-.53);
	glVertex2f(.2,-.53);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(75, 188, 132);
    glVertex2f(.15,-.55);
    glVertex2f(.25,-.55);
    glVertex2f(.2,-.5);

    glVertex2f(.15,-.58);
    glVertex2f(.25,-.58);
    glVertex2f(.2,-.53);

    glVertex2f(.15,-.62);
    glVertex2f(.25,-.62);
    glVertex2f(.2,-.55);
    glEnd();

    //2
     glBegin(GL_QUADS);
	glColor3ub(103, 57, 45);
	glVertex2f(.4,-.7);
	glVertex2f(.41,-.7);
    glVertex2f(.41,-.53);
	glVertex2f(.4,-.53);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(75, 188, 132);
    glVertex2f(.35,-.55);
    glVertex2f(.45,-.55);
    glVertex2f(.4,-.5);

    glVertex2f(.35,-.58);
    glVertex2f(.45,-.58);
    glVertex2f(.4,-.53);

    glVertex2f(.35,-.62);
    glVertex2f(.45,-.62);
    glVertex2f(.4,-.55);
    glEnd();

 //3
     glBegin(GL_QUADS);
	glColor3ub(103, 57, 45);
	glVertex2f(.6,-.7);
	glVertex2f(.61,-.7);
    glVertex2f(.61,-.53);
	glVertex2f(.6,-.53);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(75, 188, 132);
    glVertex2f(.55,-.55);
    glVertex2f(.65,-.55);
    glVertex2f(.6,-.5);

    glVertex2f(.55,-.58);
    glVertex2f(.65,-.58);
    glVertex2f(.6,-.53);

    glVertex2f(.55,-.62);
    glVertex2f(.65,-.62);
    glVertex2f(.6,-.55);
    glEnd();


	glFlush();
}
	  // Render now
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("AIUB D-Building");
	glutReshapeWindow(1000, 650);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
