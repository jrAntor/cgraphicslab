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

 void about()

 {
     //Project: 3 Moving Planes
   glRasterPos2f(0.96,1.0);//P_pos
   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,80);

   glRasterPos2f(1.0,1.0);//r_pos
   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,114);

   glRasterPos2f(1.04,1.0);//o_pos
   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,111);

   glRasterPos2f(1.09,1.0);//j_pos
   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,106);

   glRasterPos2f(1.13,1.0);//e_pos
   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,101);

   glRasterPos2f(1.17,1.0);//c_pos
   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,99);

   glRasterPos2f(1.22,1.0);//t_pos
   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,116);

   glRasterPos2f(1.25,1.0);//:_pos
   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,58);

   glRasterPos2f(1.29,1.0);//3_pos
   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,51);

    glRasterPos2f(1.36,1.0);//M_pos
   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,77);

    glRasterPos2f(1.45,1.0);//o_pos
   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,111);

   glRasterPos2f(1.52,1.0);//v_pos
   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,118);

   glRasterPos2f(1.58,1.0);//i_pos
   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,105);

   glRasterPos2f(1.62,1.0);//n_pos
   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,110);

   glRasterPos2f(1.68,1.0);//g_pos
   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,103);


   glRasterPos2f(1.78,1.0);//P_pos
   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,80);

   glRasterPos2f(1.84,1.0);//l_pos
   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,108);

   glRasterPos2f(1.86,1.0);//a_pos
   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,97);

   glRasterPos2f(1.92,1.0);//n_pos
   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,110);

   glRasterPos2f(1.98,1.0);//e_pos
   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,101);

   glRasterPos2f(2.04,1.0);//s_pos
   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,115);




 }
