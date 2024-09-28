#include <iostream>
#include <GL/GL.h>
#include <GL/glu.h>
#include<gl/glut.h>

void display(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glutSwapBuffers();
}

void init() {
    glClearColor(0.3,0.3,0.3,0);
    gluOrtho2D(0,1024,512,0);
}

int main(int argc, char* argv[]){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA);
    glutInitWindowSize(500,500);
    glutCreateWindow("");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}