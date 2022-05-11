#include <stdlib.h>
#include <GL/glut.h>

void drawQuad()
{

	glBegin(GL_POLYGON);
	glVertex2f(77., 70.);
	glVertex2f(80., 146.);
	glVertex2f(99., 90.);
	glVertex2f(157., 90.);
	glVertex2f(110., 55.);
	glVertex2f(128., 1.);
	glVertex2f(80., 34.);
	glVertex2f(32., 1.);
	glVertex2f(54., 55.);
	glVertex2f(3., 90.);
	glVertex2f(63., 90.);
	glVertex2f(80., 146.);

	glEnd();
	glFlush();
}

void renderScene(void)
{

	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glTranslatef(-500, -500, 0);
	glColor3f(0, 1, 0); // green color
	drawQuad();
	glPopMatrix();

	glPushMatrix();
	glRotatef(30, 0, 0, 1);
	glColor3f(0, 0, 1); // blue color
	drawQuad();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-450, -350, 0);
	glRotatef(30, 0, 0, 1);
	glColor3f(0, 1, 1); // cyan color
	glScalef(0.5, 0.5, 0);
	drawQuad();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-320, -420, 0);
	glRotatef(30, 0, 0, 1);
	glColor3f(1, 0, 0); // red color
	drawQuad();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-200, -350, 0);
	glColor3f(1, 0, 1); // magenta color
	glScalef(0.5, 0.5, 0);
	drawQuad();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-200, -310, 0);
	glRotatef(45, 0, 0, 1);
	glColor3f(0, 1, 0); // green color
	glScalef(1.5, 1.5, 0);
	drawQuad();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-150, -100, 0);
	glColor3f(1, 1, 0); // yellow color
	drawQuad();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-150, 0, 0);
	glScalef(0.3, 0.3, 0);
	glColor3f(1, 1, 1); // white color
	drawQuad();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(320, 320, 0);
	glRotatef(45, 0, 0, 1);
	glColor3f(0, 1, 1); // cyan color
	drawQuad();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(320, 280, 0);
	glScalef(0.5, 0.5, 0);
	glColor3f(1, 0, 0); // red color
	drawQuad();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(150, 115, 0);
	glScalef(0.3, 0.3, 0);
	glColor3f(1, 0, 1); // pink color
	drawQuad();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(450, 400, 0);
	glScalef(0.6, 0.6, 0);
	glRotatef(45, 0, 0, 1);
	glColor3f(1, 0, 1); // pink color
	drawQuad();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(180, 400, 0);
	glScalef(0.3, 0.3, 0);
	glColor3f(1, 1, 0); // yellow color
	drawQuad();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-100, 115, 0);
	glColor3f(0, 1, 0); // green color
	glScalef(0.5, 0.5, 0);
	drawQuad();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-50, -180, 0);
	glScalef(0.4, 0.4, 0);
	glColor3f(1, 1, 1); // white color
	drawQuad();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(100, 90, 0);
	glRotatef(45, 0, 0, 1);
	glColor3f(1, 0, 1); // magenta color
	glScalef(1.2, 1.2, 0);
	drawQuad();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-400, -200, 0);
	glScalef(0.4, 0.4, 0);
	glColor3f(0, 0, 1); // blue color
	drawQuad();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(50, 0, 0);
	glScalef(0.4, 0.4, 0);
	glColor3f(1, 0, 0); // red color
	drawQuad();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 200, 0);
	glRotatef(30, 0, 0, 1);
	glColor3f(0, 1, 0); // green color
	glScalef(0.4, 0.4, 0);
	drawQuad();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(150, 300, 0);
	glRotatef(-45, 0, 0, 1);
	glColor3f(1, 1, 1); // white color
	drawQuad();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(100, 300, 0);
	glScalef(0.5, 0.5, 0);
	glColor3f(1, 1, 0); // yellow color
	drawQuad();
	glPopMatrix();

	glFlush();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(480, 480);
	glutCreateWindow("Implementasi Transformasi Window-View");
	gluOrtho2D(-640., 640., -640., 640.);
	glutDisplayFunc(renderScene);
	glutMainLoop();
}
