#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <iostream>
#include <stdlib.h>

float playerPosX = 0.0f;
float playerPosY = -6.0f;
const float playerSpeed = 0.6f;


void display();

void keyboard(unsigned char key, int x, int y);
void reshape(int, int);
void init(){
    glClearColor(0.09, 0.07, 0.17, 1.0); //setting color
}
int main(int argc, char**argv)
{
    glutInit(&argc, argv); //to access all glut methods
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE); //color mode

    //glutInitWindowPosition(200,100); // specify position of window
    glutInitWindowSize(500,500); //size of the window

    glutCreateWindow("My Shooting Game Interface"); // name of the window
    glutDisplayFunc(display); //this statement always after  glutCreateWindow

    glutKeyboardFunc(keyboard);
    glutReshapeFunc(reshape);//called when the window is first created, then when it is maximized minimized
    init();

    glutMainLoop(); //once this loop starts the program starts and terminates on program termination
    //need display callback for it to work
    return 0;
}
void display(){
    //clear then reset then draw
    //first clear the area - duster - clear before working
     //frame buffer- area in memory - corresponds to frame in screen (ONE UNIT CORRESPONTS TO PIXEL IN SCREEN)
    glClear(GL_COLOR_BUFFER_BIT);
    //GL_COLOR_BUFFER_BIT flag for frame buffer
    glLoadIdentity(); //resets all the transformations in current matrix - reset any rotation or transformation etc

    //DRAW


    glPushMatrix();
    glTranslatef(playerPosX, playerPosY, 0.0f);
    glBegin(GL_POLYGON);
    //VERTICES
    glColor3f(0.91,0,0.39);
   glVertex2f(-1.0,1.0);
   glVertex2f(-1.0,-1.0);
   glVertex2f(1.0,1.0);
   glVertex2f(1.0,-1.0);
    //END
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.94,0.93,0.93);
    glVertex2f(0,3.0);
    glColor3d(0.85,0.85,0.85);
   glVertex2f(-2.0,1.0);
   glVertex2f(2.0,1.0);
   glEnd();
   glBegin(GL_POLYGON);
   glColor3d(0.98,0.58,0.09);
   glVertex2f(-3.0,2.0);
   glVertex2f(-3.0,1.0);
   glColor3d(1,0.85,0.40);
   glVertex2f(-2.0,1.0);
   glVertex2f(-2.0,2.0);
   glEnd();
   glBegin(GL_POLYGON);
   glColor3d(0.98,0.58,0.09);
   glVertex2f(2.0,2.0);
   glVertex2f(2.0,1.0);
   glColor3d(1,0.85,0.40);
   glVertex2f(3.0,1.0);
   glVertex2f(3.0,2.0);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3d(0.92,0.27,0.37);
   glVertex2f(2.54,2.98);
   glVertex2f(2.0,2.0);
   glVertex2f(3.0,2.0);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3d(0.92,0.27,0.37);
   glVertex2f(-2.48,3.0);
   glVertex2f(-3.0,2.0);
   glVertex2f(-2.0,2.0);

   glEnd();


   glBegin(GL_POLYGON);
   glColor3d(1.0,0.55,0.07);
   glVertex2f(0.0,-0.5);
   glVertex2f(-0.66,-1.5);
   glVertex2f(0.0,-2.35);
   glVertex2f(0.66,-1.5);

   glEnd();
glPopMatrix();

