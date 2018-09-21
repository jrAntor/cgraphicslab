#include <GL/gl.h>
#include<math.h>
#include <GL/glut.h>
void display(void)
{

    glClear (GL_COLOR_BUFFER_BIT);


    //sky

    glColor3f (0.20, 0.70, 0.950);
    glBegin(GL_POLYGON);
    glVertex2f (-0.5f, 0.5f);
    glVertex2f (0.5f, 0.5f);
    glVertex2f (0.5f, 0.25f);
    glVertex2f(-0.5f,0.25f);
    glEnd();

    //sun

    glBegin(GL_LINE_STRIP);
    glColor3f (0.737, 0.200, 0.200);
    float x1,y1,x2,y2,angle;
    double radius = 0.04;
    x1 = -0.4, y1 = 0.40;
    glColor3f(1.0,1.0,0.6);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1,y1);
    for(angle=1.0f;angle<361.0;angle+=0.2){
      x2 = x1 + sin(angle)*radius;
      y2 = y1 + cos(angle)*radius;
      glVertex2f(x2,y2);

    }

    glEnd();


//clouds-cluster-1

//cloud-1

 glBegin(GL_LINE_STRIP);
    glColor3f (0.0, 0.0, 0.0);
    float clX,clX2,clX3,clX4,angle8;

    clX = -0.20, clX2 = 0.40;
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(clX,clX2);
    for(angle8=1.0f;angle8<361.0;angle8+=0.2){
      double radius8 = 0.04;
      clX3 = clX + sin(angle8)*radius8;
      clX4 = clX2 + cos(angle8)*radius8;
      glVertex2f(clX3,clX4);

    }

    glEnd();
//cloud-2
  glBegin(GL_LINE_STRIP);
    glColor3f (0.0, 0.0, 0.0);
    float cl1,cl2,cl3,cl4,angle6;

    cl1 = -0.16, cl2 = 0.40;
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cl1,cl2);
    for(angle6=1.0f;angle6<361.0;angle6+=0.2){
      double radius6 = 0.05;
      cl3 = cl1 + sin(angle6)*radius6;
      cl4 = cl2 + cos(angle6)*radius6;
      glVertex2f(cl3,cl4);

    }

    glEnd();

    //cloud-3

    glBegin(GL_LINE_STRIP);
    glColor3f (0.0, 0.0, 0.0);
    float clC,clC2,clC3,clC4,angle7;

    clC = -0.10, clC2 = 0.40;
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(clC,clC2);
    for(angle7=1.0f;angle7<361.0;angle7+=0.2){
      double radius7 = 0.05;
      clC3 = clC + sin(angle7)*radius7;
      clC4 = clC2 + cos(angle7)*radius7;
      glVertex2f(clC3,clC4);

    }

    glEnd();

    //cloud-4

    glBegin(GL_LINE_STRIP);
    glColor3f (0.0, 0.0, 0.0);
    float clL,clL2,clL3,clL4,angle9;

    clL = -0.06, clL2 = 0.40;
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(clL,clL2);
    for(angle9=1.0f;angle9<361.0;angle9+=0.2){
      double radius9 = 0.04;
      clL3 = clL + sin(angle9)*radius9;
      clL4 = clL2 + cos(angle9)*radius9;
      glVertex2f(clL3,clL4);

    }

    glEnd();

  //clouds end11

  //cloud-cluster-2

  //cloud-1.1

 glBegin(GL_LINE_STRIP);
    glColor3f (0.0, 0.0, 0.0);
    float cloudX,cloudX2,cloudX3,cloudX4,angleC1;

    cloudX = 0.04, cloudX2 = 0.40;
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cloudX,cloudX2);
    for(angleC1=1.0f;angleC1<361.0;angleC1+=0.2){
      double radiusC1 = 0.04;
      cloudX3 = cloudX + sin(angleC1)*radiusC1;
      cloudX4 = cloudX2 + cos(angleC1)*radiusC1;
      glVertex2f(cloudX3,cloudX4);

    }

    glEnd();
