#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>



void display(void)
{
    static GLubyte mask[32*32*4];
    FILE *fp = NULL;
    fp = fopen("test.bmp", "rb");

    if(fp)
    {
        if(fseek(fp, -(int)sizeof(mask), SEEK_END))
        {
            printf("Seek Err\n");
            exit(0);
        }

        int count = fread(mask, 1, sizeof(mask), fp);

        if(count <=0)
        {
            printf("Read Err\n");
        }
        fclose(fp);
    }
    glClear(GL_COLOR_BUFFER_BIT);
    glEnable(GL_POLYGON_STIPPLE);
    glPolygonStipple(mask);
    glRectf(-0.5f, -0.5f, 0.0f, 0.0f);
    glDisable(GL_POLYGON_STIPPLE);
    glRectf(0.0f, 0.0f, 0.5f, 0.5f);


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

