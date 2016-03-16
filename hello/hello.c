#include <GL/gl.h>
#include <GL/glut.h>


void display(void) 
{

    // Black background
    //glClearColor(0.0f,0.0f,0.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glRectf(-0.5f, -0.5f, 0.5f, 0.5f);
    //display i
    glFlush();

}

//Main program

int main(int argc, char **argv) 
{

    glutInit(&argc, argv);

    /*Setting up The Display
      / -RGB color model + Alpha Channel = GLUT_RGBA
      */
    glutInitDisplayMode(GLUT_RGBA|GLUT_SINGLE);

    //Configure Window Postion
    glutInitWindowPosition(100, 100);

    //Configure Window Size
    glutInitWindowSize(400,400);

    //Create Window
    glutCreateWindow("OpenGL Test");


    //Call to the displaying function
    glutDisplayFunc(display);

    // Loop require by OpenGL
    glutMainLoop();
    return 0;
}