//cloud-2.1
  glBegin(GL_LINE_STRIP);
    glColor3f (0.0, 0.0, 0.0);
    float cloudY,cloudY2,cloudY3,cloudY4,angleY;

    cloudY = 0.08, cloudY2 = 0.40;
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cloudY,cloudY2);
    for(angleY=1.0f;angleY<361.0;angleY+=0.2){
      double radiusY = 0.05;
      cloudY3 = cloudY + sin(angleY)*radiusY;
      cloudY4 = cloudY2 + cos(angleY)*radiusY;
      glVertex2f(cloudY3,cloudY4);

    }

    glEnd();

    //cloud-3.1

    glBegin(GL_LINE_STRIP);
    glColor3f (0.0, 0.0, 0.0);
    float cloudZ,cloudZ2,cloudZ3,cloudZ4,angleZ;

    cloudZ = 0.13, cloudZ2 = 0.40;
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cloudZ,cloudZ2);
    for(angleZ=1.0f;angleZ<361.0;angleZ+=0.2){
      double radiusZ = 0.05;
      cloudZ3 = cloudZ + sin(angleZ)*radiusZ;
      cloudZ4 = cloudZ2 + cos(angleZ)*radiusZ;
      glVertex2f(cloudZ3,cloudZ4);

    }

    glEnd();

    //cloud-4.1

    glBegin(GL_LINE_STRIP);
    glColor3f (0.0, 0.0, 0.0);
    float cloudO,cloudO2,cloudO3,cloudO4,angleO;

    cloudO = 0.18, cloudO2 = 0.40;
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cloudO,cloudO2);
    for(angleO=1.0f;angleO<361.0;angleO+=0.2){
      double radiusO = 0.04;
      cloudO3 = cloudO + sin(angleO)*radiusO;
      cloudO4 = cloudO2 + cos(angleO)*radiusO;
      glVertex2f(cloudO3,cloudO4);

    }

    glEnd();

