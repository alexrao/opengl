#include <GL/gl.h>
#include <GL/glut.h>


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glPolygonMode(GL_FRONT, GL_FILL); //设置正面为填充模式
    glPolygonMode(GL_BACK, GL_LINE); //设置反面为线型模式

    glFrontFace(GL_CCW);

    glBegin(GL_POLYGON);
    glVertex2f(-0.8f, -0.8f);
    glVertex2f(0.0f, -0.8f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.8f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, 0.8f);
    glVertex2f(0.8f, 0.8f);
    glVertex2f(0.8f, 0.0f);
    glEnd();

    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGBA|GLUT_SINGLE);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(500, 500);
    glutCreateWindow("OpenGL Test");

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}

