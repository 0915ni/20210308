# 20210308
week03-1
``C
///把第一個範例 OpenGL, 拿來改
///把第一個 Project變 *粗黑色* Active
#include <stdio.h>
int main(int argc, char** argv)
{
    printf("現在的 argc 是:%d\n",argc);
    for(int i=0; i<argc; i++)
    {
        printf("argv[%d]是:%s\n", i, argv[i]);
    }
}
``
week03-2
``c
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
``
week03-3
``c
#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);///實心茶壺
    glutSwapBuffers();///交換兩倍的buffers
}
int main(int argc, char ** argv)///???以前是 int main()
{
    glutInit( & argc, argv);///(1)GLUT初始設定
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///(2)顯示模式
    glutCreateWindow("08163070林育帆");///(3)開窗

    glutDisplayFunc(display);///(4)等一下要顯示的函式

    glutMainLoop();///(5)主要迴圈
}

``
