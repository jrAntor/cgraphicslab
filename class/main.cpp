#include <windows.h>
#include <math.h>
#include <GL/gl.h>
#include <GL/glut.h>
void sun(void);
void environment(void);


void display(void)
{
    int i,j;
    glClear (GL_COLOR_BUFFER_BIT);
     for( i=1;i<=100;i++){
     glClear (GL_COLOR_BUFFER_BIT);

     environment();

    glPushMatrix();
    glTranslated(i,0,0);

    environment();


    glPopMatrix();
    Sleep(30);
     }

  glEnd();
    glFlush();
 }


 void sun(void){



    glColor3f (1.0, 0.25, 1.0);
  float x1,y1,x2,y2;
    float angle;
    double radius=7; // Radius

    x1 = 10,y1=80; // Center
    glColor3f(1.0,1.0,0.6);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1,y1);

    for (angle=1.0f;angle<361.0f;angle+=0.2)
    {
        x2 = x1+sin(angle)*radius;
        y2 = y1+cos(angle)*radius;
        glVertex2f(x2,y2);
    }

    glEnd();
    glFlush();
 }
   void environment(void){
    /*glColor3f (.530, .530, .950);
    glBegin(GL_POLYGON);
    glVertex2f (40, 40 );
    glVertex2f (50, 40 );
    glVertex2f (50,50 );
    glVertex2f (40, 50);

     glEnd();
*/
//house left
     glColor3f (128, 64, 0);
    glBegin(GL_POLYGON);
    glVertex2f (30,25);
    glVertex2f (50,25);
    glVertex2f (50,40);
    glVertex2f (40,48);
     glVertex2f (30,40);

    glEnd();

    //house right
      glColor3f (.0, .0, .7);
    glBegin(GL_POLYGON);
    glVertex2f (50,25);
    glVertex2f (50,40);
    glVertex2f (70,40);
    glVertex2f (70,25);
    glEnd();



    //window left
     glColor3f (1, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f (54,36);
    glVertex2f (54,30);
    glVertex2f (59,30);
    glVertex2f (59,36);

    glEnd();

     glColor3f (1, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f (62,36);
    glVertex2f (62,30);
    glVertex2f (67,30);
    glVertex2f (67,36);

    glEnd();

      //door
     glColor3f (0, 0.30, .2);
    glBegin(GL_POLYGON);
    glVertex2f (36,25);
    glVertex2f (36,36);
    glVertex2f (44,36);
    glVertex2f (44,25);

    glEnd();


    glLineWidth(5);
    glColor3f (1.1, 0.30, .2);

    glBegin(GL_LINES);
    glVertex2f(36,30);
    glVertex2f(44,30);

    glEnd();

     glLineWidth(7);
    glColor3f (1.1, 0.30, .2);

    glBegin(GL_LINES);
    glVertex2f(43,28);
    glVertex2f(42,28);

    glEnd();




     glLineWidth(5);
    glColor3f (1.1, 0.30, .2);

    glBegin(GL_LINES);
    glVertex2f(44,25);
    glVertex2f(44,35.99);

    glEnd();

    glLineWidth(5);
    glColor3f (1.1, 0.30, .2);

    glBegin(GL_LINES);
    glVertex2f(36,35.5);
    glVertex2f(44,35.5);

    glEnd();

    glLineWidth(5);
    glColor3f (1.1, 0.30, .2);

    glBegin(GL_LINES);
    glVertex2f(36,25);
    glVertex2f(36,36);

    glEnd();



    glLineWidth(4);
    glColor3f (.0, .30, .7);

    glBegin(GL_LINES);
    glVertex2f(40,48);
    glVertex2f(29,39);

    glEnd();
    //top right
     glColor3f (.0, .30, .7);
    glBegin(GL_POLYGON);
    glVertex2f (40,48);
    glVertex2f (65,48);
    glVertex2f (73,40);
    glVertex2f (50,40);


    glEnd();
  //top right white
      glColor3f (5.0, 5.0, 5.0);
    glBegin(GL_POLYGON);
    glVertex2f (60,45);
    glVertex2f (64,45);
    glVertex2f (64,56);
    glVertex2f (60,56);

    glEnd();

      glLineWidth(5);
    glColor3f (5.0, 5.0, 5.0);

    glBegin(GL_LINES);
    glVertex2f(59,56);
    glVertex2f(65,56);

    glEnd();



    glFlush ();
}
void init (void)
{

    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 100, 0, 100, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 600);
    glutInitWindowPosition (10, 10);
    glutCreateWindow ("hello");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
