/* program-layar.cpp
 * Pengenalan OpenGL
 */
#include <GL/freeglut.h>

#include <GL/glut.h>

void display(void)
{
    // membersihkan buffer
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}

void init(void)
{
    // membuat background warna merah
    glClearColor(1.0, 0.0, 0.0, 0.0);
    // set viewport dengan nilai 320 x 240, inisialisasi windowsize
    glViewport(0, 0, 320, 240);
    // set the 2D clipping area
    gluOrtho2D(0.0, 160.0, 0.0, 120.0);
}

/* Deklarasi window size, position, dan display mode(single buffer and RGBA).
 * Pemanggilan routin inisialisasi.
 * Memanggil fungsi untuk manampilkan objek di layar
 */

int main(int argc, char **argv)
{
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(320, 240);
    glutInitWindowPosition(200, 100);
    glutCreateWindow("Program layar");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

/*
Buat program-garis.cpp dengan:

nano program-garis.cpp

Kemudian paste code dibawah ini dan simpan.

Jalankan program dengan command berikut:

g++ program-garis.cpp -lglut -lGL -lGLEW -lGLU -o OpenGLGaris

Kemudian buka dengan command berikut:
./OpenGLGaris
*/