#include <iostream>
#include <GL/freeglut.h>

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);

	glColor3ub(135, 206, 250);
	glBegin(GL_QUADS); //langit
	glVertex2f(0.0, 250);
	glVertex2f(0.0, 500);
	glVertex2f(500, 500);
	glVertex2f(500, 250);
	glEnd();

	glColor3ub(124, 252, 0);
	glBegin(GL_QUADS); //rumput 
	glVertex2f(0.0, 0.0);
	glVertex2f(500, 0);
	glVertex2f(500, 250);
	glVertex2f(0, 250);
	glEnd();

	glColor3ub(203, 65, 84);
	glBegin(GL_QUADS);// dinding utama 
	glVertex2f(70, 200);
	glVertex2f(200, 200);
	glVertex2f(200, 300);
	glVertex2f(70, 300);
	glEnd();

	glColor3ub(145, 45, 23);
	glBegin(GL_QUADS);// dinding depan
	glVertex2f(200, 200);
	glVertex2f(250, 200);
	glVertex2f(250, 300);
	glVertex2f(200, 300);
	glEnd();

	glColor3ub(169, 169, 169);
	glBegin(GL_POLYGON);// atap belakang
	glVertex2f(70, 300);
	glVertex2f(90, 350);
	glVertex2f(225, 350);
	glVertex2f(225, 300);
	glEnd();

	glColor3ub(128, 128, 128);
	glBegin(GL_TRIANGLES);// atap depan
	glVertex2f(200, 300);
	glVertex2f(225, 350);
	glVertex2f(250, 300);
	glEnd();

	glColor3ub(25, 189, 229);
	glBegin(GL_POLYGON);// sungai 
	glVertex2f(250, 0);
	glVertex2f(350, 250);
	glVertex2f(500, 250);
	glVertex2f(500, 0);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);// ikan WKWK
	glVertex2f(300, 100);
	glVertex2f(320, 120);
	glVertex2f(330, 110);
	glVertex2f(320, 100);
	glVertex2f(300, 110);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);// pasangan ikan WKWK
	glVertex2f(310, 120);
	glVertex2f(330, 140);
	glVertex2f(340, 130);
	glVertex2f(330, 120);
	glVertex2f(310, 130);
	glEnd();

	glColor3ub(255, 255, 255);
	glBegin(GL_LINES);// burung 
	glVertex2f(200, 400);
	glVertex2f(175, 420);
	glVertex2f(175, 420);
	glVertex2f(150, 410);

	glVertex2f(200, 400);
	glVertex2f(225, 420);
	glVertex2f(225, 420);
	glVertex2f(250, 410);
	glEnd();

	glColor3ub(255, 255, 255);
	glBegin(GL_LINES);// pasangan burung 
	glVertex2f(300, 450);
	glVertex2f(175, 420);
	glVertex2f(175, 420);
	glVertex2f(150, 410);

	glVertex2f(200, 400);
	glVertex2f(225, 420);
	glVertex2f(225, 420);
	glVertex2f(250, 410);
	glEnd();


	glFlush();
}

void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 499.0, 0.0, 499.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Points");
	glutDisplayFunc(display);

	myinit();
	glutMainLoop();

	return 0;
}