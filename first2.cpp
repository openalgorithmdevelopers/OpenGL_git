#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>

int SCREEN_WIDTH = 640;
int SCREEN_HEIGHT = 480;

void draw(void)
{
	glClearColor(0, 1, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)SCREEN_WIDTH, 0.0, (GLdouble)SCREEN_HEIGHT);
	/*

	type your code for drawing object here
	*/

/////////////////// drawing object /////////////////////

///////////////////////////////////////////////////////
	glFlush();
}
	
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(SCREEN_WIDTH,SCREEN_HEIGHT);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("First OpenGL Program");
	glutDisplayFunc(draw);
	glutMainLoop();
	return 0;
}