void plane1()
{

    polygon(1.1,2.3,1.4,2.3,0.9,2.9,0.7,2.8,1.0, 1.0, 1.0);//tail_top
    polygon(1.5,2.0,0.8,2.2,0.9,2.3,1.5,2.4,0.0 ,1.0 ,1.0);//tail
    polygon(3.8,1.9,3.8,2.7,4.4,2.3,4.4,2.2,0.0, 1.0 ,0.0);//front
    triangle(2.8,2.0,3.5,2.1,2.4,1.0,0.0 ,1.0 ,0.0);//rightWing
    triangle(2.9,2.4,3.6,2.5,2.5,3.5,0.0, 1.0 ,0.0);//leftWing
    circle(4.4,2.25,0.06,0.0, 1.0 ,0.0);//pinch
    polygon(1.5,2.0,1.5,2.4,3.8,2.7,3.8,1.9,0.0, 1.0 ,1.0);//body
    polygon(1.2,2.1,1.4,2.1,1.4,2.3,1.2,2.3,1.0,0.5,0.0);//window
    polygon(1.5,2.1,1.7,2.1,1.7,2.3,1.5,2.3,1.0,0.5,0.0);//window
    polygon(1.8,2.1,2.0,2.1,2.0,2.3,1.8,2.3,1.0,0.5,0.0);//window
    polygon(2.1,2.1,2.3,2.1,2.3,2.3,2.1,2.3,1.0,0.5,0.0);//window
    polygon(2.4,2.1,2.6,2.1,2.6,2.3,2.4,2.3,1.0,0.5,0.0);//window
    polygon(2.7,2.1,2.9,2.1,2.9,2.3,2.7,2.3,1.0,0.5,0.0);//window
    polygon(3.0,2.1,3.2,2.1,3.2,2.3,3.0,2.3,1.0,0.5,0.0);//window
    polygon(3.3,2.1,3.5,2.1,3.5,2.3,3.3,2.3,1.0,0.5,0.0);//window
    polygon(3.6,2.1,3.8,2.1,3.8,2.3,3.6,2.3,1.0,0.5,0.0);//window
    triangle(3.8,2.5,4.1,2.5,3.8,2.7,0.0,0.1,0.1);//window
    polygon(3.4,2.5,3.7,2.5,3.7,2.6,3.4,2.6,0.0,0.1,0.1);//window
    polygon(3.0,2.4,3.3,2.4,3.3,2.5,3.0,2.5,0.0,0.1,0.1);//window
    polygon(2.6,2.4,2.9,2.4,2.9,2.5,2.6,2.5,0.0,0.1,0.1);//window

    //BIMAN
    glRasterPos2f(3.8,2.37);//B_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,66);

    glRasterPos2f(3.87,2.37);//I_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,73);

    glRasterPos2f(3.91,2.37);//M_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,77);

    glRasterPos2f(3.99,2.37);//A_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,65);

    glRasterPos2f(4.05,2.37);//N_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,78);

    //BANGLADESH
    glRasterPos2f(3.8,2.3);//B_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,66);

    glRasterPos2f(3.85,2.3);//A_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,65);

    glRasterPos2f(3.9,2.3);//N_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,78);

    glRasterPos2f(3.95,2.3);//G_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,71);

    glRasterPos2f(4.01,2.3);//L_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,76);

    glRasterPos2f(4.05,2.3);//A_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,65);

    glRasterPos2f(4.10,2.3);//D_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,68);

    glRasterPos2f(4.15,2.3);//E_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,69);

    glRasterPos2f(4.20,2.3);//S_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,83);

    glRasterPos2f(4.25,2.3);//H_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,72);

    //AIRLINES

    glRasterPos2f(3.8,2.2);//A_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,65);

    glRasterPos2f(3.86,2.2);//I_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,73);

    glRasterPos2f(3.9,2.2);//R_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,82);

    glRasterPos2f(3.96,2.2);//L_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,76);

    glRasterPos2f(4.0,2.2);//I_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,73);

    glRasterPos2f(4.05,2.2);//N_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,78);

    glRasterPos2f(4.1,2.2);//E_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,69);

    glRasterPos2f(4.15,2.2);//S_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,83);

}
void plane2()
{
    polygon(5.1,3.8,5.8,3.7,5.3,3.1,4.8,3.0,0.0,1.0,1.0);//rightWing
    polygon(6.0,4.0,6.1,4.7,5.6,4.6,5.2,3.9,0.0,1.0,1.0);//leftWing
    polygon(4.5,3.8,4.8,4.0,6.4,4.2,6.4,3.6,1.0,0.0,0.0);//body
    triangle(4.4,3.5,4.8,4.0,4.3,4.1,0.0,1.0,1.0); //leftCone
    triangle(4.8,4.0,5.0,4.4,4.3,4.1,0.0,1.0,1.0);//rightCone
    pentagon(4.5,4.1,4.3,4.0,4.2,4.0,4.0,4.4,4.2,4.4,1.0,1.0,0.0); //center_top
    circle(6.5,3.90,0.31,1.0,0.0,0.0);//front
    polygon(4.9,3.8,5.3,3.8,5.3,4.0,4.9,3.95,0.0,1.0,0.0);//window
    polygon(5.4,3.8,5.8,3.8,5.8,4.0,5.4,4.0,0.0,1.0,0.0);//window
    polygon(5.9,3.8,6.3,3.8,6.3,4.0,5.9,4.0,0.0,1.0,0.0);//window
    polygon(6.4,3.9,6.75,3.9,6.7,4.1,6.4,4.1,0.0,1.0,0.0);//window

    //ALASKA
    glRasterPos2f(5.5,4.2);//A_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,65);

    glRasterPos2f(5.57,4.2);//l_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,108);

    glRasterPos2f(5.6,4.2);//a_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,97);

    glRasterPos2f(5.65,4.2);//s_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,115);

    glRasterPos2f(5.7,4.2);//k_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,107);

    glRasterPos2f(5.75,4.2);//a_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,97);

}
void plane3()
{
    polygon(0.3,5.0,1.3,5.0,1.3,5.4,0.3,5.2,0.0,1.0,0.0);//body
    polygon(1.3,5.0,1.3,5.4,1.6,5.1,1.6,5.1,0.0,1.0,1.0);//head
    circle(1.56,5.11,0.04,0.0,1.0,1.0);//front
    polygon(0.3,5.2,0.2,5.5,0.3,5.5,0.6,5.25,1.0,0.5,0.0);//end_top
    polygon(0.8,5.3,0.75,5.53,0.85,5.56,1.0,5.34,1.0,0.5,0.0);//leftWing
    polygon(0.8,5.2,1.0,5.2,0.68,4.95,0.57,4.95,1.0,0.5,0.0);//rightWing
    polygon(0.3,5.0,0.3,5.2,0.1,5.1,0.3,5.0,0.0, 0.0 ,0.0);//tail





}

void jetBlue()

{
    //jetBlue

    glRasterPos2f(0.97,5.1);//j_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,106);

    glRasterPos2f(1.01,5.1);//e_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,101);

    glRasterPos2f(1.07,5.1);//t_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,116);

    glRasterPos2f(1.11,5.1);//B_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,66);

    glRasterPos2f(1.17,5.1);//l_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,108);

    glRasterPos2f(1.21,5.1);//u_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,117);

    glRasterPos2f(1.26,5.1);//e_pos
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,101);
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
       for(i=0.0;i<=10.0;i+=0.15)
        {
            glClear(GL_COLOR_BUFFER_BIT);

            background();

            cloud1();
            cloud2();
            cloud3();
            about();

            glPushMatrix();
            glTranslated(i,0,0);
             jetBlue();
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
