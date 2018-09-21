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

double line(double x1, double y1, double x2, double y2, double r, double g, double b )
{
    glColor3f(r,g,b);
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glEnd();
    glFlush();
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

double pentagon(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4,double x5,double y5,double c1,double c2,double c3)
{ //only for polygon
    glColor3f(c1,c2,c3);
    glBegin(GL_POLYGON);
    glVertex2f (x1, y1);
    glVertex2f (x2, y2);
    glVertex2f (x3, y3);
    glVertex2f (x4, y4);
    glVertex2f (x5, y5);
    glEnd();
     glFlush();
}

double triangle(double x1,double y1,double x2,double y2,double x3,double y3,double c1,double c2,double c3)//only for roof
{
    glColor3f(c1,c2,c3);
    glBegin(GL_POLYGON);
    glVertex2f (x1, y1);
    glVertex2f (x2, y2);
    glVertex2f (x3, y3);
    glEnd();
     glFlush();
}


 void background(void)
 {
   polygon(0.0, 0.0, 7.6, 0.0, 7.6, 5.6, 0.0, 5.6, 0.20, 0.68, 1.0);
 }

void plane1()
{
    polygon(1.5,2.0,0.8,2.2,0.9,2.3,1.5,2.4,.99,0.99,0.99);//tail
    polygon(1.1,2.3,1.4,2.3,0.9,2.9,0.7,2.8,1.0,1.0,1.0);//tail_top
    polygon(1.5,2.0,1.5,2.4,3.8,2.7,3.8,1.9,1.0,1.0,1.0);//body
    polygon(3.8,1.9,3.8,2.7,4.4,2.3,4.4,2.2,1.0,1.0,1.0);//front
    triangle(2.8,2.0,3.5,2.1,2.4,1.0,1.0,1.0,1.0);//rightWing
    triangle(2.9,2.4,3.6,2.5,2.5,3.5,1.0,1.0,1.0);//leftWing

    circle(4.4,2.25,0.06,1.0,1.0,1.0);//pinch

    //windows_from_left
    //polygon();
}

void plane2()
{
    triangle(4.4,3.5,4.8,4.0,4.3,4.1,0.0,1.0,1.0); //leftCone
    pentagon(4.5,4.1,4.3,4.0,4.2,4.0,4.2,4.4,4.5,4.4,0.0,1.0,1.0); //center_top
    circle(4.33,4.4,0.18,0.0,1.0,1.0);//top_cricle
    triangle(4.8,4.0,5.0,4.4,4.3,4.1,0.0,1.0,1.0);//rightCone
    polygon(4.5,3.8,4.8,4.2,6.4,4.2,6.4,3.6,0.0,1.0,1.0);//body
    polygon(5.1,3.8,5.8,3.7,5.3,3.1,4.8,3.0,0.0,1.0,1.0);//rightWing
    polygon(6.0,4.2,6.1,4.7,5.6,4.6,5.2,4.1,0.0,1.0,1.0);//leftWing

    //front
    circle(6.2,3.92,0.29,0.0,1.0,1.0);




}

void plane3()
{
    polygon(0.3,5.0,1.3,5.0,1.3,5.4,0.3,5.4,1.0,0.0,1.0);//left
    polygon(1.3,5.0,1.3,5.4,1.6,5.1,1.6,5.0,1.0,1.0,1.0);//right
    polygon(0.3,5.4,0.3,5.6,0.5,5.6,0.6,5.4,1.0,1.0,1.0);//end_top
    polygon(0.8,5.4,0.75,5.53,0.95,5.6,1.0,5.4,1.0,1.0,1.0);//leftWing
    polygon(0.8,5.2,1.0,5.2,0.8,4.95,0.57,4.95,1.0,1.0,1.0);//rightWing
    circle(1.61,5.05,0.04,1.0,1.0,1.0);//front
}

void cloud1()
{
    circle(1.4,4.0,0.4,1.0, 0.871, 0.778);//left
    circle(1.9,4.0,0.55,1.0, 0.871, 0.878);//center
    circle(2.3,4.0,0.4,1.0,0.871, 0.678);//right


}

void cloud2()
{
    circle(3.5,5.0,0.4,0.902, 0.902, 0.980);//left
    circle(4.0,5.0,0.55,0.902, 0.902, 0.980);//center
    circle(4.4,5.0,0.4,0.902, 0.902, 0.980);//right

}

void cloud3()
{
    circle(5.0,0.8,0.5,1.0, 0.871, 0.678);//left
    circle(5.5,0.8,0.6,1.0, 0.871, 0.678);//center
    circle(6.2,0.8,0.6,1.0, 0.871, 0.678);//right
    circle(6.8,0.8,0.5,1.0, 0.871, 0.678);//farRight
}

void display(void)
{
       double i;
       for(i=0.0;i<=10.0;i+=0.1)
        {
            glClear(GL_COLOR_BUFFER_BIT);

            background();
            cloud1();
            cloud2();
            cloud3();
            glPushMatrix();
            glTranslated(i,0,0);

            plane1();
            plane2();
            plane3();
            glPopMatrix();
            Sleep(50);


       }
    glFlush ();
}
void init (void)
{
    glClearColor (1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 7.6, 0.0, 5.6, -1.0, 1.0);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1280, 720);
    glutInitWindowPosition (50, 50);
    glutCreateWindow ("Three Moving Planes");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
