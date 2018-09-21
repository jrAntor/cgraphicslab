#include<windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
double circle(float x,float y,double r,double c1,double c2,double c3)
    {
    glColor3f(c1,c2,c3);
    float x1,y1,x2,y2;
    float angle;
    double radiou=r;

    x2=x,y2=y;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x2,y2);
    for(angle=1.0;angle<361.0f;angle+=0.2)
    {
        x1=x2+sin(angle)*radiou;
        y1=y2+cos(angle)*radiou;
        glVertex2f(x1,y1);
    }
 glEnd();
 glFlush ();

    }
double polygon(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4,double c1,double c2,double c3)
{ //only for polygon
    glColor3f(c1,c2,c3);
    glBegin(GL_POLYGON);
    glVertex2f (x1, y1);
    glVertex2f (x2, y2);
    glVertex2f (x3, y3);
    glVertex2f (x4, y4);
    glEnd();
     glFlush();
}
double polygon1(double x1,double y1,double x2,double y2,double x3,double y3,double c1,double c2,double c3)//only for roof
{
    glColor3f(c1,c2,c3);
    glBegin(GL_POLYGON);
    glVertex2f (x1, y1);
    glVertex2f (x2, y2);
    glVertex2f (x3, y3);
    glEnd();
     glFlush();
}


double pond(double c1,double c2,double c3,double x1,double y1,
             double c4,double c5,double c6,double x2,double y2,
             double c7,double c8,double c9,double x3,double y3,
             double c10,double c11,double c12,double x4,double y4)
             {
                 glBegin(GL_QUADS);
                 glColor3f(c1,c2,c3);
                 glVertex2f(x1,y1);
                 glColor3f(c4,c5,c6);
                 glVertex2f(x2,y2);
                 glColor3f(c7,c8,c9);
                 glVertex2f(x3,y3);
                 glColor3f(c10,c11,c12);
                 glVertex2f(x4,y4);
                 glEnd();
                 glFlush();
             }
 void background(void)
 {
    polygon(0.0, 0.0, 5.0, 0.0, 5.0, 0.6, 0.0, 0.6, 0.4, 0.4, 0.4);//black
    polygon(0.0, 0.62, 5.0, 0.62, 5.0, 1.8, 0.0, 1.8, 0.0, 1.0, 0.0);//green
    polygon(0.0,1.8,5.0,1.8,5.0,3.0,0.0,3.0,0.0,1.0,1.0);//blue
 }
 void car(void)
 {
    polygon(0.5,0.2,1.4,0.2,1.4,0.5,0.5,0.5,1.0,0.0,0.0);//polygon
    polygon(1.4,0.2,1.6,0.2,1.6,0.4,1.4,0.5,1.0,0.0,0.0);//polygon
    polygon(0.5,0.5,1.4,0.5,1.2,0.8,0.7,0.8,1.0,0.0,0.0);//polygon
    polygon(0.55,0.5,0.9,0.5,0.9,0.77,0.73,0.77,0.4,0.4,0.4);//window
    polygon(1.0,0.5,1.37,0.5,1.2,0.77,1.0,0.77,0.4,0.4,0.4);//window
    circle(0.7,0.2,0.09,0.0,0.0,0.0);//circle
    circle(1.3,0.2,0.09,0.0,0.0,0.0);//circle
 }
 void bus(void)
 {
     polygon(2.0,0.2,3.7,0.2,3.7,0.7,2.0,0.7,1.0,0.0,1.0);//polygon
     polygon(2.0,0.7,3.7,0.7,3.5,1.1,2.0,1.1,1.0,0.0,1.0);//polygon
     polygon(2.1,0.7,2.3,0.7,2.3,1.0,2.1,1.0,1.0,1.0,1.0);//window
     polygon(2.4,0.7,2.7,0.7,2.7,1.0,2.4,1.0,1.0,1.0,1.0);//window
     polygon(2.8,0.7,3.1,0.7,3.1,1.0,2.8,1.0,1.0,1.0,1.0);//window
     polygon(3.2,0.7,3.65,0.7,3.5,1.0,3.2,1.0,1.0,1.0,1.0);//window
     circle(2.4,0.2,0.15,0.0,0.0,0.0);//circle
     circle(3.4,0.2,0.15,0.0,0.0,0.0);//circle
 }
 void lamp(void)
 {
     polygon(4.3,0.61,4.35,0.61,4.35,1.4,4.3,1.4,1.0,0.0,0.0);//lamp post
     polygon(4.2,1.4,4.45,1.4,4.45,2.04,4.2,2.04,0.4,0.4,0.4);//lamp post
     circle(4.33,1.52,0.09,0.0,1.0,0.0);//circle green
     circle(4.33,1.72,0.09,1.0,1.0,0.0);//circle yellow
     circle(4.33,1.92,0.09,0.0,0.0,0.0);//circle black
 }
 void house(void)
 {
     polygon(2.3,1.3,3.6,1.3,3.6,1.5,2.3,1.5,0.7,0.7,0.7);//house
     polygon(2.5,1.3,2.7,1.3,2.7,1.5,2.5,1.5,0.0,0.0,0.0);// house line
     polygon(2.51,1.31,2.59,1.31,2.59,1.39,2.51,1.39,0.7,0.7,0.7);// house line
     polygon(2.61,1.31,2.69,1.31,2.69,1.39,2.61,1.39,0.7,0.7,0.7);// house line
     polygon(2.51,1.41,2.59,1.41,2.59,1.49,2.51,1.49,0.7,0.7,0.7);// house line
     polygon(2.61,1.41,2.69,1.41,2.69,1.49,2.61,1.49,0.7,0.7,0.7);// house line
     polygon(2.5,1.5,2.9,1.5,2.9,1.8,2.5,1.8,0.47,0.79,0.79);//house
     polygon(2.7,1.5,2.8,1.5,2.8,1.7,2.7,1.7,0.5,0.0,0.0);//house
     polygon(2.9,1.5,3.3,1.5,3.3,1.8,2.9,1.8,0.240,0.230,0.140);//house
     polygon(3.0,1.6,3.1,1.6,3.1,1.7,3.0,1.7,0.8,0.0,0.0);//house window
     polygon(2.9,1.8,3.3,1.8,3.1,2.1,2.7,2.1,0.8,0.0,0.0);//house roof
     polygon1(2.5,1.8,2.9,1.8,2.7,2.1,0.47,0.79,0.79);//house roof
     polygon1(2.3,1.5,2.5,1.5,2.5,1.7,0.9,0.9,0.9);//house side
     polygon(3.3,1.5,3.6,1.5,3.5,1.7,3.3,1.7,0.9,0.9,0.9);//house side
 }
 void tree(void)
 {
     polygon(1.5,1.3,1.55,1.3,1.55,1.6,1.5,1.6,1.139,0.69,0.19);//tree
     circle(1.4,1.6,0.16,0.139,0.69,0.19);//circle left bottom to top
     circle(1.65,1.6,0.16,0.139,0.69,0.19);//circle Right bottom to top
     circle(1.38,1.75,0.13,0.139,0.69,0.19);//circle left bottom to top
     circle(1.65,1.75,0.16,0.139,0.69,0.19);//circle Right bottom to top
     circle(1.5,1.85,0.12,0.139,0.69,0.19);//circle top bottom to top
 }
 void cloud(void)
 {
     circle(1.0,2.7,0.12,1.0,1.0,1.0);
     circle(1.2,2.7,0.18,1.0,1.0,1.0);
     circle(1.4,2.7,0.18,1.0,1.0,1.0);
     circle(1.6,2.7,0.12,1.0,1.0,1.0);
     circle(2.1,2.7,0.12,1.0,1.0,1.0);
     circle(2.3,2.7,0.18,1.0,1.0,1.0);
     circle(2.5,2.7,0.18,1.0,1.0,1.0);
     circle(2.7,2.7,0.18,1.0,1.0,1.0);
     circle(2.9,2.7,0.12,1.0,1.0,1.0);
 }
