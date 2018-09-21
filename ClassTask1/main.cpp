#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{

    glClear (GL_COLOR_BUFFER_BIT);

    glColor3f (0.737, 0.561, 0.561);
    glBegin(GL_POLYGON);
    glVertex2f (0.02f, 0.35f);
    glVertex2f (0.20f, 0.42f);
    glVertex2f (0.41f, 0.35f);

    glEnd();


       glColor3f (0.109, 0.100, 0.10);
    glBegin(GL_POLYGON);
    glVertex2f (-0.35f, -0.30f);
    glVertex2f (-0.39f, -0.30f);
    glVertex2f (-0.39f, -0.04f);
    glVertex2f (-0.35f, -0.04f);

    glEnd();

     glColor3f (0.109, 0.500, 0.10);
    glBegin(GL_POLYGON);
    glVertex2f (-0.50f, -0.10f);
    glVertex2f (-0.25f, -0.10f);
    glVertex2f (-0.35f, 0.40f);

    glEnd();


   glColor3f (0.737, 0.200, 0.800);
    glBegin(GL_POLYGON);
    glVertex2f (0.06f, 0.06f);
    glVertex2f (-0.30f, 0.06f);
    glVertex2f (-0.36f, -0.08f);
    glVertex2f (0.01f, -0.08f);

    glEnd();



       glColor3f (0.100, 0.200, 0.561);
    glBegin(GL_POLYGON);
    glVertex2f (-0.33f, -0.08f);
    glVertex2f (-0.33f, -0.30f);
    glVertex2f (0.01f, -0.30f);
    glVertex2f (0.01f, -0.08f);

    glEnd();



       glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f (-0.27f, -0.14f);
    glVertex2f (-0.20f, -0.14f);
    glVertex2f (-0.20f, -0.21f);
    glVertex2f (-0.27f, -0.21f);

    glEnd();

        glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f (-0.17f, -0.14f);
    glVertex2f (-0.10f, -0.14f);
    glVertex2f (-0.10f, -0.21f);
    glVertex2f (-0.17f, -0.21f);

    glEnd();

    glColor3f (0.10, 0.561, 0.561);
    glBegin(GL_POLYGON);
    glVertex2f (0.05f, 0.35f);
    glVertex2f (0.05f, 0.04f);
    glVertex2f (0.38f, 0.04f);
    glVertex2f (0.38f, 0.35f);

    glEnd();



       glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f (0.10f, 0.18f);
    glVertex2f (0.15f, 0.18f);
    glVertex2f (0.15f, 0.25f);
    glVertex2f (0.10f, 0.25f);

    glEnd();


       glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f (0.25f, 0.18f);
    glVertex2f (0.20f, 0.18f);
    glVertex2f (0.20f, 0.25f);
    glVertex2f (0.25f, 0.25f);

    glEnd();

       glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f (0.35f, 0.18f);
    glVertex2f (0.30f, 0.18f);
    glVertex2f (0.30f, 0.25f);
    glVertex2f (0.35f, 0.25f);

    glEnd();



     glColor3f (0.800, 0.590, 0.561);
    glBegin(GL_POLYGON);
    glVertex2f (0.05f, 0.04f);
    glVertex2f (0.38f, 0.04f);
    glVertex2f (0.44f, -0.06f);
    glVertex2f (-0.01f, -0.06f);

    glEnd();



    glColor3f (0.10, 0.200, 0.200);
    glBegin(GL_POLYGON);
    glVertex2f (0.01f, -0.06f);
    glVertex2f (0.01f, -0.34f);
    glVertex2f (0.40f, -0.34f);
    glVertex2f (0.40f, -0.06f);

    glEnd();


    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f (0.06f, -0.10f);
    glVertex2f (0.36f, -0.10f);
    glVertex2f (0.36f, -0.30f);
    glVertex2f (0.06f, -0.30f);

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
    glutInitWindowPosition (10, 10);
    glutCreateWindow ("hello");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