/* clouds-end */


    //field
    glColor3f (0.100, 0.800, 0.200);
    glBegin(GL_POLYGON);
    glVertex2f (-0.5f, 0.25f);
    glVertex2f (0.5f, 0.25f);
    glVertex2f (0.5f, 0.0f);
    glVertex2f(-0.5f,0.0f);
    glEnd();


    //tree



    //tree-base

    glColor3f (0.500, 0.200, 0.200);
    glBegin(GL_POLYGON);
    glVertex2f (-0.20f, 0.04f);
    glVertex2f (-0.17f, 0.04f);
    glVertex2f (-0.17f, 0.15f);
    glVertex2f(-0.20f,0.15f);
    glEnd();

    //tree-branches/leaves

    //branch-1

    glBegin(GL_LINE_STRIP);
    glColor3f (0.0,1.0,0.0);
    float bA,bA2,bA3,bA4,angleB1;

    bA = -0.17, bA2 = 0.16;
    glColor3f(0.100,1.0,0.300);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(bA,bA2);
    for(angleB1=1.0f;angleB1<361.0;angleB1+=0.2){
      double radiusB1 = 0.03;
      bA3 = bA + sin(angleB1)*radiusB1;
      bA4 = bA2 + cos(angleB1)*radiusB1;
      glVertex2f(bA3,bA4);

    }

    glEnd();

    //branch-2

    glBegin(GL_LINE_STRIP);
    glColor3f (0.0,1.0,0.0);
    float bB,bB2,bB3,bB4,angleB2;

    bB = -0.20, bB2 = 0.16;
    glColor3f(0.100,1.0,0.300);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(bB,bB2);
    for(angleB2=1.0f;angleB2<361.0;angleB2+=0.2){
      double radiusB2 = 0.03;
      bB3 = bB+ sin(angleB2)*radiusB2;
      bB4 = bB2 + cos(angleB2)*radiusB2;
      glVertex2f(bB3,bB4);

    }

    glEnd();

    //branch-3
    glBegin(GL_LINE_STRIP);
    glColor3f (0.0,1.0,0.0);
    float bC,bC2,bC3,bC4,angleB3;

    bC = -0.17, bC2 = 0.20;
    glColor3f(0.100,1.0,0.300);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(bC,bC2);
    for(angleB3=1.0f;angleB3<361.0;angleB3+=0.2){
      double radiusB3 = 0.025;
      bC3 = bC+ sin(angleB3)*radiusB3;
      bC4 = bC2 + cos(angleB3)*radiusB3;
      glVertex2f(bC3,bC4);

    }

    glEnd();
    //branch-4
     glBegin(GL_LINE_STRIP);
    glColor3f (0.0,1.0,0.0);
    float bD,bD2,bD3,bD4,angleB4;

    bD = -0.20, bD2 = 0.20;
    glColor3f(0.100,1.0,0.300);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(bD,bD2);
    for(angleB4=1.0f;angleB4<361.0;angleB4+=0.2){
      double radiusB4 = 0.025;
      bD3 = bD+ sin(angleB4)*radiusB4;
      bD4 = bD2 + cos(angleB4)*radiusB4;
      glVertex2f(bD3,bD4);

    }

    glEnd();

    //branch-5

    glBegin(GL_LINE_STRIP);
    glColor3f (0.0, 1.0, 0.0);
    float bE,bE2,bE3,bE4,angleB5;

    bE = -0.18, bE2 = 0.21;
    glColor3f(0.100,1.0,0.300);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(bE,bE2);
    for(angleB5=1.0f;angleB5<361.0;angleB5+=0.2){
      double radiusB5 = 0.03;
      bE3 = bE+ sin(angleB5)*radiusB5;
      bE4 = bE2 + cos(angleB5)*radiusB5;
      glVertex2f(bE3,bE4);

    }

    glEnd();


    /*branchEnd*/

    //swimming-pool
    glColor3f (0.20, 0.70, 0.950);
    glBegin(GL_POLYGON);
    glVertex2f (-0.30f, 0.08f);
    glVertex2f (-0.30f, 0.18f);
    glVertex2f (-0.48f, 0.18f);
    glVertex2f(-0.48f,0.08f);
    glEnd();


   //house-base
    glColor3f (1.50, 1.70, 1.20);
    glBegin(GL_POLYGON);
    glVertex2f (0.04f, 0.15f);
    glVertex2f (0.25f, 0.15f);
    glVertex2f (0.22f, 0.20f);
    glVertex2f(0.09f,0.20f);
    glEnd();

    //house-lowerBase
    glColor3f (1.0, 1.1, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f (0.04f, 0.15f);
    glVertex2f (0.25f, 0.15f);
    glVertex2f (0.25f, 0.10f);
    glVertex2f(0.04f,0.10f);
    glEnd();

    //house-bodyLeft
    glColor3f (0.300, 0.200, 0.200);
    glBegin(GL_POLYGON);
    glVertex2f (0.08f, 0.15f);
    glVertex2f (0.15f, 0.15f);
    glVertex2f (0.15f, 0.30f);
    glVertex2f(0.08f,0.30f);
    glEnd();

    //house-bodyRight
    glColor3f (0.300, 0.400, 0.200);
    glBegin(GL_POLYGON);
    glVertex2f (0.15f, 0.15f);
    glVertex2f (0.23f, 0.15f);
    glVertex2f (0.23f, 0.30f);
    glVertex2f(0.15f,0.30f);
    glEnd();

    //left-polygon-top
    glColor3f (0.300, 0.150, 0.290);
    glBegin(GL_POLYGON);
    glVertex2f (0.07f, 0.30f);
    glVertex2f (0.15f, 0.30f);
    glVertex2f (0.10f, 0.35f);
    glEnd();

    //right-polygon-top

    glColor3f (0.500, 0.10, 0.10);
    glBegin(GL_POLYGON);
    glVertex2f (0.15f, 0.30f);
    glVertex2f (0.24f, 0.30f);
    glVertex2f (0.20f, 0.35f);
    glVertex2f(0.10f,0.35f);
    glEnd();


    //trafficLight
    glColor3f (0.500, 0.200, 0.200);
    glBegin(GL_POLYGON);
    glVertex2f (0.38f, 0.0f);
    glVertex2f (0.40f, 0.0f);
    glVertex2f (0.40f, 0.10f);
    glVertex2f(0.38f,0.10f);
    glEnd();

    //lightBar

    glColor3f (0.05, 0.12, 0.12);
    glBegin(GL_POLYGON);
    glVertex2f (0.36f, 0.10f);
    glVertex2f (0.42f, 0.10f);
    glVertex2f (0.42f, 0.30f);
    glVertex2f(0.36f,0.30f);
    glEnd();

    //light-1

   glBegin(GL_LINE_STRIP);
    glColor3f (1.0, 0.0, 0.0);
    float x3,y3,x4,y4,angle1;

    x3 = 0.39, y3 = 0.15;
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x3,y3);
    for(angle1=1.0f;angle1<361.0;angle1+=0.2){
      double radius1 = 0.02;
      x4 = x3 + sin(angle1)*radius1;
      y4 = y3 + cos(angle1)*radius1;
      glVertex2f(x4,y4);

    }

    glEnd();

    //light-2

    glBegin(GL_LINE_STRIP);
    glColor3f (1.0, 0.0, 0.0);
    float xT,yT,xT1,yT2,angleT;

    xT = 0.39, yT = 0.20;
    glColor3f(0.0,1.0,0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xT,yT);
    for(angle1=1.0f;angleT<361.0;angleT+=0.2){
      double radiusT = 0.02;
      xT1 = xT + sin(angleT)*radiusT;
      yT2 = yT + cos(angleT)*radiusT;
      glVertex2f(xT1,yT2);

    }

    glEnd();

    //light-3

    glBegin(GL_LINE_STRIP);
    glColor3f (1.0, 0.0, 0.0);
    float t,t2,t3,t4,angleTt;

    t = 0.39, t2 = 0.25;
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(t,t2);
    for(angleTt=1.0f;angleTt<361.0;angleTt+=0.2){
      double radiusTt = 0.02;
      t3 = t + sin(angleTt)*radiusTt;
      t4 = t2 + cos(angleTt)*radiusTt;
      glVertex2f(t3,t4);

    }

    glEnd();





    //footpath
    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f (-0.5f, 0.0f);
    glVertex2f (0.5f, 0.0f);
    glVertex2f (0.5f, -0.02f);
    glVertex2f(-0.5f,-0.02f);
    glEnd();