void nodi(void)
 {
     pond(0.0,1.0,1.0,0.5,1.6,0.0,1.0,1.0,0.8,1.6,0.0,1.0,1.0,1.1,1.5,0.0,1.0,1.0,1.2,1.4);//pond
     pond(0.0,1.0,1.0,0.5,1.6,0.0,1.0,1.0,1.2,1.4,0.0,1.0,1.0,1.2,1.3,0.0,1.0,1.0,0.2,1.4);//pond
     pond(0.0,1.0,1.0,0.2,1.4,0.0,1.0,1.0,1.2,1.3,0.0,1.0,1.0,1.0,1.1,0.0,1.0,1.0,0.4,1.1);//pond
     pond(0.0,1.0,1.0,0.2,1.4,0.0,1.0,1.0,0.4,1.1,0.0,1.0,1.0,0.2,1.2,0.0,1.0,1.0,0.2,1.4);//pond
     pond(0.0,1.0,1.0,0.4,1.1,0.0,1.0,1.0,1.0,1.1,0.0,1.0,1.0,0.7,1.0,0.0,1.0,1.0,0.4,1.1);//pond
 }
void sun(void)
{
    circle(0.4,2.7,0.20 ,  1.0,1.0,0.0);
}
void display(void)
{
       int i;
       for(i=0.0;i<=5.0;i++)
        {
            glClear(GL_COLOR_BUFFER_BIT);
                background();
                lamp();
                house();
                tree();
                nodi();
                cloud();
            glPushMatrix();
            glTranslated(i,0,0);
                bus();
                car();
                sun();
            glPopMatrix();
            Sleep(500);
       }
    glFlush ();
}
void init (void)
{
    glClearColor (1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 5.0, 0.0, 3.0, -1.0, 1.0);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1366, 768);
    glutInitWindowPosition (50, 100);
    glutCreateWindow ("sun,CAR,BUS move");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
