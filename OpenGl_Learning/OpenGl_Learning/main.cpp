#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <iostream>
#include <stdlib.h>

void display();
void reshape(int, int);
void init(){
    glClearColor(0.302, 0.816, 0.882, 1.0); //setting color
}
int main(int argc, char**argv)
{
    glutInit(&argc, argv); //to access all glut methods
    glutInitDisplayMode(GLUT_RGB); //color mode

    glutInitWindowPosition(200,100); // specify position of window
    glutInitWindowSize(500,500); //size of the window

    glutCreateWindow("My Shooting Game Interface"); // name of the window
    glutDisplayFunc(display); //this statement always after  glutCreateWindow

    glutReshapeFunc(reshape);//called when the window is first created, then when it is maximized minimized
    init();


    glutMainLoop(); //once this loop starts the program starts and terminates on program termination
    //need display callback for it to work
}
void display(){
    //clear then reset then draw
    //first clear the area - duster - clear before working
     //frame buffer- area in memory - corresponds to frame in screen (ONE UNIT CORRESPONTS TO PIXEL IN SCREEN)
    glClear(GL_COLOR_BUFFER_BIT);
    //GL_COLOR_BUFFER_BIT flag for frame buffer
    glLoadIdentity(); //resets all the transformations in current matrix - reset any rotation or transformation etc


    glPointSize(10.0);
    //DRAW

    //glBegin(GL_POINTS);
    //glBegin(GL_TRIANGLES);
    glBegin(GL_POLYGON);
    //VERTICES
    //glVertex2f(5,5); //POINT
    //glVertex2f(-5,-5); //POINT
   // glVertex2f(0.0,5.0); //TRIANGLE
    //glVertex2f(4.0,-3.0); //TRIANGLE
   // glVertex2f(-4.0,-3.0); //TRIANGLE

   glVertex2f(3.0,3.0); //POINT
   glVertex2f(-2.0,3.0); //TRIANGLE
   glVertex2f(-2.0,-2.0); //TRIANGLE
   glVertex2f(3.0,-2.0); //TRIANGLE
    //END
    glEnd();

    glFlush(); // to actually display frame buffer on screen
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

