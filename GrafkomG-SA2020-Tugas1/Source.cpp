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

	glColor3ub(255, 255, 255);
	glBegin(GL_QUADS);// jendela 1
	glVertex2f(90, 220);
	glVertex2f(110, 220);
	glVertex2f(110, 240);
	glVertex2f(90, 240);
	glEnd();

	glColor3ub(255, 255, 255);
	glBegin(GL_QUADS);// jendela 2
	glVertex2f(150, 220);
	glVertex2f(170, 220);
	glVertex2f(170, 240);
	glVertex2f(150, 240);
	glEnd();

	glColor3ub(145, 45, 23);
	glBegin(GL_QUADS);// dinding depan
	glVertex2f(200, 200);
	glVertex2f(250, 200);
	glVertex2f(250, 300);
	glVertex2f(200, 300);
	glEnd();

	glColor3ub(255, 255, 255);
	glBegin(GL_QUADS);//pintu
	glVertex2f(210, 205);
	glVertex2f(225, 205);
	glVertex2f(225, 230);
	glVertex2f(210, 230);
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
	glVertex2f(275, 470);
	glVertex2f(275, 470);
	glVertex2f(250, 460);

	glVertex2f(300, 450);
	glVertex2f(325, 470);
	glVertex2f(325, 470);
	glVertex2f(350, 460);
	glEnd();

	glColor3ub(193, 154, 107);
	glBegin(GL_POLYGON);//perahu
	glVertex2f(400, 250);
	glVertex2f(450, 250);
	glVertex2f(460, 280);
	glVertex2f(390, 280);
	glEnd();

	glColor3ub(193, 154, 44);
	glBegin(GL_POLYGON);//perahu tiang
	glVertex2f(424, 280);
	glVertex2f(426, 280);
	glVertex2f(426, 300);
	glVertex2f(455, 315);
	glVertex2f(426, 330);
	glVertex2f(424, 330);
	glEnd();

	glColor3ub(118, 92, 72);
	glBegin(GL_POLYGON);//pohon
	glVertex2f(50, 50);
	glVertex2f(55, 50);
	glVertex2f(55, 140);
	glVertex2f(50, 140);
	glEnd();

	glColor3ub(10, 200, 20);
	glBegin(GL_POLYGON);//daun kanan 1
	glVertex2f(52.5, 70);
	glVertex2f(90, 70);
	glVertex2f(52.5, 110);
	glEnd();

	glColor3ub(10, 200, 20);
	glBegin(GL_POLYGON);//daun kanan 2
	glVertex2f(52.5, 90);
	glVertex2f(85, 90);
	glVertex2f(52.5, 130);
	glEnd();

	glColor3ub(10, 200, 20);
	glBegin(GL_POLYGON);//daun kanan 3
	glVertex2f(52.5, 110);
	glVertex2f(80, 110);
	glVertex2f(52.5, 140);
	glEnd();

	glColor3ub(10, 200, 20);
	glBegin(GL_POLYGON);//daun kanan 4
	glVertex2f(52.5, 125);
	glVertex2f(75, 125);
	glVertex2f(52.5, 155);
	glEnd();

	glColor3ub(30, 200, 40);
	glBegin(GL_POLYGON);//daun kanan 1
	glVertex2f(52.5, 70);
	glVertex2f(10, 70);
	glVertex2f(52.5, 110);
	glEnd();

	glColor3ub(30, 200, 40);
	glBegin(GL_POLYGON);//daun kanan 2
	glVertex2f(52.5, 90);
	glVertex2f(15, 90);
	glVertex2f(52.5, 130);
	glEnd();

	glColor3ub(30, 200, 40);
	glBegin(GL_POLYGON);//daun kanan 3
	glVertex2f(52.5, 110);
	glVertex2f(20, 110);
	glVertex2f(52.5, 140);
	glEnd();

	glColor3ub(30, 200, 40);
	glBegin(GL_POLYGON);//daun kanan 4
	glVertex2f(52.5, 125);
	glVertex2f(25, 125);
	glVertex2f(52.5, 155);
	glEnd();

	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);//tiang kotak surat
	glVertex2f(270, 200);
	glVertex2f(275, 200);
	glVertex2f(275, 230);
	glVertex2f(270, 230);
	glEnd();

	glColor3ub(250, 250, 250);
	glBegin(GL_POLYGON);//kotak surat
	glVertex2f(260, 230);
	glVertex2f(285, 230);
	glVertex2f(285, 240);
	glVertex2f(260, 240);
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