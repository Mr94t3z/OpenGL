/* program-hallo.cpp
 * Pengenalan OpenGL
 */
#include <GL/freeglut.h>
#include <GL/glut.h>
void display(void)
{
    /* Membersihkan semua pixel di buffer(clear all pixels) */

    glClear(GL_COLOR_BUFFER_BIT);
    /* Menggambar polygon (rectangle) (0.25, 0.25, 0.0) dan (0.75, 0.75, 0.0)
     * Objek berwarna hijau
     */
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.25, 0.25, 0.0);
    glVertex3f(0.75, 0.25, 0.0);
    glVertex3f(0.75, 0.75, 0.0);
    glVertex3f(0.25, 0.75, 0.0);
    glEnd();
    /* Memulai proses penggambaran
     */
    glFlush();
}
void init(void)
{
    // Membuat warna background
    glClearColor(0.0, 0.0, 0.0, 0.0);
    /* inisialisasi nilai tampilan (viewing values) */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}
/* Deklarasi window size, position, dan display mode(single buffer and RGBA).
 * Pemanggilan routin inisialisasi.
 * Memanggil fungsi untuk manampilkan objek di layar
 */
int main(int argc, char **argv)
{
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(200, 100);
    glutCreateWindow("Program Pertamaku");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
