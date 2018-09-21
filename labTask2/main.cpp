#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{

    glClear (GL_COLOR_BUFFER_BIT);

    glColor3f (0.737, 0.561, 0.561);
    glBegin(GL_POLYGON);
    glVertex2f (0.0f, 0.25f);
    glVertex2f (0.25f, 0.0f);
    glVertex2f (-0.25f, 0.0f);

    glEnd();


    glFlush ();
}
void init (void)
{

    glClearColor (0.0, 0.0, 0.0, 0.0);
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
