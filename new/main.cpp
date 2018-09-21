#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{

    glClear (GL_COLOR_BUFFER_BIT);

    glColor3f (1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f (-0.20f, 0.18f);
    glVertex2f (-0.35f, 0.04f);
    glVertex2f (0.35f, 0.04f);
     glVertex2f (0.20f, 0.18f);

    glEnd();

    glColor3f (0.236, 0.350, 0.222);
    glBegin(GL_POLYGON);
    glVertex2f (-0.35f, 0.04f);
    glVertex2f (0.35f, 0.04f);
    glVertex2f (0.35f, -0.40f);
     glVertex2f (-0.35f, -0.40f);

    glEnd();



  glColor3f (0.0, 171.0, 132.0);
    glBegin(GL_POLYGON);
    glVertex2f (-0.20f, 0.18f);
    glVertex2f (-0.35f, 0.04f);
    glVertex2f (-0.07f, 0.04f);

    glEnd();

    glColor3f (0.192,0.156,0.131);
    glBegin(GL_POLYGON);
    glVertex2f (-0.07f, 0.04f);
    glVertex2f (0.35f, 0.04f);
    glVertex2f (0.35f, -0.40f);
    glVertex2f (-0.07f, -0.40f);

    glEnd();
      glColor3f (1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f (0.02f, -0.02f);
    glVertex2f (0.15f, -0.02f);
    glVertex2f (0.15f, -0.12f);
    glVertex2f (0.02f, -0.12f);

    glEnd();

     glColor3f (1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f (0.20f, -0.02f);
    glVertex2f (0.33f, -0.02f);
    glVertex2f (0.33f, -0.12f);
    glVertex2f (0.20f, -0.12f);

    glEnd();


      glColor3f (1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f (0.02f, -0.16f);
    glVertex2f (0.15f, -0.16f);
    glVertex2f (0.15f, -0.26f);
    glVertex2f (0.02f, -0.26f);

    glEnd();

      glColor3f (1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f (0.20f, -0.16f);
    glVertex2f (0.33f, -0.16f);
    glVertex2f (0.33f, -0.26f);
    glVertex2f (0.20f, -0.26f);

    glEnd();

      glColor3f (0.228,0.250,0.250);
    glBegin(GL_POLYGON);
    glVertex2f (-0.26f, -0.14f);
    glVertex2f (-0.16f, -0.14f);
    glVertex2f (-0.16f, -0.40f);
    glVertex2f (-0.26f, -0.40f);

    glEnd();

    glColor3f (0.0,0.400,0.200);
    glBegin(GL_POLYGON);
    glVertex2f (-0.16f, -0.40f);
    glVertex2f (-0.26f, -0.40f);
    glVertex2f (-0.40f, -0.5f);
    glVertex2f (-0.28f, -0.5f);

    glEnd();

    glColor3f (0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2f (0.15f, -0.02f);
    glVertex2f (0.02f, -0.12f);

    glEnd();

     glColor3f (0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2f (0.20f, -0.02f);
    glVertex2f (0.33f, -0.12f);

    glEnd();

     glColor3f (0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2f (0.02f, -0.16f);
    glVertex2f (0.15f, -0.26f);

    glEnd();

     glColor3f (0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2f (0.33f, -0.16f);
    glVertex2f (0.20f, -0.26f);

    glEnd();

    glFlush ();
}
void init (void)
{

    glClearColor (1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-.5, .5, -.5, .5, -1.0, 1.0);

    }

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 800);
    glutInitWindowPosition (5, 5);
    glutCreateWindow ("Simple House");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
