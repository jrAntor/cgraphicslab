#include <GL/gl.h>
#include <GL/glut.h>
GLfloat gfPosX = 0.0;
GLfloat gfDeltaX = .0001;

void display(void)
{

    glClear (GL_COLOR_BUFFER_BIT);

    glColor3f (1.0,1.0,1.0);
    glBegin(GL_LINES);
    glVertex3f(gfPosX,0.15,0.0);
    glVertex3f(0.40-gfPosX,0.30,0.0);
    glEnd();
    glFlush ();

    gfPosX += gfDeltaX;
    if(gfPosX>=.40 || gfPosX<=0.0){
        gfDeltaX = -gfDeltaX;

    }

    glutPostRedisplay();
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
    glutCreateWindow ("Class Task");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