//road
    glColor3f (0.05, 0.12, 0.12);
    glBegin(GL_POLYGON);
    glVertex2f (-0.5f, -0.02f);
    glVertex2f (0.5f, -0.02f);
    glVertex2f (0.5f, -0.38f);
    glVertex2f(-0.5f,-0.38f);
    glEnd();

       //white-Spots

    //I

    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f (-0.25f, -0.18f);
    glVertex2f (-0.02f, -0.18f);
    glVertex2f (-0.02f, -0.20f);
    glVertex2f(-0.25f,-0.20f);
    glEnd();

    //II

    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f (0.14f, -0.18f);
    glVertex2f (0.37f, -0.18f);
    glVertex2f (0.37f, -0.20f);
    glVertex2f(0.14f,-0.20f);
    glEnd();

    //miniBus
    glColor3f (.400, 0.60, 0.600);
    glBegin(GL_POLYGON);
    glVertex2f (-0.05f, 0.08f);
    glVertex2f (0.22f, 0.08f);
    glVertex2f (0.32f, 0.0f);
    glVertex2f(0.32f,-0.13f);
    glVertex2f(-0.05f,-0.13f);
    glEnd();


     //miniBus
    glColor3f (.400, 0.60, 0.600);
    glBegin(GL_POLYGON);
    glVertex2f (-0.05f, 0.08f);
    glVertex2f (0.22f, 0.08f);
    glVertex2f (0.32f, 0.0f);
    glVertex2f(0.32f,-0.13f);
    glVertex2f(-0.05f,-0.13f);
    glEnd();


    //window-1

     glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f (-0.02f, 0.02f);
    glVertex2f (0.05f, 0.02f);
    glVertex2f (0.05f, -0.06f);
    glVertex2f(-0.02f,-0.06f);
    glEnd();

    //window-2

    glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f (0.07f, 0.02f);
    glVertex2f (0.14f, 0.02f);
    glVertex2f (0.14f, -0.06f);
    glVertex2f(0.07f,-0.06f);
    glEnd();

    //window-3

    glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f (0.16f, 0.02f);
    glVertex2f (0.25f, 0.02f);
    glVertex2f (0.28f, -0.04f);
    glVertex2f (0.28f, -0.06f);
    glVertex2f(0.16f,-0.06f);
    glEnd();

    //wheels-minibus-1

   glBegin(GL_LINE_STRIP);
    glColor3f (0.0, 0.0, 0.0);
    float xw,yw,xw1,yw1,angle2;

    xw = 0.24, yw = -0.14;
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xw,yw);
    for(angle2=1.0f;angle2<361.0;angle2+=0.2){
      double radius2 = 0.03;
      xw1 = xw + sin(angle2)*radius2;
      yw1 = yw + cos(angle2)*radius2;
      glVertex2f(xw1,yw1);

    }

    glEnd();

    //wheel-minibus-2

    glBegin(GL_LINE_STRIP);
    glColor3f (0.0, 0.0, 0.0);
    float xwh,ywh,xwh2,ywh2,angle3;

    xwh = 0.05, ywh = -0.14;
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xwh,ywh);
    for(angle3=1.0f;angle3<361.0;angle3+=0.2){
      double radius3 = 0.03;
      xwh2 = xwh + sin(angle3)*radius3;
      ywh2 = ywh + cos(angle3)*radius3;
      glVertex2f(xwh2,ywh2);

    }

    glEnd();


    //car-Left
      glColor3f (0.4, 0.85, 0.4);
    glBegin(GL_POLYGON);
    glVertex2f (-0.28f, 0.01f);
    glVertex2f (-0.18f, 0.01f);
    glVertex2f (-0.15f, -0.04f);
    glVertex2f(-0.32f,-0.04f);

    glEnd();

    //car-body

    glColor3f (0.4, 0.85, 0.4);
    glBegin(GL_POLYGON);
    glVertex2f (-0.32f, -0.04f);
    glVertex2f (-0.15f, -0.04f);
    glVertex2f (-0.09f, -0.04f);
    glVertex2f(-0.09f,-0.09f);
    glVertex2f(-0.37f,-0.09f);
    glVertex2f(-0.37f,-0.04f);

    glEnd();


    //window-1
      glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f (-0.28f, -0.02f);
    glVertex2f (-0.24f, -0.02f);
    glVertex2f (-0.24f, -0.06f);
    glVertex2f(-0.28f,-0.06f);
    glEnd();
    //window-2

    glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f (-0.22f, -0.02f);
    glVertex2f (-0.18f, -0.02f);
    glVertex2f (-0.18f, -0.06f);
    glVertex2f(-0.22f,-0.06f);
    glEnd();

    //carWheel-1
    glBegin(GL_LINE_STRIP);
    glColor3f (0.0, 0.0, 0.0);
    float xc,yc,xc1,yc1,angle4;

    xc = -0.16, yc = -0.10;
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xc,yc);
    for(angle4=1.0f;angle4<361.0;angle4+=0.2){
      double radius4 = 0.025;
      xc1 = xc + sin(angle4)*radius4;
      yc1 = yc + cos(angle4)*radius4;
      glVertex2f(xc1,yc1);

    }

    glEnd();



    //carWheel-2
    glBegin(GL_LINE_STRIP);
    glColor3f (0.0, 0.0, 0.0);
    float xca,yca,xca1,yca1,angle5;

    xca = -0.29, yca = -0.10;
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xca,yca);
    for(angle5=1.0f;angle5<361.0;angle5+=0.2){
      double radius5 = 0.025;
      xca1 = xca + sin(angle5)*radius5;
      yca1 = yca + cos(angle5)*radius5;
      glVertex2f(xca1,yca1);

    }

    glEnd();


//second_footpath
    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f (-0.5f, -0.38f);
    glVertex2f (0.5f, -0.38f);
    glVertex2f (0.5f, -0.42f);
    glVertex2f(-0.5f,-0.42f);
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
    glutCreateWindow ("Scenary Practice");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
