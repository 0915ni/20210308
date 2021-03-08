#include <GL/glut.h>

static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_TRIANGLES);

        glColor3f(1.0f, 0.0f, 0.0f);   glVertex2f(0.0f,   1.0f);
        glColor3f(0.0f, 1.0f, 0.0f);   glVertex2f(0.87f,  -0.5f);
        glColor3f(0.0f, 0.0f, 1.0f);   glVertex2f(-0.87f, -0.5f);

    glEnd();

    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    ///(1)�]�wGLUT����l��
    glutInit(&argc, argv);
    ///(2)��ܼҦ�
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    ///(3)�}GLUT����
    glutCreateWindow("GLUT Shapes");
    ///(4)��ܪ��禡
    glutDisplayFunc(display);
    ///(5)GLUT�D�n���j��A�d�����n����
    glutMainLoop();
}