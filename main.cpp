/* Tugas 6 Komputer Grafik
 * Buat bangun 2D sebanyak 9 buah
 
   Kelas IF-9/2008
   Kelompok 3

   1. Rudy Hermawan   	10108466
   2. M. Ilham R       	10108428
   3. Syfa Nurul F      10108438
   4. Satya Angga	    10108434

   Rubah file Bangun2D.Selain_exe menjadi Bangun2D.exe
 */
 
#include <windows.h>
#include <GL\glut.h>
#include <math.h>

const double PI = 3.141592653589793;
int i, rad, jumlah_titik, x_tengah, y_tengah;

void display(void) {

    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(300, 0);
    glVertex2i(300, 600);

    glVertex2i(600, 0);
    glVertex2i(600, 600);

    glVertex2i(0, 200);
    glVertex2i(900, 200);

    glVertex2i(0, 400);
    glVertex2i(900, 400);

    glEnd();

    //1. Segitiga
    glBegin(GL_TRIANGLES);
    //warna kuning
    glColor3f(0.9, 0.8, 0.2);
    glVertex2i(50, 20);//A
    glVertex2i(250, 20);//B
    glVertex2i(50, 180);//C
    glEnd();
    glFlush();
    
    //2. Persegi
    glBegin(GL_QUADS);
    //warna hitam
    glColor3f(0.1, 0.1, 0.1);
    glVertex2i(300+100, 45);//A
    glVertex2i(300+190, 45);//B    
    glVertex2i(300+190, 135);//C
    glVertex2i(300+100, 135);//D
    glVertex2i(300+100, 45);//A'
    glEnd();
    glFlush();

    //3. Segienam
    glBegin(GL_LINE_STRIP);
    //warna merah
    glColor3f(1.0, 0.0, 0.0);
    glVertex2i(300 + 300 + 100, 20); //A
    glVertex2i(300 + 300 + 200, 20); //B
    glVertex2i(300 + 300 + 240, 100); //C
    glVertex2i(300 + 300 + 200, 185); //D
    glVertex2i(300 + 300 + 100, 185); //E
    glVertex2i(300 + 300 + 55, 100); //F
    glVertex2i(300 + 300 + 100, 20); //A'
    glEnd();
    glFlush();
    
    //4. Jajargenjang
    glBegin(GL_QUADS);
    //warna orange
    glColor3f(1.0, 0.6, 0.2);
    glVertex2i(50, 200 + 50); //A
    glVertex2i(200, 200 + 50); //B
    glVertex2i(250, 200 + 150); //C
    glVertex2i(100, 200 + 150); //D
    glVertex2i(20, 200 + 20); //A'
    glEnd();
    glFlush();
    
    //5. 2Lingkaran    
    glBegin(GL_LINE_LOOP); //lingkaran luar
    glColor3f(0.0, 0.0, 1.0);
    rad = 55;
    jumlah_titik = 30;
    x_tengah = 300+150;
    y_tengah = 200+100;
    for (i = 0; i <= 360; i++) {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + rad * cos(sudut);
        float y = y_tengah + rad * sin(sudut);
        glVertex2f(x, y);
    }
    
    glBegin(GL_LINE_LOOP); //lingkaran dalam
    glColor3f(1.0, 0.0, 1.0);
    rad = 35;
    jumlah_titik = 30;
    x_tengah = 300+150;
    y_tengah = 200+100;
    for (i = 0; i <= 360; i++) {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + rad * cos(sudut);
        float y = y_tengah + rad * sin(sudut);
        glVertex2f(x, y);
    }
    
    glEnd();
    glFlush();
    
    //6. Trapesium
    glBegin(GL_QUADS);
    glColor3f(0.5, 1.0, 0.9);
    glVertex2i(300+300+110,  200+20); //A
    glVertex2i(300+300+180, 200+50); //B
    glVertex2i(300+300+180, 200 + 150); //C
    glVertex2i(300+300+110, 200 + 180); //D
    glVertex2i(300+300+110, 200 + 20); //A'
    glEnd();
    glFlush();
    
    //7. persegi
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.9, 0.8);
    glVertex2i(50, 200+200+50); //A
    glVertex2i(250, 200+200+50); //B
    glVertex2i(250, 200+200+150); //C
    glVertex2i(50, 200+200+150); //D
    glVertex2i(50, 200+200+50); //A'
    glEnd();
    glFlush();
    
    //8. Layang-layang
    glBegin(GL_QUADS);
    //warna
    glColor3f(0.3, 0.7, 0.8);
    glVertex2i(300+150, 200+200+20); //A
    glVertex2i(300+200, 200+200+150); //B
    glVertex2i(300+150, 200+200+190); //C
    glVertex2i(300+100, 200+200+150); //D
    glVertex2i(300+150, 200+200+20); //A'
    glEnd();
    glFlush();
    
    //9. Panah
    glBegin(GL_LINE_LOOP);
    //warna
    glColor3f(0.7, 0.1, 0.3);
    glVertex2i(300+300+140, 200+200+80); //A
    glVertex2i(300+300+250, 200+200+80); //B
    glVertex2i(300+300+250, 200+200+120); //C
    glVertex2i(300+300+140, 200+200+120); //D
    glVertex2i(300+300+140, 200+200+150); //E
    glVertex2i(300+300+60, 200+200+100); //F
    glVertex2i(300+300+140, 200+200+55); //G
    glEnd();
    glFlush();
    
}

void init(void) {

    glClearColor(1.0, 1.0, 1.0, 0.0);
    glViewport(0, 0, 900, 600);
    gluOrtho2D(0.0, 900.0, 0.0, 600.0);
    glPointSize(5.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(900, 600);
    glutInitWindowPosition(200, 100);
    glutCreateWindow("Bangun Datar 2D");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
