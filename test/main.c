#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>

const GLfloat Pi = 3.1415926f;
//void display(void)
//{
//    int i;
//    glClear(GL_COLOR_BUFFER_BIT);
//    //glRectf(-0.5f, -0.5f, 0.8f, 0.8f);
//
//    glBegin(GL_POINTS);
//
//    glVertex2f(0, 0);
//
//    for(i=0; i<n; i++)
//    {
//        //glVertex2f(R*cos(2*Pi/n*i), R*sin(2*Pi/n*i));
//        glVertex2f(R*cos(2*Pi/n*i), R*sin(2*Pi/n*i));
//        //glVertex2f(R*cos(angle), R/n*i);
//    }
//    glVertex2f(R*cos(0), R*sin(0));
//    glEnd();
//
//    // Display i
//    glFlush();
//
//}


void display(void)
{
    GLfloat a = 1/(2-2*cos(72*Pi/180));
    GLfloat bx = a *cos(18*Pi/180);
    GLfloat by = a *sin(18*Pi/180);

    GLfloat cy = -a *sin(18*Pi/180);

    GLfloat PointA[2] = {0, a},
            PointB[2] = {bx, by},
            PointC[2] = {0.5, cy},
            PointD[2] = {-0.5, cy},
            PointE[2] = {-bx, by};


    glClear(GL_COLOR_BUFFER_BIT);
    //glRectf(-0.5f, -0.5f, 0.8f, 0.8f);

    glBegin(GL_LINE_LOOP);

    glVertex2fv(PointA);
    glVertex2fv(PointC);
    glVertex2fv(PointE);
    glVertex2fv(PointB);
    glVertex2fv(PointD);

    glEnd();

    // Display i
    glFlush();

}


int main(int argc, char **argv)
{
    glutInit(&argc, argv);

    // Setting up the Display
    // Set color mode + Alpha Channel = GLUT_RGBA
    glutInitDisplayMode(GLUT_RGBA|GLUT_SINGLE);

    // Configure Window Position
    glutInitWindowPosition(100, 100);

    // Configure Window Szie
    glutInitWindowSize(400, 400);

    // Create Window
    glutCreateWindow("OpenGL Test");

    // Call to the displaying function
    glutDisplayFunc(display);

    // loop require by OpenGL
    glutMainLoop();

    return 0;
}
