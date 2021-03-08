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
    ///(1)設定GLUT的初始化
    glutInit(&argc, argv);
    ///(2)顯示模式
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    ///(3)開GLUT視窗
    glutCreateWindow("GLUT Shapes");
    ///(4)顯示的函式
    glutDisplayFunc(display);
    ///(5)GLUT主要的迴圈，卡住不要結束
    glutMainLoop();
}