//********ENEMY***************
glPushMatrix();
   glScalef(-0.5f, -0.5f, 1.0f);
   glTranslatef(playerPosX-8, playerPosY-8, 0.0f);
    glBegin(GL_POLYGON);
    //VERTICES
    glColor3f(0.85,0,0.22);
   glVertex2f(-1.0,1.0);
   glVertex2f(-1.0,-1.0);
   glVertex2f(1.0,1.0);
   glVertex2f(1.0,-1.0);
    //END
    glEnd();
    glBegin(GL_POLYGON);
    glColor3d(0.85,0.57,0.09);
    glVertex2f(0,3.0);
   glVertex2f(-2.0,1.0);
   glVertex2f(2.0,1.0);
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f(0.85,0,0.22);
   glVertex2f(-3.0,2.0);
   glVertex2f(-3.0,1.0);

   glVertex2f(-2.0,1.0);
   glVertex2f(-2.0,2.0);
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f(0.85,0,0.22);
   glVertex2f(2.0,2.0);
   glVertex2f(2.0,1.0);

   glVertex2f(3.0,1.0);
   glVertex2f(3.0,2.0);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3d(0.85,0.57,0.09);
   glVertex2f(2.54,2.98);
   glVertex2f(2.0,2.0);
   glVertex2f(3.0,2.0);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3d(0.85,0.57,0.09);
   glVertex2f(-2.48,3.0);
   glVertex2f(-3.0,2.0);
   glVertex2f(-2.0,2.0);

   glEnd();


   glBegin(GL_POLYGON);
   glColor3d(1.0,0.55,0.07);
   glVertex2f(0.0,-0.5);
   glVertex2f(-0.66,-1.5);
   glVertex2f(0.0,-2.35);
   glVertex2f(0.66,-1.5);

   glEnd();
glPopMatrix();
   //********ENEMY-2***********
glPushMatrix();
   glScalef(-0.5f, -0.5f, 1.0f);
   glTranslatef(playerPosX+5, playerPosY-3, 0.0f);
    glBegin(GL_POLYGON);
    //VERTICES
    glColor3f(0.85,0,0.22);
   glVertex2f(-1.0,1.0);
   glVertex2f(-1.0,-1.0);
   glVertex2f(1.0,1.0);
   glVertex2f(1.0,-1.0);
    //END
    glEnd();
    glBegin(GL_POLYGON);
    glColor3d(0.85,0.57,0.09);
    glVertex2f(0,3.0);
   glVertex2f(-2.0,1.0);
   glVertex2f(2.0,1.0);
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f(0.85,0,0.22);
   glVertex2f(-3.0,2.0);
   glVertex2f(-3.0,1.0);

   glVertex2f(-2.0,1.0);
   glVertex2f(-2.0,2.0);
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f(0.85,0,0.22);
   glVertex2f(2.0,2.0);
   glVertex2f(2.0,1.0);

   glVertex2f(3.0,1.0);
   glVertex2f(3.0,2.0);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3d(0.85,0.57,0.09);
   glVertex2f(2.54,2.98);
   glVertex2f(2.0,2.0);
   glVertex2f(3.0,2.0);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3d(0.85,0.57,0.09);
   glVertex2f(-2.48,3.0);
   glVertex2f(-3.0,2.0);
   glVertex2f(-2.0,2.0);

   glEnd();


   glBegin(GL_POLYGON);
   glColor3d(1.0,0.55,0.07);
   glVertex2f(0.0,-0.5);
   glVertex2f(-0.66,-1.5);
   glVertex2f(0.0,-2.35);
   glVertex2f(0.66,-1.5);

   glEnd();

   glPopMatrix();

   glutSwapBuffers();
   //glFlush(); // to actually display frame buffer on screen
}
void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'a':
        playerPosX -= playerSpeed;
        break;
    case 'd':
        playerPosX += playerSpeed;
        break;
    case 'w':
        playerPosY += playerSpeed;
        break;
    case 's':
        playerPosY -= playerSpeed;
        break;
    default:
        break;
    }
     glutPostRedisplay();
}


void reshape(int w, int h){
    //set viewport and then projection
    //viewport rectangular clipped area that will be displayed
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION); //ONLY SWITCH TO PROJECTION MATRIX WHEN YOU NEED TO CHANGE THE PROJECTION
     glLoadIdentity();//resents current matrix - parameters of projection matrix
     gluOrtho2D(-10,10,-10,10);
     glMatrixMode(GL_MODELVIEW); //DEFAULT - SHOULD ALWAYS BE IN THIS MATRIX

}


