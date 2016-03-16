#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>

const GLfloat factor = 0.05f;

void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINES);

    // x 轴
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    // y 轴
    glVertex2f(0.0f, -1.0f);
    glVertex2f(0.0f, 1.0f);

    glEnd();

    glBegin(GL_LINE_STRIP);
    for(GLfloat x=-1.0f/factor; x<1.0f/factor; x += 0.01f)
    {
        glVertex2f(x*factor, 5*sin(x)*factor);
    }
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
    glutInitWindowSize(700, 400);

    // Create Window
    glutCreateWindow("OpenGL Test");

    // Call to the displaying function
    glutDisplayFunc(display);

    // loop require by OpenGL
    glutMainLoop();

    return 0;
}
