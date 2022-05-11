/* program-garis.cpp
 * Pengenalan OpenGL
 */
#include <GL/freeglut.h>

#include <GL/glut.h>

void display(void) {
    //membersihkan buffer
    glClear(GL_COLOR_BUFFER_BIT);
    //menggambar garis
    glBegin(GL_LINES);
    glColor3f(1.0, 0.0, 0.0); //merah
    glVertex2f(10.0, 10.0);
    glColor3f(0.0, 0.0, 1.0); //biru
    glVertex2f(10.0, 110.0);
    glColor3f(0.0, 1.0, 0.0); //hijau
    glVertex2f(100.0, 110.0);
    glColor3f(1.0, 1.0, 0.0); //kuning
    glVertex2f(100.0, 10.0);
    glEnd();
    glFlush();
}
void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 160.0, 0.0, 120.0);
}
void init(void) {

    //membuat background warna merah
    glClearColor(0.0, 0.0, 0.0, 0.0);
    //set viewport dengan nilai 320 x 240, inisialisasi windowsize
    glViewport(0, 0, 320, 240);
    // set the 2D clipping area
    gluOrtho2D(0.0, 160.0, 0.0, 120.0);
    glPointSize(5.0);
}
/* Deklarasi window size, position, dan display mode(single buffer and RGBA).
 * Pemanggilan routin inisialisasi.
 * Memanggil fungsi untuk manampilkan objek di layar
 */
int main(int argc, char ** argv) {
    glutInit( & argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(320, 240);
    glutInitWindowPosition(200, 100);
    glutCreateWindow("Program layar");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}