#include<Windows.h>
#include<GL/glut.h>

int is_depth;

void objek2(void) {
	//tiang dan lampu 1
	glBegin(GL_POLYGON);//t.depan
	glColor3f(0, 0, 0);
	glVertex3f(-110, 10.0, 60.0);
	glVertex3f(-108, 10.0, 60.0);
	glVertex3f(-108, -16.0, 60.0);
	glVertex3f(-110, -16.0, 60.0);
	glEnd();

	glBegin(GL_POLYGON);//t.belakng
	glColor3f(0, 0, 0);
	glVertex3f(-110, 10.0, 58.0);
	glVertex3f(-108, 10.0, 58.0);
	glVertex3f(-108, -16.0, 58.0);
	glVertex3f(-110, -16.0, 58.0);
	glEnd();

	glBegin(GL_POLYGON);//t.kanan
	glColor3f(0, 0, 0);
	glVertex3f(-108, 10.0, 60.0);
	glVertex3f(-108, 10.0, 58.0);
	glVertex3f(-108, -16.0, 58.0);
	glVertex3f(-108, -16.0, 60.0);
	glEnd();

	glBegin(GL_POLYGON);//t.kanan
	glColor3f(0, 0, 0);
	glVertex3f(-110, 10.0, 60.0);
	glVertex3f(-110, 10.0, 58.0);
	glVertex3f(-110, -16.0, 58.0);
	glVertex3f(-110, -16.0, 60.0);
	glEnd();

	glBegin(GL_POLYGON);//kedepan t. atas
	glColor3f(0, 0, 0);
	glVertex3f(-110, 10.0, 58.0);
	glVertex3f(-108, 10.0, 58.0);
	glVertex3f(-108, 10.0, 65.0);
	glVertex3f(-110, 10.0, 65.0);
	glEnd();

	glBegin(GL_POLYGON);//kedepan t. bawah
	glColor3f(0, 0, 0);
	glVertex3f(-110, 9.0, 58.0);
	glVertex3f(-108, 9.0, 58.0);
	glVertex3f(-108, 9.0, 65.0);
	glVertex3f(-110, 9.0, 65.0);
	glEnd();

	glBegin(GL_POLYGON);//kedepan t. kanan
	glColor3f(0, 0, 0);
	glVertex3f(-108, 10.0, 58.0);
	glVertex3f(-108, 9.0, 58.0);
	glVertex3f(-108, 9.0, 65.0);
	glVertex3f(-108, 10.0, 65.0);
	glEnd();

	glBegin(GL_POLYGON);//kedepan t. kiri
	glColor3f(0, 0, 0);
	glVertex3f(-110, 10.0, 58.0);
	glVertex3f(-110, 9.0, 58.0);
	glVertex3f(-110, 9.0, 65.0);
	glVertex3f(-110, 10.0, 65.0);
	glEnd();

	glBegin(GL_POLYGON);//lampu t.kiri
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-109.5, 9.5, 62.0);
	glVertex3f(-109.5, 8.5, 62.0);
	glVertex3f(-109.5, 8.5, 64.0);
	glVertex3f(-109.5, 9.5, 64.0);
	glEnd();

	glBegin(GL_POLYGON);//lampu t.kanan
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-108.5, 9.5, 62.0);
	glVertex3f(-108.5, 8.5, 62.0);
	glVertex3f(-108.5, 8.5, 64.0);
	glVertex3f(-108.5, 9.5, 64.0);
	glEnd();

	glBegin(GL_POLYGON);//lampu t.bawah
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-109.5, 8.5, 62.0);
	glVertex3f(-108.5, 8.5, 62.0);
	glVertex3f(-108.5, 8.5, 64.0);
	glVertex3f(-109.5, 8.5, 64.0);
	glEnd();

	glBegin(GL_POLYGON);//lampu t.depan
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-109.5, 9.5, 64.0);
	glVertex3f(-108.5, 9.5, 64.0);
	glVertex3f(-108.5, 8.5, 64.0);
	glVertex3f(-109.5, 8.5, 64.0);
	glEnd();

	//tiang dan lampu 2
	glBegin(GL_POLYGON);//t.depan
	glColor3f(0, 0, 0);
	glVertex3f(90, 10.0, 60.0);
	glVertex3f(88, 10.0, 60.0);
	glVertex3f(88, -16.0, 60.0);
	glVertex3f(90, -16.0, 60.0);
	glEnd();

	glBegin(GL_POLYGON);//t.belakng
	glColor3f(0, 0, 0);
	glVertex3f(90, 10.0, 58.0);
	glVertex3f(88, 10.0, 58.0);
	glVertex3f(88, -16.0, 58.0);
	glVertex3f(90, -16.0, 58.0);
	glEnd();

	glBegin(GL_POLYGON);//t.kanan
	glColor3f(0, 0, 0);
	glVertex3f(88, 10.0, 60.0);
	glVertex3f(88, 10.0, 58.0);
	glVertex3f(88, -16.0, 58.0);
	glVertex3f(88, -16.0, 60.0);
	glEnd();

	glBegin(GL_POLYGON);//t.kanan
	glColor3f(0, 0, 0);
	glVertex3f(90, 10.0, 60.0);
	glVertex3f(90, 10.0, 58.0);
	glVertex3f(90, -16.0, 58.0);
	glVertex3f(90, -16.0, 60.0);
	glEnd();

	glBegin(GL_POLYGON);//kedepan t. atas
	glColor3f(0, 0, 0);
	glVertex3f(90, 10.0, 58.0);
	glVertex3f(88, 10.0, 58.0);
	glVertex3f(88, 10.0, 65.0);
	glVertex3f(90, 10.0, 65.0);
	glEnd();

	glBegin(GL_POLYGON);//kedepan t. bawah
	glColor3f(0, 0, 0);
	glVertex3f(90, 9.0, 58.0);
	glVertex3f(88, 9.0, 58.0);
	glVertex3f(88, 9.0, 65.0);
	glVertex3f(90, 9.0, 65.0);
	glEnd();

	glBegin(GL_POLYGON);//kedepan t. kanan
	glColor3f(0, 0, 0);
	glVertex3f(88, 10.0, 58.0);
	glVertex3f(88, 9.0, 58.0);
	glVertex3f(88, 9.0, 65.0);
	glVertex3f(88, 10.0, 65.0);
	glEnd();

	glBegin(GL_POLYGON);//kedepan t. kiri
	glColor3f(0, 0, 0);
	glVertex3f(90, 10.0, 58.0);
	glVertex3f(90, 9.0, 58.0);
	glVertex3f(90, 9.0, 65.0);
	glVertex3f(90, 10.0, 65.0);
	glEnd();

	glBegin(GL_POLYGON);//lampu t.kiri
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(89.5, 9.5, 62.0);
	glVertex3f(89.5, 8.5, 62.0);
	glVertex3f(89.5, 8.5, 64.0);
	glVertex3f(89.5, 9.5, 64.0);
	glEnd();

	glBegin(GL_POLYGON);//lampu t.kanan
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(88.5, 9.5, 62.0);
	glVertex3f(88.5, 8.5, 62.0);
	glVertex3f(88.5, 8.5, 64.0);
	glVertex3f(88.5, 9.5, 64.0);
	glEnd();

	glBegin(GL_POLYGON);//lampu t.bawah
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(89.5, 8.5, 62.0);
	glVertex3f(88.5, 8.5, 62.0);
	glVertex3f(88.5, 8.5, 64.0);
	glVertex3f(89.5, 8.5, 64.0);
	glEnd();

	glBegin(GL_POLYGON);//lampu t.depan
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(89.5, 9.5, 64.0);
	glVertex3f(88.5, 9.5, 64.0);
	glVertex3f(88.5, 8.5, 64.0);
	glVertex3f(89.5, 8.5, 64.0);
	glEnd();
}

void objek1(void) {
	//fondasi
	//alas
	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(155, -20.0, 40.0);
	glVertex3f(170, -20.0, 40.0);
	glVertex3f(170, -20.0, 0.0);
	glVertex3f(155, -20.0, 0.0);
	glEnd();

	//atas
	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(155, -18.0, 40.0);
	glVertex3f(170, -18.0, 40.0);
	glVertex3f(170, -18.0, 0.0);
	glVertex3f(155, -18.0, 0.0);
	glEnd();

	//kanan
	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(170, -20.0, 0.0);
	glVertex3f(170, -20.0, 40.0);
	glVertex3f(170, -18.0, 40.0);
	glVertex3f(170, -18.0, 0.0);
	glEnd();

	//kiri
	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(155, -20.0, 0.0);
	glVertex3f(155, -20.0, 40.0);
	glVertex3f(155, -18.0, 40.0);
	glVertex3f(155, -18.0, 0.0);
	glEnd();//fondasi

	//rumahporal(t.depan)
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(161, -18.0, 35.0);
	glVertex3f(164, -18, 35.0);
	glVertex3f(164, -10, 35.0);
	glVertex3f(161, -10.0, 35.0);
	glEnd();

	//rumahporal(t.belakang)
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(161, -18.0, 32.0);
	glVertex3f(164, -18, 32.0);
	glVertex3f(164, -10, 32.0);
	glVertex3f(161, -10.0, 32.0);
	glEnd();

	//rumahporal (t.kanan)
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(164, -10.0, 35.0);
	glVertex3f(164, -18.0, 35.0);
	glVertex3f(164, -18.0, 32.0);
	glVertex3f(164, -10.0, 32.0);
	glEnd();

	//rumahporal (t.kiri)
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(161, -10.0, 35.0);
	glVertex3f(161, -18.0, 35.0);
	glVertex3f(161, -18.0, 32.0);
	glVertex3f(161, -10.0, 32.0);
	glEnd();

	//rumahporal (t.atas)
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(161, -10.0, 32.0);
	glVertex3f(164, -10.0, 32.0);
	glVertex3f(164, -10.0, 35.0);
	glVertex3f(161, -10.0, 35.0);
	glEnd();

	//portal (t.depan)
	glBegin(GL_POLYGON);
	glColor3f(0.80, 0.80, 0);
	glVertex3f(164, -13.0, 34.0);
	glVertex3f(184, -13.0, 34.0);
	glVertex3f(184, -14.0, 34.0);
	glVertex3f(164, -14.0, 34.0);
	glEnd();

	//portal (t.belakang)
	glBegin(GL_POLYGON);
	glColor3f(0.80, 0.80, 0);
	glVertex3f(164, -13.0, 33.0);
	glVertex3f(184, -13.0, 33.0);
	glVertex3f(184, -14.0, 33.0);
	glVertex3f(164, -14.0, 33.0);
	glEnd();

	//portal (t.bawah)
	glBegin(GL_POLYGON);
	glColor3f(0.80, 0.80, 0);
	glVertex3f(164, -14.0, 33.0);
	glVertex3f(184, -14.0, 33.0);
	glVertex3f(184, -14.0, 34.0);
	glVertex3f(164, -14.0, 34.0);
	glEnd();

	//portal (t.atas)
	glBegin(GL_POLYGON);
	glColor3f(0.80, 0.80, 0);
	glVertex3f(164, -13.0, 33.0);
	glVertex3f(184, -13.0, 33.0);
	glVertex3f(184, -13.0, 34.0);
	glVertex3f(164, -13.0, 34.0);
	glEnd();

	//post.1(t.depan)
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(165, -18.0, 25.0);
	glVertex3f(166, -18, 25.0);
	glVertex3f(166, -10, 25.0);
	glVertex3f(165, -10.0, 25.0);
	glEnd();

	//post.1(t.belakang)
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(165, -18.0, 24.0);
	glVertex3f(166, -18, 24.0);
	glVertex3f(166, -5.0, 24.0);
	glVertex3f(165, -5.0, 24.0);
	glEnd();

	//post.1(t.kanan)
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(166, -5.0, 24.0);
	glVertex3f(166, -5.0, 25.0);
	glVertex3f(166, -18, 25.0);
	glVertex3f(166, -18.0, 24.0);
	glEnd();

	//post.1(t.kiri)
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(165, -5.0, 24.0);
	glVertex3f(165, -5.0, 25.0);
	glVertex3f(165, -18, 25.0);
	glVertex3f(165, -18.0, 24.0);
	glEnd();

	//post.1(t.atas)
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(165, -5.0, 25.0);
	glVertex3f(166, -5.0, 25.0);
	glVertex3f(166, -5.0, 24.0);
	glVertex3f(165, -5.0, 24.0);
	glEnd();//

	//post.2(t.depan)
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(160, -18.0, 25.0);
	glVertex3f(161, -18, 25.0);
	glVertex3f(161, -5, 25.0);
	glVertex3f(160, -5.0, 25.0);
	glEnd();

	//post.2(t.belakang)
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(160, -18.0, 24.0);
	glVertex3f(161, -18, 24.0);
	glVertex3f(161, -5.0, 24.0);
	glVertex3f(160, -5, 24.0);
	glEnd();

	//post.2(t.kanan)
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(161, -5.0, 24.0);
	glVertex3f(161, -5.0, 25.0);
	glVertex3f(161, -18, 25.0);
	glVertex3f(161, -18.0, 24.0);
	glEnd();

	//post.2(t.kiri)
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(160, -5.0, 24.0);
	glVertex3f(160, -5.0, 25.0);
	glVertex3f(160, -18, 25.0);
	glVertex3f(160, -18.0, 24.0);
	glEnd();

	//post.2(t.atas)
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(160, -5.0, 25.0);
	glVertex3f(161, -5.0, 25.0);
	glVertex3f(161, -5.0, 24.0);
	glVertex3f(160, -5.0, 24.0);
	glEnd();//

	//post.3(t.depan)
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(160, -18.0, 20.0);
	glVertex3f(161, -18, 20.0);
	glVertex3f(161, -5, 20.0);
	glVertex3f(160, -5.0, 20.0);
	glEnd();

	//post.3(t.belakang)
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(160, -18.0, 19.0);
	glVertex3f(161, -18, 19.0);
	glVertex3f(161, -5.0, 19.0);
	glVertex3f(160, -5, 19.0);
	glEnd();

	//post.3(t.kanan)
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(161, -5.0, 19.0);
	glVertex3f(161, -5.0, 20.0);
	glVertex3f(161, -18, 20.0);
	glVertex3f(161, -18.0, 19.0);
	glEnd();

	//post.3(t.kiri)
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(160, -5.0, 19.0);
	glVertex3f(160, -5.0, 20.0);
	glVertex3f(160, -18, 20.0);
	glVertex3f(160, -18.0, 19.0);
	glEnd();

	//post.3(t.atas)
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(160, -5.0, 20.0);
	glVertex3f(161, -5.0, 20.0);
	glVertex3f(161, -5.0, 19.0);
	glVertex3f(160, -5.0, 19.0);
	glEnd();//

	//post.4(t.depan)
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(165, -18.0, 20.0);
	glVertex3f(166, -18, 20.0);
	glVertex3f(166, -5, 20.0);
	glVertex3f(165, -5.0, 20.0);
	glEnd();

	//post.4(t.belakang)
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(165, -18.0, 19.0);
	glVertex3f(166, -18, 19.0);
	glVertex3f(166, -5.0, 19.0);
	glVertex3f(165, -5, 19.0);
	glEnd();

	//post.4(t.kanan)
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(166, -5.0, 19.0);
	glVertex3f(166, -5.0, 20.0);
	glVertex3f(166, -18, 20.0);
	glVertex3f(166, -18.0, 19.0);
	glEnd();

	//post.4(t.kiri)
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(165, -5.0, 19.0);
	glVertex3f(165, -5.0, 20.0);
	glVertex3f(165, -18, 20.0);
	glVertex3f(165, -18.0, 19.0);
	glEnd();

	//post.4(t.atas)
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(165, -5.0, 20.0);
	glVertex3f(166, -5.0, 20.0);
	glVertex3f(166, -5.0, 19.0);
	glVertex3f(165, -5.0, 19.0);
	glEnd();//

	//kanan
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(166, -10.0, 20.0);
	glVertex3f(166, -10.0, 25.0);
	glVertex3f(166, -18, 25.0);
	glVertex3f(166, -18.0, 20.0);
	glEnd();

	//kiri
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(160, -10.0, 20.0);
	glVertex3f(160, -10.0, 25.0);
	glVertex3f(160, -18, 25.0);
	glVertex3f(160, -18.0, 20.0);
	glEnd();

	//depan
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(160, -18.0, 25.0);
	glVertex3f(165, -18.0, 25.0);
	glVertex3f(165, -10.0, 25.0);
	glVertex3f(160, -10.0, 25.0);
	glEnd();

	//belakang
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(160, -18.0, 19.0);
	glVertex3f(165, -18.0, 19.0);
	glVertex3f(165, -10.0, 19.0);
	glVertex3f(160, -10.0, 19.0);
	glEnd();

	//fondasi atap
	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(159, -5.0, 26.0);
	glVertex3f(167, -5.0, 26.0);
	glVertex3f(167, -5.0, 18.0);
	glVertex3f(159, -5.0, 18.0);
	glEnd();//

	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(159, -4.0, 26.0);
	glVertex3f(167, -4.0, 26.0);
	glVertex3f(167, -4.0, 18.0);
	glVertex3f(159, -4.0, 18.0);
	glEnd();//

	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(167, -5.0, 18.0);
	glVertex3f(167, -4.0, 18.0);
	glVertex3f(167, -4.0, 26.0);
	glVertex3f(167, -5.0, 26.0);
	glEnd();//

	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(159, -5.0, 18.0);
	glVertex3f(159, -4.0, 18.0);
	glVertex3f(159, -4.0, 26.0);
	glVertex3f(159, -5.0, 26.0);
	glEnd();////

	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(159, -4.0, 26.0);
	glVertex3f(167, -4.0, 26.0);
	glVertex3f(167, -5.0, 26.0);
	glVertex3f(159, -5.0, 26.0);
	glEnd();//

	glBegin(GL_POLYGON);
	glColor3f(0, 0.75, 1);
	glVertex3f(159, -4.0, 18.0);
	glVertex3f(167, -4.0, 18.0);
	glVertex3f(167, -5.0, 18.0);
	glVertex3f(159, -5.0, 18.0);
	glEnd();//
}

void objek3(void) {
	//1
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(-100.0, -20.0, 45.0);
	glVertex3f(-100.0, -5.0, 45.0);
	glVertex3f(-98.0, -5.0, 45.0);
	glVertex3f(-98.0, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(-100.0, -20.0, 46.0);
	glVertex3f(-100.0, -5.0, 46.0);
	glVertex3f(-98.0, -5.0, 46.0);
	glVertex3f(-98.0, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-98, -20, 46.0);
	glVertex3f(-98, -5, 46.0);
	glVertex3f(-98, -5, 45.0);
	glVertex3f(-98, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-100, -20.0, 46.0);
	glVertex3f(-100, -5, 46.0);
	glVertex3f(-100, -5, 45.0);
	glVertex3f(-100, -20.0, 45.0);
	glEnd();

	//2
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(-96, -20.0, 45.0);
	glVertex3f(-96, -5.0, 45.0);
	glVertex3f(-94.0, -5.0, 45.0);
	glVertex3f(-94.0, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(-96, -20.0, 46.0);
	glVertex3f(-96, -5.0, 46.0);
	glVertex3f(-94.0, -5.0, 46.0);
	glVertex3f(-94.0, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-94, -20, 46.0);
	glVertex3f(-94, -5, 46.0);
	glVertex3f(-94, -5, 45.0);
	glVertex3f(-94, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-96, -20.0, 46.0);
	glVertex3f(-96, -5, 46.0);
	glVertex3f(-96, -5, 45.0);
	glVertex3f(-96, -20.0, 45.0);
	glEnd();

	//3
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(-92, -20.0, 45.0);
	glVertex3f(-92, -5.0, 45.0);
	glVertex3f(-90, -5.0, 45.0);
	glVertex3f(-90, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(-92, -20.0, 46.0);
	glVertex3f(-92, -5.0, 46.0);
	glVertex3f(-90, -5.0, 46.0);
	glVertex3f(-90, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-90, -20, 46.0);
	glVertex3f(-90, -5, 46.0);
	glVertex3f(-90, -5, 45.0);
	glVertex3f(-90, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-92, -20.0, 46.0);
	glVertex3f(-92, -5, 46.0);
	glVertex3f(-92, -5, 45.0);
	glVertex3f(-92, -20.0, 45.0);
	glEnd();

	//4
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(-88, -20.0, 45.0);
	glVertex3f(-88, -5.0, 45.0);
	glVertex3f(-86, -5.0, 45.0);
	glVertex3f(-86, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(-88, -20.0, 46.0);
	glVertex3f(-88, -5.0, 46.0);
	glVertex3f(-86, -5.0, 46.0);
	glVertex3f(-86, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-86, -20, 46.0);
	glVertex3f(-86, -5, 46.0);
	glVertex3f(-86, -5, 45.0);
	glVertex3f(-86, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-88, -20.0, 46.0);
	glVertex3f(-88, -5, 46.0);
	glVertex3f(-88, -5, 45.0);
	glVertex3f(-88, -20.0, 45.0);
	glEnd();

	//5
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(-84, -20.0, 45.0);
	glVertex3f(-84, -5.0, 45.0);
	glVertex3f(-82, -5.0, 45.0);
	glVertex3f(-82, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(-84, -20.0, 46.0);
	glVertex3f(-84, -5.0, 46.0);
	glVertex3f(-82, -5.0, 46.0);
	glVertex3f(-82, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-82, -20, 46.0);
	glVertex3f(-82, -5, 46.0);
	glVertex3f(-82, -5, 45.0);
	glVertex3f(-82, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-84, -20.0, 46.0);
	glVertex3f(-84, -5, 46.0);
	glVertex3f(-84, -5, 45.0);
	glVertex3f(-84, -20.0, 45.0);
	glEnd();

	//6
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(-80, -20.0, 45.0);
	glVertex3f(-80, -5.0, 45.0);
	glVertex3f(-78, -5.0, 45.0);
	glVertex3f(-78, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(-80, -20.0, 46.0);
	glVertex3f(-80, -5.0, 46.0);
	glVertex3f(-78, -5.0, 46.0);
	glVertex3f(-78, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-78, -20, 46.0);
	glVertex3f(-78, -5, 46.0);
	glVertex3f(-78, -5, 45.0);
	glVertex3f(-78, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-80, -20.0, 46.0);
	glVertex3f(-80, -5, 46.0);
	glVertex3f(-80, -5, 45.0);
	glVertex3f(-80, -20.0, 45.0);
	glEnd();

	//7
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(-76, -20.0, 45.0);
	glVertex3f(-76, -5.0, 45.0);
	glVertex3f(-74, -5.0, 45.0);
	glVertex3f(-74, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(-76, -20.0, 46.0);
	glVertex3f(-76, -5.0, 46.0);
	glVertex3f(-74, -5.0, 46.0);
	glVertex3f(-74, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-74, -20, 46.0);
	glVertex3f(-74, -5, 46.0);
	glVertex3f(-74, -5, 45.0);
	glVertex3f(-74, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-76, -20.0, 46.0);
	glVertex3f(-76, -5, 46.0);
	glVertex3f(-76, -5, 45.0);
	glVertex3f(-76, -20.0, 45.0);
	glEnd();

	//8
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(-72, -20.0, 45.0);
	glVertex3f(-72, -5.0, 45.0);
	glVertex3f(-70, -5.0, 45.0);
	glVertex3f(-70, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(-72, -20.0, 46.0);
	glVertex3f(-72, -5.0, 46.0);
	glVertex3f(-70, -5.0, 46.0);
	glVertex3f(-70, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-70, -20, 46.0);
	glVertex3f(-70, -5, 46.0);
	glVertex3f(-70, -5, 45.0);
	glVertex3f(-70, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-72, -20.0, 46.0);
	glVertex3f(-72, -5, 46.0);
	glVertex3f(-72, -5, 45.0);
	glVertex3f(-72, -20.0, 45.0);
	glEnd();

	//9
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(-68, -20.0, 45.0);
	glVertex3f(-68, -5.0, 45.0);
	glVertex3f(-66, -5.0, 45.0);
	glVertex3f(-66, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(-68, -20.0, 46.0);
	glVertex3f(-68, -5.0, 46.0);
	glVertex3f(-66, -5.0, 46.0);
	glVertex3f(-66, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-66, -20, 46.0);
	glVertex3f(-66, -5, 46.0);
	glVertex3f(-66, -5, 45.0);
	glVertex3f(-66, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-68, -20.0, 46.0);
	glVertex3f(-68, -5, 46.0);
	glVertex3f(-68, -5, 45.0);
	glVertex3f(-68, -20.0, 45.0);
	glEnd();

	//10
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(-64, -20.0, 45.0);
	glVertex3f(-64, -5.0, 45.0);
	glVertex3f(-62, -5.0, 45.0);
	glVertex3f(-62, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(-64, -20.0, 46.0);
	glVertex3f(-64, -5.0, 46.0);
	glVertex3f(-62, -5.0, 46.0);
	glVertex3f(-62, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-62, -20, 46.0);
	glVertex3f(-62, -5, 46.0);
	glVertex3f(-62, -5, 45.0);
	glVertex3f(-62, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-64, -20.0, 46.0);
	glVertex3f(-64, -5, 46.0);
	glVertex3f(-64, -5, 45.0);
	glVertex3f(-64, -20.0, 45.0);
	glEnd();

	//11
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(-60, -20.0, 45.0);
	glVertex3f(-60, -5.0, 45.0);
	glVertex3f(-58, -5.0, 45.0);
	glVertex3f(-58, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(-60, -20.0, 46.0);
	glVertex3f(-60, -5.0, 46.0);
	glVertex3f(-58, -5.0, 46.0);
	glVertex3f(-58, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-58, -20, 46.0);
	glVertex3f(-58, -5, 46.0);
	glVertex3f(-58, -5, 45.0);
	glVertex3f(-58, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-60, -20.0, 46.0);
	glVertex3f(-60, -5, 46.0);
	glVertex3f(-60, -5, 45.0);
	glVertex3f(-60, -20.0, 45.0);
	glEnd();

	//12
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(-56, -20.0, 45.0);
	glVertex3f(-56, -5.0, 45.0);
	glVertex3f(-54, -5.0, 45.0);
	glVertex3f(-54, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(-56, -20.0, 46.0);
	glVertex3f(-56, -5.0, 46.0);
	glVertex3f(-54, -5.0, 46.0);
	glVertex3f(-54, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-54, -20, 46.0);
	glVertex3f(-54, -5, 46.0);
	glVertex3f(-54, -5, 45.0);
	glVertex3f(-54, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-56, -20.0, 46.0);
	glVertex3f(-56, -5, 46.0);
	glVertex3f(-56, -5, 45.0);
	glVertex3f(-56, -20.0, 45.0);
	glEnd();

	//13
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(-52, -20.0, 45.0);
	glVertex3f(-52, -5.0, 45.0);
	glVertex3f(-50, -5.0, 45.0);
	glVertex3f(-50, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(-52, -20.0, 46.0);
	glVertex3f(-52, -5.0, 46.0);
	glVertex3f(-50, -5.0, 46.0);
	glVertex3f(-50, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-50, -20, 46.0);
	glVertex3f(-50, -5, 46.0);
	glVertex3f(-50, -5, 45.0);
	glVertex3f(-50, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-52, -20.0, 46.0);
	glVertex3f(-52, -5, 46.0);
	glVertex3f(-52, -5, 45.0);
	glVertex3f(-52, -20.0, 45.0);
	glEnd();

	//14
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(-48, -20.0, 45.0);
	glVertex3f(-48, -5.0, 45.0);
	glVertex3f(-46, -5.0, 45.0);
	glVertex3f(-46, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(-48, -20.0, 46.0);
	glVertex3f(-48, -5.0, 46.0);
	glVertex3f(-46, -5.0, 46.0);
	glVertex3f(-46, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-46, -20, 46.0);
	glVertex3f(-46, -5, 46.0);
	glVertex3f(-46, -5, 45.0);
	glVertex3f(-46, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-48, -20.0, 46.0);
	glVertex3f(-48, -5, 46.0);
	glVertex3f(-48, -5, 45.0);
	glVertex3f(-48, -20.0, 45.0);
	glEnd();

	//15
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(-44, -20.0, 45.0);
	glVertex3f(-44, -5.0, 45.0);
	glVertex3f(-42, -5.0, 45.0);
	glVertex3f(-42, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(-44, -20.0, 46.0);
	glVertex3f(-44, -5.0, 46.0);
	glVertex3f(-42, -5.0, 46.0);
	glVertex3f(-42, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-42, -20, 46.0);
	glVertex3f(-42, -5, 46.0);
	glVertex3f(-42, -5, 45.0);
	glVertex3f(-42, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-44, -20.0, 46.0);
	glVertex3f(-44, -5, 46.0);
	glVertex3f(-44, -5, 45.0);
	glVertex3f(-44, -20.0, 45.0);
	glEnd();

	//16
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(-40, -20.0, 45.0);
	glVertex3f(-40, -5.0, 45.0);
	glVertex3f(-38, -5.0, 45.0);
	glVertex3f(-38, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(-40, -20.0, 46.0);
	glVertex3f(-40, -5.0, 46.0);
	glVertex3f(-38, -5.0, 46.0);
	glVertex3f(-38, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-38, -20, 46.0);
	glVertex3f(-38, -5, 46.0);
	glVertex3f(-38, -5, 45.0);
	glVertex3f(-38, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-40, -20.0, 46.0);
	glVertex3f(-40, -5, 46.0);
	glVertex3f(-40, -5, 45.0);
	glVertex3f(-40, -20.0, 45.0);
	glEnd();

	//17
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(-36, -20.0, 45.0);
	glVertex3f(-36, -5.0, 45.0);
	glVertex3f(-34, -5.0, 45.0);
	glVertex3f(-34, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(-36, -20.0, 46.0);
	glVertex3f(-36, -5.0, 46.0);
	glVertex3f(-34, -5.0, 46.0);
	glVertex3f(-34, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-34, -20, 46.0);
	glVertex3f(-34, -5, 46.0);
	glVertex3f(-34, -5, 45.0);
	glVertex3f(-34, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-36, -20.0, 46.0);
	glVertex3f(-36, -5, 46.0);
	glVertex3f(-36, -5, 45.0);
	glVertex3f(-36, -20.0, 45.0);
	glEnd();

	//18
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(-32, -20.0, 45.0);
	glVertex3f(-32, -5.0, 45.0);
	glVertex3f(-30, -5.0, 45.0);
	glVertex3f(-30, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(-32, -20.0, 46.0);
	glVertex3f(-32, -5.0, 46.0);
	glVertex3f(-30, -5.0, 46.0);
	glVertex3f(-30, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-30, -20, 46.0);
	glVertex3f(-30, -5, 46.0);
	glVertex3f(-30, -5, 45.0);
	glVertex3f(-30, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-32, -20.0, 46.0);
	glVertex3f(-32, -5, 46.0);
	glVertex3f(-32, -5, 45.0);
	glVertex3f(-32, -20.0, 45.0);
	glEnd();

	//19
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(-28, -20.0, 45.0);
	glVertex3f(-28, -5.0, 45.0);
	glVertex3f(-26, -5.0, 45.0);
	glVertex3f(-26, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(-28, -20.0, 46.0);
	glVertex3f(-28, -5.0, 46.0);
	glVertex3f(-26, -5.0, 46.0);
	glVertex3f(-26, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-26, -20, 46.0);
	glVertex3f(-26, -5, 46.0);
	glVertex3f(-26, -5, 45.0);
	glVertex3f(-26, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-28, -20.0, 46.0);
	glVertex3f(-28, -5, 46.0);
	glVertex3f(-28, -5, 45.0);
	glVertex3f(-28, -20.0, 45.0);
	glEnd();


	//20

	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(-24, -20.0, 45.0);
	glVertex3f(-24, -5.0, 45.0);
	glVertex3f(-22, -5.0, 45.0);
	glVertex3f(-22, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(-24, -20.0, 46.0);
	glVertex3f(-24, -5.0, 46.0);
	glVertex3f(-22, -5.0, 46.0);
	glVertex3f(-22, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-22, -20, 46.0);
	glVertex3f(-22, -5, 46.0);
	glVertex3f(-22, -5, 45.0);
	glVertex3f(-22, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-24, -20.0, 46.0);
	glVertex3f(-24, -5, 46.0);
	glVertex3f(-24, -5, 45.0);
	glVertex3f(-24, -20.0, 45.0);
	glEnd();

	//21
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(-20, -20.0, 45.0);
	glVertex3f(-20, -5.0, 45.0);
	glVertex3f(-18, -5.0, 45.0);
	glVertex3f(-18, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(-20, -20.0, 46.0);
	glVertex3f(-20, -5.0, 46.0);
	glVertex3f(-18, -5.0, 46.0);
	glVertex3f(-18, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-18, -20, 46.0);
	glVertex3f(-18, -5, 46.0);
	glVertex3f(-18, -5, 45.0);
	glVertex3f(-18, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-20, -20.0, 46.0);
	glVertex3f(-20, -5, 46.0);
	glVertex3f(-20, -5, 45.0);
	glVertex3f(-20, -20.0, 45.0);
	glEnd();


	//22
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(-16, -20.0, 45.0);
	glVertex3f(-16, -5.0, 45.0);
	glVertex3f(-14, -5.0, 45.0);
	glVertex3f(-14, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(-16, -20.0, 46.0);
	glVertex3f(-16, -5.0, 46.0);
	glVertex3f(-14, -5.0, 46.0);
	glVertex3f(-14, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-14, -20, 46.0);
	glVertex3f(-14, -5, 46.0);
	glVertex3f(-14, -5, 45.0);
	glVertex3f(-14, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-16, -20.0, 46.0);
	glVertex3f(-16, -5, 46.0);
	glVertex3f(-16, -5, 45.0);
	glVertex3f(-16, -20.0, 45.0);
	glEnd();

	//23
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(-12, -20.0, 45.0);
	glVertex3f(-12, -5.0, 45.0);
	glVertex3f(-10, -5.0, 45.0);
	glVertex3f(-10, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(-12, -20.0, 46.0);
	glVertex3f(-12, -5.0, 46.0);
	glVertex3f(-10, -5.0, 46.0);
	glVertex3f(-10, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-10, -20, 46.0);
	glVertex3f(-10, -5, 46.0);
	glVertex3f(-10, -5, 45.0);
	glVertex3f(-10, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-12, -20.0, 46.0);
	glVertex3f(-12, -5, 46.0);
	glVertex3f(-12, -5, 45.0);
	glVertex3f(-12, -20.0, 45.0);
	glEnd();

	//24

	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(-8, -20.0, 45.0);
	glVertex3f(-8, -5.0, 45.0);
	glVertex3f(-6, -5.0, 45.0);
	glVertex3f(-6, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(-8, -20.0, 46.0);
	glVertex3f(-8, -5.0, 46.0);
	glVertex3f(-6, -5.0, 46.0);
	glVertex3f(-6, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-6, -20, 46.0);
	glVertex3f(-6, -5, 46.0);
	glVertex3f(-6, -5, 45.0);
	glVertex3f(-6, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-8, -20.0, 46.0);
	glVertex3f(-8, -5, 46.0);
	glVertex3f(-8, -5, 45.0);
	glVertex3f(-8, -20.0, 45.0);
	glEnd();

	//25
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(-4, -20.0, 45.0);
	glVertex3f(-4, -5.0, 45.0);
	glVertex3f(-2, -5.0, 45.0);
	glVertex3f(-2, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(-4, -20.0, 46.0);
	glVertex3f(-4, -5.0, 46.0);
	glVertex3f(-2, -5.0, 46.0);
	glVertex3f(-2, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-2, -20, 46.0);
	glVertex3f(-2, -5, 46.0);
	glVertex3f(-2, -5, 45.0);
	glVertex3f(-2, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-4, -20.0, 46.0);
	glVertex3f(-4, -5, 46.0);
	glVertex3f(-4, -5, 45.0);
	glVertex3f(-4, -20.0, 45.0);
	glEnd();

	//26

	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(0, -20.0, 45.0);
	glVertex3f(0, -5.0, 45.0);
	glVertex3f(2, -5.0, 45.0);
	glVertex3f(2, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(0, -20.0, 46.0);
	glVertex3f(0, -5.0, 46.0);
	glVertex3f(2, -5.0, 46.0);
	glVertex3f(2, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(2, -20, 46.0);
	glVertex3f(2, -5, 46.0);
	glVertex3f(2, -5, 45.0);
	glVertex3f(2, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0, -20.0, 46.0);
	glVertex3f(0, -5, 46.0);
	glVertex3f(0, -5, 45.0);
	glVertex3f(0, -20.0, 45.0);
	glEnd();

	//27

	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(4, -20.0, 45.0);
	glVertex3f(4, -5.0, 45.0);
	glVertex3f(6, -5.0, 45.0);
	glVertex3f(6, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(4, -20.0, 46.0);
	glVertex3f(4, -5.0, 46.0);
	glVertex3f(6, -5.0, 46.0);
	glVertex3f(6, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(6, -20, 46.0);
	glVertex3f(6, -5, 46.0);
	glVertex3f(6, -5, 45.0);
	glVertex3f(6, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(4, -20.0, 46.0);
	glVertex3f(4, -5, 46.0);
	glVertex3f(4, -5, 45.0);
	glVertex3f(4, -20.0, 45.0);
	glEnd();

	//28

	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(8, -20.0, 45.0);
	glVertex3f(8, -5.0, 45.0);
	glVertex3f(10, -5.0, 45.0);
	glVertex3f(10, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(8, -20.0, 46.0);
	glVertex3f(8, -5.0, 46.0);
	glVertex3f(10, -5.0, 46.0);
	glVertex3f(10, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(10, -20, 46.0);
	glVertex3f(10, -5, 46.0);
	glVertex3f(10, -5, 45.0);
	glVertex3f(10, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(8, -20.0, 46.0);
	glVertex3f(8, -5, 46.0);
	glVertex3f(8, -5, 45.0);
	glVertex3f(8, -20.0, 45.0);
	glEnd();

	//29

	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(12, -20.0, 45.0);
	glVertex3f(12, -5.0, 45.0);
	glVertex3f(14, -5.0, 45.0);
	glVertex3f(14, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(12, -20.0, 46.0);
	glVertex3f(12, -5.0, 46.0);
	glVertex3f(14, -5.0, 46.0);
	glVertex3f(14, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(14, -20, 46.0);
	glVertex3f(14, -5, 46.0);
	glVertex3f(14, -5, 45.0);
	glVertex3f(14, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(12, -20.0, 46.0);
	glVertex3f(12, -5, 46.0);
	glVertex3f(12, -5, 45.0);
	glVertex3f(12, -20.0, 45.0);
	glEnd();

	//30

	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(16, -20.0, 45.0);
	glVertex3f(16, -5.0, 45.0);
	glVertex3f(18, -5.0, 45.0);
	glVertex3f(18, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(16, -20.0, 46.0);
	glVertex3f(16, -5.0, 46.0);
	glVertex3f(18, -5.0, 46.0);
	glVertex3f(18, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(18, -20, 46.0);
	glVertex3f(18, -5, 46.0);
	glVertex3f(18, -5, 45.0);
	glVertex3f(18, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(16, -20.0, 46.0);
	glVertex3f(16, -5, 46.0);
	glVertex3f(16, -5, 45.0);
	glVertex3f(16, -20.0, 45.0);
	glEnd();

	//31 
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(20, -20.0, 45.0);
	glVertex3f(20, -5.0, 45.0);
	glVertex3f(22, -5.0, 45.0);
	glVertex3f(22, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(20, -20.0, 46.0);
	glVertex3f(20, -5.0, 46.0);
	glVertex3f(22, -5.0, 46.0);
	glVertex3f(22, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(22, -20, 46.0);
	glVertex3f(22, -5, 46.0);
	glVertex3f(22, -5, 45.0);
	glVertex3f(22, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(20, -20.0, 46.0);
	glVertex3f(20, -5, 46.0);
	glVertex3f(20, -5, 45.0);
	glVertex3f(20, -20.0, 45.0);
	glEnd();

	//32
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(24, -20.0, 45.0);
	glVertex3f(24, -5.0, 45.0);
	glVertex3f(26, -5.0, 45.0);
	glVertex3f(26, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(24, -20.0, 46.0);
	glVertex3f(24, -5.0, 46.0);
	glVertex3f(26, -5.0, 46.0);
	glVertex3f(26, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(26, -20, 46.0);
	glVertex3f(26, -5, 46.0);
	glVertex3f(26, -5, 45.0);
	glVertex3f(26, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(24, -20.0, 46.0);
	glVertex3f(24, -5, 46.0);
	glVertex3f(24, -5, 45.0);
	glVertex3f(24, -20.0, 45.0);
	glEnd();

	//33

	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(28, -20.0, 45.0);
	glVertex3f(28, -5.0, 45.0);
	glVertex3f(30, -5.0, 45.0);
	glVertex3f(30, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(28, -20.0, 46.0);
	glVertex3f(28, -5.0, 46.0);
	glVertex3f(30, -5.0, 46.0);
	glVertex3f(30, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(30, -20, 46.0);
	glVertex3f(30, -5, 46.0);
	glVertex3f(30, -5, 45.0);
	glVertex3f(30, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(28, -20.0, 46.0);
	glVertex3f(28, -5, 46.0);
	glVertex3f(28, -5, 45.0);
	glVertex3f(28, -20.0, 45.0);
	glEnd();

	//34

	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(32, -20.0, 45.0);
	glVertex3f(32, -5.0, 45.0);
	glVertex3f(34, -5.0, 45.0);
	glVertex3f(34, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(32, -20.0, 46.0);
	glVertex3f(32, -5.0, 46.0);
	glVertex3f(34, -5.0, 46.0);
	glVertex3f(34, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(34, -20, 46.0);
	glVertex3f(34, -5, 46.0);
	glVertex3f(34, -5, 45.0);
	glVertex3f(34, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(32, -20.0, 46.0);
	glVertex3f(32, -5, 46.0);
	glVertex3f(32, -5, 45.0);
	glVertex3f(32, -20.0, 45.0);
	glEnd();

	//35
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(36, -20.0, 45.0);
	glVertex3f(36, -5.0, 45.0);
	glVertex3f(38, -5.0, 45.0);
	glVertex3f(38, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(36, -20.0, 46.0);
	glVertex3f(36, -5.0, 46.0);
	glVertex3f(38, -5.0, 46.0);
	glVertex3f(38, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(38, -20, 46.0);
	glVertex3f(38, -5, 46.0);
	glVertex3f(38, -5, 45.0);
	glVertex3f(38, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(36, -20.0, 46.0);
	glVertex3f(36, -5, 46.0);
	glVertex3f(36, -5, 45.0);
	glVertex3f(36, -20.0, 45.0);
	glEnd();

	//36

	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(40, -20.0, 45.0);
	glVertex3f(40, -5.0, 45.0);
	glVertex3f(42, -5.0, 45.0);
	glVertex3f(42, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(40, -20.0, 46.0);
	glVertex3f(40, -5.0, 46.0);
	glVertex3f(42, -5.0, 46.0);
	glVertex3f(42, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(42, -20, 46.0);
	glVertex3f(42, -5, 46.0);
	glVertex3f(42, -5, 45.0);
	glVertex3f(42, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(40, -20.0, 46.0);
	glVertex3f(40, -5, 46.0);
	glVertex3f(40, -5, 45.0);
	glVertex3f(40, -20.0, 45.0);
	glEnd();

	//37

	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(44, -20.0, 45.0);
	glVertex3f(44, -5.0, 45.0);
	glVertex3f(46, -5.0, 45.0);
	glVertex3f(46, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(44, -20.0, 46.0);
	glVertex3f(44, -5.0, 46.0);
	glVertex3f(46, -5.0, 46.0);
	glVertex3f(46, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(46, -20, 46.0);
	glVertex3f(46, -5, 46.0);
	glVertex3f(46, -5, 45.0);
	glVertex3f(46, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(44, -20.0, 46.0);
	glVertex3f(44, -5, 46.0);
	glVertex3f(44, -5, 45.0);
	glVertex3f(44, -20.0, 45.0);
	glEnd();

	//38

	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(48, -20.0, 45.0);
	glVertex3f(48, -5.0, 45.0);
	glVertex3f(50, -5.0, 45.0);
	glVertex3f(50, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(48, -20.0, 46.0);
	glVertex3f(48, -5.0, 46.0);
	glVertex3f(50, -5.0, 46.0);
	glVertex3f(50, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(50, -20, 46.0);
	glVertex3f(50, -5, 46.0);
	glVertex3f(50, -5, 45.0);
	glVertex3f(50, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(48, -20.0, 46.0);
	glVertex3f(48, -5, 46.0);
	glVertex3f(48, -5, 45.0);
	glVertex3f(48, -20.0, 45.0);
	glEnd();

	//39


	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(52, -20.0, 45.0);
	glVertex3f(52, -5.0, 45.0);
	glVertex3f(54, -5.0, 45.0);
	glVertex3f(54, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(52, -20.0, 46.0);
	glVertex3f(52, -5.0, 46.0);
	glVertex3f(54, -5.0, 46.0);
	glVertex3f(54, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(54, -20, 46.0);
	glVertex3f(54, -5, 46.0);
	glVertex3f(54, -5, 45.0);
	glVertex3f(54, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(52, -20.0, 46.0);
	glVertex3f(52, -5, 46.0);
	glVertex3f(52, -5, 45.0);
	glVertex3f(52, -20.0, 45.0);
	glEnd();

	//40

	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(56, -20.0, 45.0);
	glVertex3f(56, -5.0, 45.0);
	glVertex3f(58, -5.0, 45.0);
	glVertex3f(58, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(56, -20.0, 46.0);
	glVertex3f(56, -5.0, 46.0);
	glVertex3f(58, -5.0, 46.0);
	glVertex3f(58, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(58, -20, 46.0);
	glVertex3f(58, -5, 46.0);
	glVertex3f(58, -5, 45.0);
	glVertex3f(58, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(56, -20.0, 46.0);
	glVertex3f(56, -5, 46.0);
	glVertex3f(56, -5, 45.0);
	glVertex3f(56, -20.0, 45.0);
	glEnd();

	//41

	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(60, -20.0, 45.0);
	glVertex3f(60, -5.0, 45.0);
	glVertex3f(62, -5.0, 45.0);
	glVertex3f(62, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(60, -20.0, 46.0);
	glVertex3f(60, -5.0, 46.0);
	glVertex3f(62, -5.0, 46.0);
	glVertex3f(62, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(62, -20, 46.0);
	glVertex3f(62, -5, 46.0);
	glVertex3f(62, -5, 45.0);
	glVertex3f(62, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(60, -20.0, 46.0);
	glVertex3f(60, -5, 46.0);
	glVertex3f(60, -5, 45.0);
	glVertex3f(60, -20.0, 45.0);
	glEnd();

	//42

	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(64, -20.0, 45.0);
	glVertex3f(64, -5.0, 45.0);
	glVertex3f(66, -5.0, 45.0);
	glVertex3f(66, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(64, -20.0, 46.0);
	glVertex3f(64, -5.0, 46.0);
	glVertex3f(66, -5.0, 46.0);
	glVertex3f(66, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(66, -20, 46.0);
	glVertex3f(66, -5, 46.0);
	glVertex3f(66, -5, 45.0);
	glVertex3f(66, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(64, -20.0, 46.0);
	glVertex3f(64, -5, 46.0);
	glVertex3f(64, -5, 45.0);
	glVertex3f(64, -20.0, 45.0);
	glEnd();

	//43
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(68, -20.0, 45.0);
	glVertex3f(68, -5.0, 45.0);
	glVertex3f(70, -5.0, 45.0);
	glVertex3f(70, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(68, -20.0, 46.0);
	glVertex3f(68, -5.0, 46.0);
	glVertex3f(70, -5.0, 46.0);
	glVertex3f(70, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(70, -20, 46.0);
	glVertex3f(70, -5, 46.0);
	glVertex3f(70, -5, 45.0);
	glVertex3f(70, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(68, -20.0, 46.0);
	glVertex3f(68, -5, 46.0);
	glVertex3f(68, -5, 45.0);
	glVertex3f(68, -20.0, 45.0);
	glEnd();

	//44
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(72, -20.0, 45.0);
	glVertex3f(72, -5.0, 45.0);
	glVertex3f(74, -5.0, 45.0);
	glVertex3f(74, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(72, -20.0, 46.0);
	glVertex3f(72, -5.0, 46.0);
	glVertex3f(74, -5.0, 46.0);
	glVertex3f(74, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(74, -20, 46.0);
	glVertex3f(74, -5, 46.0);
	glVertex3f(74, -5, 45.0);
	glVertex3f(74, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(72, -20.0, 46.0);
	glVertex3f(72, -5, 46.0);
	glVertex3f(72, -5, 45.0);
	glVertex3f(72, -20.0, 45.0);
	glEnd();

	//45
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(76, -20.0, 45.0);
	glVertex3f(76, -5.0, 45.0);
	glVertex3f(78, -5.0, 45.0);
	glVertex3f(78, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(76, -20.0, 46.0);
	glVertex3f(76, -5.0, 46.0);
	glVertex3f(78, -5.0, 46.0);
	glVertex3f(78, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(78, -20, 46.0);
	glVertex3f(78, -5, 46.0);
	glVertex3f(78, -5, 45.0);
	glVertex3f(78, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(76, -20.0, 46.0);
	glVertex3f(76, -5, 46.0);
	glVertex3f(76, -5, 45.0);
	glVertex3f(76, -20.0, 45.0);
	glEnd();

	//46

	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(80, -20.0, 45.0);
	glVertex3f(80, -5.0, 45.0);
	glVertex3f(82, -5.0, 45.0);
	glVertex3f(82, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(80, -20.0, 46.0);
	glVertex3f(80, -5.0, 46.0);
	glVertex3f(82, -5.0, 46.0);
	glVertex3f(82, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(82, -20, 46.0);
	glVertex3f(82, -5, 46.0);
	glVertex3f(82, -5, 45.0);
	glVertex3f(82, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(80, -20.0, 46.0);
	glVertex3f(80, -5, 46.0);
	glVertex3f(80, -5, 45.0);
	glVertex3f(80, -20.0, 45.0);
	glEnd();

	//47

	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(84, -20.0, 45.0);
	glVertex3f(84, -5.0, 45.0);
	glVertex3f(86, -5.0, 45.0);
	glVertex3f(86, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(84, -20.0, 46.0);
	glVertex3f(84, -5.0, 46.0);
	glVertex3f(86, -5.0, 46.0);
	glVertex3f(86, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(86, -20, 46.0);
	glVertex3f(86, -5, 46.0);
	glVertex3f(86, -5, 45.0);
	glVertex3f(86, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(84, -20.0, 46.0);
	glVertex3f(84, -5, 46.0);
	glVertex3f(84, -5, 45.0);
	glVertex3f(84, -20.0, 45.0);
	glEnd();

	//48
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(88, -20.0, 45.0);
	glVertex3f(88, -5.0, 45.0);
	glVertex3f(90, -5.0, 45.0);
	glVertex3f(90, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(88, -20.0, 46.0);
	glVertex3f(88, -5.0, 46.0);
	glVertex3f(90, -5.0, 46.0);
	glVertex3f(90, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(90, -20, 46.0);
	glVertex3f(90, -5, 46.0);
	glVertex3f(90, -5, 45.0);
	glVertex3f(90, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(88, -20.0, 46.0);
	glVertex3f(88, -5, 46.0);
	glVertex3f(88, -5, 45.0);
	glVertex3f(88, -20.0, 45.0);
	glEnd();

	//49
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(92, -20.0, 45.0);
	glVertex3f(92, -5.0, 45.0);
	glVertex3f(94, -5.0, 45.0);
	glVertex3f(94, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(92, -20.0, 46.0);
	glVertex3f(92, -5.0, 46.0);
	glVertex3f(94, -5.0, 46.0);
	glVertex3f(94, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(94, -20, 46.0);
	glVertex3f(94, -5, 46.0);
	glVertex3f(94, -5, 45.0);
	glVertex3f(94, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(92, -20.0, 46.0);
	glVertex3f(92, -5, 46.0);
	glVertex3f(92, -5, 45.0);
	glVertex3f(92, -20.0, 45.0);
	glEnd();

	//50
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(96, -20.0, 45.0);
	glVertex3f(96, -5.0, 45.0);
	glVertex3f(98, -5.0, 45.0);
	glVertex3f(98, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(96, -20.0, 46.0);
	glVertex3f(96, -5.0, 46.0);
	glVertex3f(98, -5.0, 46.0);
	glVertex3f(98, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(98, -20, 46.0);
	glVertex3f(98, -5, 46.0);
	glVertex3f(98, -5, 45.0);
	glVertex3f(98, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(96, -20.0, 46.0);
	glVertex3f(96, -5, 46.0);
	glVertex3f(96, -5, 45.0);
	glVertex3f(96, -20.0, 45.0);
	glEnd();

	//51
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(100, -20.0, 45.0);
	glVertex3f(100, -5.0, 45.0);
	glVertex3f(102, -5.0, 45.0);
	glVertex3f(102, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(100, -20.0, 46.0);
	glVertex3f(100, -5.0, 46.0);
	glVertex3f(102, -5.0, 46.0);
	glVertex3f(102, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(102, -20, 46.0);
	glVertex3f(102, -5, 46.0);
	glVertex3f(102, -5, 45.0);
	glVertex3f(102, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(100, -20.0, 46.0);
	glVertex3f(100, -5, 46.0);
	glVertex3f(100, -5, 45.0);
	glVertex3f(100, -20.0, 45.0);
	glEnd();

	//52
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(104, -20.0, 45.0);
	glVertex3f(104, -5.0, 45.0);
	glVertex3f(106, -5.0, 45.0);
	glVertex3f(106, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(104, -20.0, 46.0);
	glVertex3f(104, -5.0, 46.0);
	glVertex3f(106, -5.0, 46.0);
	glVertex3f(106, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(106, -20, 46.0);
	glVertex3f(106, -5, 46.0);
	glVertex3f(106, -5, 45.0);
	glVertex3f(106, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(104, -20.0, 46.0);
	glVertex3f(104, -5, 46.0);
	glVertex3f(104, -5, 45.0);
	glVertex3f(104, -20.0, 45.0);
	glEnd();

	//53
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(108, -20.0, 45.0);
	glVertex3f(108, -5.0, 45.0);
	glVertex3f(110, -5.0, 45.0);
	glVertex3f(110, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(108, -20.0, 46.0);
	glVertex3f(108, -5.0, 46.0);
	glVertex3f(110, -5.0, 46.0);
	glVertex3f(110, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(110, -20, 46.0);
	glVertex3f(110, -5, 46.0);
	glVertex3f(110, -5, 45.0);
	glVertex3f(110, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(108, -20.0, 46.0);
	glVertex3f(108, -5, 46.0);
	glVertex3f(108, -5, 45.0);
	glVertex3f(108, -20.0, 45.0);
	glEnd();

	//54
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(112, -20.0, 45.0);
	glVertex3f(112, -5.0, 45.0);
	glVertex3f(114, -5.0, 45.0);
	glVertex3f(114, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(112, -20.0, 46.0);
	glVertex3f(112, -5.0, 46.0);
	glVertex3f(114, -5.0, 46.0);
	glVertex3f(114, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(114, -20, 46.0);
	glVertex3f(114, -5, 46.0);
	glVertex3f(114, -5, 45.0);
	glVertex3f(114, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(112, -20.0, 46.0);
	glVertex3f(112, -5, 46.0);
	glVertex3f(112, -5, 45.0);
	glVertex3f(112, -20.0, 45.0);
	glEnd();

	//55

	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(116, -20.0, 45.0);
	glVertex3f(116, -5.0, 45.0);
	glVertex3f(118, -5.0, 45.0);
	glVertex3f(118, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(116, -20.0, 46.0);
	glVertex3f(116, -5.0, 46.0);
	glVertex3f(118, -5.0, 46.0);
	glVertex3f(118, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(118, -20, 46.0);
	glVertex3f(118, -5, 46.0);
	glVertex3f(118, -5, 45.0);
	glVertex3f(118, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(116, -20.0, 46.0);
	glVertex3f(116, -5, 46.0);
	glVertex3f(116, -5, 45.0);
	glVertex3f(116, -20.0, 45.0);
	glEnd();

	//56
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(120, -20.0, 45.0);
	glVertex3f(120, -5.0, 45.0);
	glVertex3f(122, -5.0, 45.0);
	glVertex3f(122, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(120, -20.0, 46.0);
	glVertex3f(120, -5.0, 46.0);
	glVertex3f(122, -5.0, 46.0);
	glVertex3f(122, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(122, -20, 46.0);
	glVertex3f(122, -5, 46.0);
	glVertex3f(122, -5, 45.0);
	glVertex3f(122, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(120, -20.0, 46.0);
	glVertex3f(120, -5, 46.0);
	glVertex3f(120, -5, 45.0);
	glVertex3f(120, -20.0, 45.0);
	glEnd();


	//57

	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(124, -20.0, 45.0);
	glVertex3f(124, -5.0, 45.0);
	glVertex3f(126, -5.0, 45.0);
	glVertex3f(126, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(124, -20.0, 46.0);
	glVertex3f(124, -5.0, 46.0);
	glVertex3f(126, -5.0, 46.0);
	glVertex3f(126, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(126, -20, 46.0);
	glVertex3f(126, -5, 46.0);
	glVertex3f(126, -5, 45.0);
	glVertex3f(126, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(124, -20.0, 46.0);
	glVertex3f(124, -5, 46.0);
	glVertex3f(124, -5, 45.0);
	glVertex3f(124, -20.0, 45.0);
	glEnd();

	//58

	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(128, -20.0, 45.0);
	glVertex3f(128, -5.0, 45.0);
	glVertex3f(130, -5.0, 45.0);
	glVertex3f(130, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(128, -20.0, 46.0);
	glVertex3f(128, -5.0, 46.0);
	glVertex3f(130, -5.0, 46.0);
	glVertex3f(130, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(130, -20, 46.0);
	glVertex3f(130, -5, 46.0);
	glVertex3f(130, -5, 45.0);
	glVertex3f(130, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(128, -20.0, 46.0);
	glVertex3f(128, -5, 46.0);
	glVertex3f(128, -5, 45.0);
	glVertex3f(128, -20.0, 45.0);
	glEnd();

	//59
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(132, -20.0, 45.0);
	glVertex3f(132, -5.0, 45.0);
	glVertex3f(134, -5.0, 45.0);
	glVertex3f(134, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(132, -20.0, 46.0);
	glVertex3f(132, -5.0, 46.0);
	glVertex3f(134, -5.0, 46.0);
	glVertex3f(134, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(134, -20, 46.0);
	glVertex3f(134, -5, 46.0);
	glVertex3f(134, -5, 45.0);
	glVertex3f(134, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(132, -20.0, 46.0);
	glVertex3f(132, -5, 46.0);
	glVertex3f(132, -5, 45.0);
	glVertex3f(132, -20.0, 45.0);
	glEnd();

	//60

	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(136, -20.0, 45.0);
	glVertex3f(136, -5.0, 45.0);
	glVertex3f(138, -5.0, 45.0);
	glVertex3f(138, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(136, -20.0, 46.0);
	glVertex3f(136, -5.0, 46.0);
	glVertex3f(138, -5.0, 46.0);
	glVertex3f(138, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(138, -20, 46.0);
	glVertex3f(138, -5, 46.0);
	glVertex3f(138, -5, 45.0);
	glVertex3f(138, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(136, -20.0, 46.0);
	glVertex3f(136, -5, 46.0);
	glVertex3f(136, -5, 45.0);
	glVertex3f(136, -20.0, 45.0);
	glEnd();

	//61
	glBegin(GL_POLYGON);//depan
	glColor3f(0, 0, 0);
	glVertex3f(140, -20.0, 45.0);
	glVertex3f(140, -5.0, 45.0);
	glVertex3f(142, -5.0, 45.0);
	glVertex3f(142, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//belakang
	glColor3f(0, 0, 0);
	glVertex3f(140, -20.0, 46.0);
	glVertex3f(140, -5.0, 46.0);
	glVertex3f(142, -5.0, 46.0);
	glVertex3f(142, -20.0, 46.0);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(142, -20, 46.0);
	glVertex3f(142, -5, 46.0);
	glVertex3f(142, -5, 45.0);
	glVertex3f(142, -20, 45.0);
	glEnd();

	glBegin(GL_QUADS);//kiri
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(140, -20.0, 46.0);
	glVertex3f(140, -5, 46.0);
	glVertex3f(140, -5, 45.0);
	glVertex3f(140, -20.0, 45.0);
	glEnd();


}

void jalanparkiran(void) {
	//jalan depan lobby
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(-95, -20.0, 40.0);
	glVertex3f(65, -20.0, 40.0);
	glVertex3f(65, -20.0, 10.0);
	glVertex3f(-95, -20.0, 10.0);
	glEnd();

	//Parkiran
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(63, -20.0, 40.0);
	glVertex3f(190, -20.0, 40.0);
	glVertex3f(190, -20.0, -45.0);
	glVertex3f(63, -20.0, -45.0);
	glEnd();

	//jalan depan mall
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(-120, -20.0, 100.0);
	glVertex3f(190, -20.0, 100.0);
	glVertex3f(190, -20.0, 70.0);
	glVertex3f(-120, -20.0, 70.0);
	glEnd();

	//jalan depan mall 2
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(-120, -20.0, 150.0);
	glVertex3f(190, -20.0, 150.0);
	glVertex3f(190, -20.0, 120.0);
	glVertex3f(-120, -20.0, 120.0);
	glEnd();

	//pembatas jalan
	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-120, -20.0, 120.0);
	glVertex3f(190, -20.0, 120.0);
	glVertex3f(190, -20.0, 100.0);
	glVertex3f(-120, -20.0, 100.0);
	glEnd();

	//pembatas jalan
	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-120, -16.0, 120.0);
	glVertex3f(190, -16.0, 120.0);
	glVertex3f(190, -16.0, 100.0);
	glVertex3f(-120, -16.0, 100.0);
	glEnd();

	glBegin(GL_POLYGON);//t.belakang
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-120, -16.0, 100.0);
	glVertex3f(190, -16.0, 100.0);
	glVertex3f(190, -20.0, 100.0);
	glVertex3f(-120, -20.0, 100.0);
	glEnd();

	glBegin(GL_POLYGON);//t.depan
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-120, -16.0, 120.0);
	glVertex3f(190, -16.0, 120.0);
	glVertex3f(190, -20.0, 120.0);
	glVertex3f(-120, -20.0, 120.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);//t.kanan
	glVertex3f(190, -16.0, 120.0);
	glVertex3f(190, -20.0, 120.0);
	glVertex3f(190, -20.0, 100.0);
	glVertex3f(190, -16.0, 100.0);
	glEnd();

	glBegin(GL_POLYGON);//t.kiri
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-120, -16.0, 120.0);
	glVertex3f(-120, -20.0, 120.0);
	glVertex3f(-120, -20.0, 100.0);
	glVertex3f(-120, -16.0, 100.0);
	glEnd();

	//baju jalan
	//bawah
	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-120, -20.0, 70.0);
	glVertex3f(165, -20.0, 70.0);
	glVertex3f(165, -20.0, 45.0);
	glVertex3f(-120, -20.0, 45.0);
	glEnd();

	//atas
	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-120, -16.0, 70.0);
	glVertex3f(165, -16.0, 70.0);
	glVertex3f(165, -16.0, 45.0);
	glVertex3f(-120, -16.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//t.belakang
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-120, -16.0, 45.0);
	glVertex3f(190, -16.0, 45.0);
	glVertex3f(190, -20.0, 45.0);
	glVertex3f(-120, -20.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//t.depan
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-120, -16.0, 70.0);
	glVertex3f(190, -16.0, 70.0);
	glVertex3f(190, -20.0, 70.0);
	glVertex3f(-120, -20.0, 70.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);//t.kanan
	glVertex3f(190, -16.0, 70.0);
	glVertex3f(190, -20.0, 70.0);
	glVertex3f(190, -20.0, 45.0);
	glVertex3f(190, -16.0, 45.0);
	glEnd();

	glBegin(GL_POLYGON);//t.kiri
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-120, -16.0, 70.0);
	glVertex3f(-120, -20.0, 70.0);
	glVertex3f(-120, -20.0, 45.0);
	glVertex3f(-120, -16.0, 45.0);
	glEnd();
}

void init(void) {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glEnable(GL_DEPTH_TEST);
	is_depth = 1;
	glMatrixMode(GL_MODELVIEW);
	glPointSize(9.0);
	glLineWidth(6.0f);
}

void tiang2(void) {
	//tiang atas kiri luar
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-70.0, 55, 10);
	glVertex3f(-70.0, 60, 10);
	glVertex3f(-70.0, 60, -5);
	glVertex3f(-70.0, 55, -5);
	glEnd();

	//tiang atas kiri dalam
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-66.0, 55, 10);
	glVertex3f(-66.0, 60, 10);
	glVertex3f(-66.0, 60, -5);
	glVertex3f(-66.0, 55, -5);
	glEnd();

	glBegin(GL_QUADS);//tiang kiri atas
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-70, 60, -5);
	glVertex3f(-66, 60, -5);
	glVertex3f(-66, 60, 10);
	glVertex3f(-70, 60, 10);
	glEnd();

	glBegin(GL_QUADS);//belakang kiri atas
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-66, 60, -5);
	glVertex3f(-70, 60, -5);
	glVertex3f(-70, 50, -5);
	glVertex3f(-66, 50, -5);
	glEnd();
	//

	//tiang atas kanan luar
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50.0, 55, 10);
	glVertex3f(-50.0, 60, 10);
	glVertex3f(-50.0, 60, -5);
	glVertex3f(-50.0, 55, -5);
	glEnd();

	//tiang atas kanan dalam
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-54.0, 55, 10);
	glVertex3f(-54.0, 60, 10);
	glVertex3f(-54.0, 60, -5);
	glVertex3f(-54.0, 55, -5);
	glEnd();

	glBegin(GL_QUADS);//tiang kanan atas
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50, 60, -5);
	glVertex3f(-54, 60, -5);
	glVertex3f(-54, 60, 10);
	glVertex3f(-50, 60, 10);
	glEnd();

	glBegin(GL_QUADS);//belakang kanan atas
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-54, 60, -5);
	glVertex3f(-50, 60, -5);
	glVertex3f(-50, 50, -5);
	glVertex3f(-54, 50, -5);
	glEnd();

	//
	//tiang bawah kanan luar
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50.0, 25, 10);
	glVertex3f(-50.0, 30, 10);
	glVertex3f(-50.0, 30, -5);
	glVertex3f(-50.0, 25, -5);
	glEnd();

	//tiang bawah kanan dalam
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-54.0, 25, 10);
	glVertex3f(-54.0, 30, 10);
	glVertex3f(-54.0, 30, -5);
	glVertex3f(-54.0, 25, -5);
	glEnd();

	glBegin(GL_QUADS);//tiang kanan bawah
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50, 30, -5);
	glVertex3f(-54, 30, -5);
	glVertex3f(-54, 30, 10);
	glVertex3f(-50, 30, 10);
	glEnd();

	//
	//tiang bawah kiri luar
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-70.0, 25, 10);
	glVertex3f(-70.0, 30, 10);
	glVertex3f(-70.0, 30, -5);
	glVertex3f(-70.0, 25, -5);
	glEnd();

	//tiang bawah kiri dalam
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-66.0, 25, 10);
	glVertex3f(-66.0, 30, 10);
	glVertex3f(-66.0, 30, -5);
	glVertex3f(-66.0, 25, -5);
	glEnd();

	glBegin(GL_QUADS);//tiang kiri bawah
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-70, 30, -5);
	glVertex3f(-66, 30, -5);
	glVertex3f(-66, 30, 10);
	glVertex3f(-70, 30, 10);
	glEnd();

	///
	//tiang bawah kiri luar
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-70.0, 5, 10);
	glVertex3f(-70.0, 10, 10);
	glVertex3f(-70.0, 10, -5);
	glVertex3f(-70.0, 5, -5);
	glEnd();

	//tiang bawah kiri dalam
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-66.0, 5, 10);
	glVertex3f(-66.0, 10, 10);
	glVertex3f(-66.0, 10, -5);
	glVertex3f(-66.0, 5, -5);
	glEnd();

	glBegin(GL_QUADS);//tiang kiri bawah
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-70, 10, -5);
	glVertex3f(-66, 10, -5);
	glVertex3f(-66, 10, 10);
	glVertex3f(-70, 10, 10);
	glEnd();

	/////
	//tiang bawah kiri luar
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50.0, 5, 10);
	glVertex3f(-50.0, 10, 10);
	glVertex3f(-50.0, 10, -5);
	glVertex3f(-50.0, 5, -5);
	glEnd();

	//tiang bawah kiri dalam
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-54.0, 5, 10);
	glVertex3f(-54.0, 10, 10);
	glVertex3f(-54.0, 10, -5);
	glVertex3f(-54.0, 5, -5);
	glEnd();

	glBegin(GL_QUADS);//tiang kiri bawah
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50, 10, -5);
	glVertex3f(-54, 10, -5);
	glVertex3f(-54, 10, 10);
	glVertex3f(-50, 10, 10);
	glEnd();
}

void penyangga(void) {
	//penyangga1 belakang
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-50.0, -1.0, 10);
	glVertex3f(-50.0, 4.0, 10);
	glVertex3f(-66.0, 4.0, 10);
	glVertex3f(-66.0, -1.0, 10);
	glEnd();

	//penyangga2 belakang
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-66.0, -1.0, 10);
	glVertex3f(-66.0, 55, 10);
	glVertex3f(-70.0, 55, 10);
	glVertex3f(-70.0, -1.0, 10);
	glEnd();

	//penyangga3 belakang
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-50.0, -1.0, 10);
	glVertex3f(-50.0, 60, 10);
	glVertex3f(-54.0, 60, 10);
	glVertex3f(-54.0, -1.0, 10);
	glEnd();

	//penyangga4 belakang
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-54.0, 55, 10);
	glVertex3f(-54.0, 60, 10);
	glVertex3f(-70.0, 60, 10);
	glVertex3f(-70.0, 55, 10);
	glEnd();

	//penyangga1 depan
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-50.0, -1.0, 13);
	glVertex3f(-50.0, 4.0, 13);
	glVertex3f(-66.0, 4.0, 13);
	glVertex3f(-66.0, -1.0, 13);
	glEnd();

	//penyangga2 depan
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-66.0, -1.0, 13);
	glVertex3f(-66.0, 55, 13);
	glVertex3f(-70.0, 55, 13);
	glVertex3f(-70.0, -1.0, 13);
	glEnd();

	//penyangga3 depan
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-50.0, -1.0, 13);
	glVertex3f(-50.0, 60, 13);
	glVertex3f(-54.0, 60, 13);
	glVertex3f(-54.0, -1.0, 13);
	glEnd();

	//penyangga4 depan
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-54.0, 55, 13);
	glVertex3f(-54.0, 60, 13);
	glVertex3f(-70.0, 60, 13);
	glVertex3f(-70.0, 55, 13);
	glEnd();

	glBegin(GL_QUADS);//KIRI LUAR
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-50, 60.0, 10);
	glVertex3f(-50, -1.0, 10);
	glVertex3f(-50, -1.0, 13);
	glVertex3f(-50, 60.0, 13);
	glEnd();

	glBegin(GL_QUADS);//KIRI DALAM
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-55, 55.0, 10);
	glVertex3f(-55, 4.0, 10);
	glVertex3f(-55, 4.0, 13);
	glVertex3f(-55, 55.0, 13);
	glEnd();

	glBegin(GL_QUADS);//KANAN LUAR
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-70, 60.0, 10);
	glVertex3f(-70, -1.0, 10);
	glVertex3f(-70, -1.0, 13);
	glVertex3f(-70, 60.0, 13);
	glEnd();

	glBegin(GL_QUADS);//KANAN DALAM
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-65, 55.0, 10);
	glVertex3f(-65, 4.0, 10);
	glVertex3f(-65, 4.0, 13);
	glVertex3f(-65, 55.0, 13);
	glEnd();

	glBegin(GL_POLYGON);//bawah
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-70, -1, 10);
	glVertex3f(-50, -1, 10);
	glVertex3f(-50, -1, 13);
	glVertex3f(-70, -1, 13);
	glEnd();

	glBegin(GL_QUADS);//ATAS
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-70, 60, 10);
	glVertex3f(-50, 60, 10);
	glVertex3f(-50, 60, 13);
	glVertex3f(-70, 60, 13);
	glEnd();
}

void fondasibangunkanan(void) {
	//fondasi 
	//depan
	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-5.0, -20.0, 7.0);
	glVertex3f(-5.0, -10.0, 7.0);
	glVertex3f(55.0, -10.0, 7.0);
	glVertex3f(55.0, -20.0, 7.0);
	glEnd();

	//KANAN
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(55.0, -10.0, 7.0);
	glVertex3f(55.0, -20.0, 7.0);
	glVertex3f(55.0, -20.0, -47.0);
	glVertex3f(55.0, -10.0, -47.0);
	glEnd();

	//KIRI	
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-5, -10.0, 7.0);
	glVertex3f(-5, -20.0, 7.0);
	glVertex3f(-5, -20.0, -47.0);
	glVertex3f(-5, -10.0, -47.0);
	glEnd();

	//BELAKANG
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-5.0, -20.0, -47.0);
	glVertex3f(-5.0, -10.0, -47.0);
	glVertex3f(55.0, -10.0, -47.0);
	glVertex3f(55.0, -20.0, -47.0);
	glEnd();

	//alas
	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-5, -20.0, 7.0);
	glVertex3f(55, -20.0, 7.0);
	glVertex3f(55, -20.0, -47.0);
	glVertex3f(-5, -20.0, -47.0);
	glEnd();

	glPushMatrix();
	glPopMatrix();
}

void fondasibangunkiri(void) {
	//fondasi 
	//depan
	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-95.0, -20.0, 0);
	glVertex3f(-95.0, -10.0, 0);
	glVertex3f(-25.0, -10.0, 0);
	glVertex3f(-25.0, -20.0, 0);
	glEnd();

	//KIRI	
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-95, -10.0, 0);
	glVertex3f(-95, -20.0, 0);
	glVertex3f(-95, -20.0, -45.0);
	glVertex3f(-95, -10.0, -45.0);
	glEnd();

	//BELAKANG
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-95.0, -20.0, -47.0);
	glVertex3f(-95.0, -10.0, -47.0);
	glVertex3f(-25.0, -10.0, -47.0);
	glVertex3f(-25.0, -20.0, -47.0);
	glEnd();

	//alas
	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-95, -20.0, 7.0);
	glVertex3f(25, -20.0, 7.0);
	glVertex3f(25, -20.0, -47.0);
	glVertex3f(-95, -20.0, -47.0);
	glEnd();

	glPushMatrix();
	glPopMatrix();
}

void bangunankiri(void) {
	//depan2
	glBegin(GL_POLYGON);
	glColor3f(0.70, 0.70, 0.70);
	glVertex3f(-100.0, -10.0, 5.0);
	glVertex3f(-100.0, 50.0, 5.0);
	glVertex3f(-10.0, 50.0, 5.0);
	glVertex3f(-10.0, -10.0, 5.0);
	glEnd();

	//BELAKANG
	glBegin(GL_POLYGON);
	glColor3f(0.70, 0.70, 0.70);
	glVertex3f(-100.0, -10.0, -50.0);
	glVertex3f(-100.0, 50.0, -50.0);
	glVertex3f(-10.0, 50.0, -50.0);
	glVertex3f(-10.0, -10.0, -50.0);
	glEnd();

	//KIRI	
	glBegin(GL_QUADS);
	glColor3f(0.70, 0.70, 0.70);
	glVertex3f(-100, 50.0, 5.0);
	glVertex3f(-100, -10.0, 5.0);
	glVertex3f(-100, -10.0, -50.0);
	glVertex3f(-100, 50.0, -50.0);
	glEnd();

	//ATAS
	glBegin(GL_QUADS);
	glColor3f(0.70, 0.70, 0.70);
	glVertex3f(-10, 50.0, 5.0);
	glVertex3f(-100, 50.0, 5.0);
	glVertex3f(-100, 50.0, -50.0);
	glVertex3f(-10, 50.0, -50.0);
	glEnd();

	//BAWAH
	glBegin(GL_POLYGON);
	glColor3f(0.70, 0.70, 0.70);
	glVertex3f(-100, -10.0, 5.0);
	glVertex3f(-10, -10.0, 5.0);
	glVertex3f(-10, -10.0, -50.0);
	glVertex3f(-100, -10.0, -50.0);
	glEnd();

	glPushMatrix();
	glPopMatrix();
}

void tiang(void) {
	//tiang 1 lobby
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-14.0, 0.0, 5.5);
	glVertex3f(-14.0, 5.0, 5.5);
	glVertex3f(-10.0, 5.0, 5.5);
	glVertex3f(-10.0, 0.0, 5.5);
	glEnd();

	glBegin(GL_POLYGON);//bawah
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-14, 0, 5.5);
	glVertex3f(-10, 0, 5.5);
	glVertex3f(-10, 0, 39.5);
	glVertex3f(-14, 0, 39.5);
	glEnd();

	glBegin(GL_QUADS);//ATAS
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-14, 5, 5.5);
	glVertex3f(-10, 5, 5.5);
	glVertex3f(-10, 5, 42.5);
	glVertex3f(-14, 5, 42.5);
	glEnd();

	glBegin(GL_QUADS);//KIRI	
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-14, 0, 5.5);
	glVertex3f(-14, 5, 5.5);
	glVertex3f(-14, 5, 42.5);
	glVertex3f(-14, 0, 39.5);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-10, 0, 5.5);
	glVertex3f(-10, 5, 5.5);
	glVertex3f(-10, 5, 42.5);
	glVertex3f(-10, 0, 39.5);
	glEnd();

	glBegin(GL_POLYGON);//kebawah
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-14.0, -20.0, 40);
	glVertex3f(-14.0, 5.0, 42.5);
	glVertex3f(-10.0, 5.0, 42.5);
	glVertex3f(-10.0, -20.0, 40);
	glEnd();

	glBegin(GL_QUADS);//kebawah kanan
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-10, -20, 38.5);
	glVertex3f(-10, 1.5, 40.5);
	glVertex3f(-10, 5, 42.5);
	glVertex3f(-10, -20, 40.5);
	glEnd();

	glBegin(GL_QUADS);//kebawah kiri
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-14, -20.0, 38.5);
	glVertex3f(-14, 1.5, 40.5);
	glVertex3f(-14, 5, 42.5);
	glVertex3f(-14, -20.0, 40.5);
	glEnd();

	//tiang 2 lobby
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-20.0, 0.0, 5.5);
	glVertex3f(-20.0, 5.0, 5.5);
	glVertex3f(-24.0, 5.0, 5.5);
	glVertex3f(-24.0, 0.0, 5.5);
	glEnd();

	glBegin(GL_POLYGON);//bawah
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-20, 0, 5.5);
	glVertex3f(-24, 0, 5.5);
	glVertex3f(-24, 0, 39.5);
	glVertex3f(-20, 0, 39.5);
	glEnd();

	glBegin(GL_QUADS);//ATAS
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-20, 5, 5.5);
	glVertex3f(-24, 5, 5.5);
	glVertex3f(-24, 5, 42.5);
	glVertex3f(-20, 5, 42.5);
	glEnd();

	glBegin(GL_QUADS);//KIRI	
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-20, 0, 5.5);
	glVertex3f(-20, 5, 5.5);
	glVertex3f(-20, 5, 42.5);
	glVertex3f(-20, 0, 39.5);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-24, 0, 5.5);
	glVertex3f(-24, 5, 5.5);
	glVertex3f(-24, 5, 42.5);
	glVertex3f(-24, 0, 39.5);
	glEnd();

	glBegin(GL_POLYGON);//kebawah
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-20.0, -20.0, 40);
	glVertex3f(-20.0, 5.0, 42.5);
	glVertex3f(-24.0, 5.0, 42.5);
	glVertex3f(-24.0, -20.0, 40);
	glEnd();

	glBegin(GL_QUADS);//kebawah kanan
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-20, -20, 38.5);
	glVertex3f(-20, 1.5, 40.5);
	glVertex3f(-20, 5, 42.5);
	glVertex3f(-20, -20, 40.5);
	glEnd();

	glBegin(GL_QUADS);//kebawah kiri
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-24, -20.0, 38.5);
	glVertex3f(-24, 1.5, 40.5);
	glVertex3f(-24, 5, 42.5);
	glVertex3f(-24, -20.0, 40.5);
	glEnd();

	//tiang 3 lobby
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-34.0, 0.0, 5.5);
	glVertex3f(-34.0, 5.0, 5.5);
	glVertex3f(-30.0, 5.0, 5.5);
	glVertex3f(-30.0, 0.0, 5.5);
	glEnd();

	glBegin(GL_POLYGON);//bawah
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-34, 0, 5.5);
	glVertex3f(-30, 0, 5.5);
	glVertex3f(-30, 0, 39.5);
	glVertex3f(-34, 0, 39.5);
	glEnd();

	glBegin(GL_QUADS);//ATAS
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-34, 5, 5.5);
	glVertex3f(-30, 5, 5.5);
	glVertex3f(-30, 5, 42.5);
	glVertex3f(-34, 5, 42.5);
	glEnd();

	glBegin(GL_QUADS);//KIRI	
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-34, 0, 5.5);
	glVertex3f(-34, 5, 5.5);
	glVertex3f(-34, 5, 42.5);
	glVertex3f(-34, 0, 39.5);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-30, 0, 5.5);
	glVertex3f(-30, 5, 5.5);
	glVertex3f(-30, 5, 42.5);
	glVertex3f(-30, 0, 39.5);
	glEnd();

	glBegin(GL_POLYGON);//kebawah
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-34.0, -20.0, 40);
	glVertex3f(-34.0, 5.0, 42.5);
	glVertex3f(-30.0, 5.0, 42.5);
	glVertex3f(-30.0, -20.0, 40);
	glEnd();

	glBegin(GL_QUADS);//kebawah kanan
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-30, -20, 38.5);
	glVertex3f(-30, 1.5, 40.5);
	glVertex3f(-30, 5, 42.5);
	glVertex3f(-30, -20, 40.5);
	glEnd();

	glBegin(GL_QUADS);//kebawah kiri
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-34, -20.0, 38.5);
	glVertex3f(-34, 1.5, 40.5);
	glVertex3f(-34, 5, 42.5);
	glVertex3f(-34, -20.0, 40.5);
	glEnd();


	//////////
	glBegin(GL_QUADS);//ATAS1
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-14, 0, 5.5);
	glVertex3f(-20, 0, 5.5);
	glVertex3f(-20, 0, 42.5);
	glVertex3f(-14, 0, 42.5);
	glEnd();

	glBegin(GL_QUADS);//ATAS2
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-24, 0, 5.5);
	glVertex3f(-30, 0, 5.5);
	glVertex3f(-30, 0, 42.5);
	glVertex3f(-24, 0, 42.5);
	glEnd();

	glBegin(GL_POLYGON);//bawah1
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-20.0, -10.0, 41.5);
	glVertex3f(-20.0, 0.0, 42.5);
	glVertex3f(-14.0, 0.0, 42.5);
	glVertex3f(-14.0, -10.0, 41.5);
	glEnd();

	glBegin(GL_POLYGON);//bawah2
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-30.0, -10.0, 41.5);
	glVertex3f(-30.0, 0.0, 42.5);
	glVertex3f(-24.0, 0.0, 42.5);
	glVertex3f(-24.0, -10.0, 41.5);
	glEnd();
}

void bangunankanan(void) {
	glClearColor(1.0, 1.0, 1.0, 0);
	if (is_depth)
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	else
		glClear(GL_COLOR_BUFFER_BIT);

	//DEPAN
	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-10.0, -10.0, 10.0);
	glVertex3f(-10, 50.0, 10.0);
	glVertex3f(60.0, 50.0, 10.0);
	glVertex3f(60.0, -10.0, 10.0);
	glEnd();

	//BELAKANG
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-10.0, -10.0, -50.0);
	glVertex3f(-10.0, 50.0, -50.0);
	glVertex3f(60.0, 50.0, -50.0);
	glVertex3f(60.0, -10.0, -50.0);
	glEnd();

	//KANAN
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(60.0, 50.0, 10.0);
	glVertex3f(60.0, -10.0, 10.0);
	glVertex3f(60.0, -10.0, -50.0);
	glVertex3f(60.0, 50.0, -50.0);
	glEnd();

	//KIRI	
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-10, 50.0, 10.0);
	glVertex3f(-10, -10.0, 10.0);
	glVertex3f(-10, -10.0, -50.0);
	glVertex3f(-10, 50.0, -50.0);
	glEnd();

	//ATAS
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-10, 50.0, 10.0);
	glVertex3f(60, 50.0, 10.0);
	glVertex3f(60, 50.0, -50.0);
	glVertex3f(-10, 50.0, -50.0);
	glEnd();

	//BAWAH
	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-10, -10.0, 10.0);
	glVertex3f(60, -10.0, 10.0);
	glVertex3f(60, -10.0, -50.0);
	glVertex3f(-10, -10.0, -50.0);
	glEnd();

	//cover1
	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-10.0, -10.0, 10.1);
	glVertex3f(60, -10.0, 10.1);
	glVertex3f(60.0, 50.0, 10.1);
	glEnd();

	//garis di gedung 1
	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-5.0, -5.0, 10.2);//1
	glVertex3f(60, -5.0, 10.2);

	glVertex3f(60, -10.0, 10.2);//2
	glVertex3f(-10.0, -10.0, 10.2);

	glVertex3f(-4.0, 5.0, 10.2);//3
	glVertex3f(60, 5.0, 10.2);

	glVertex3f(-4.0, 10.0, 10.2);//4
	glVertex3f(60, 10.0, 10.2);

	glVertex3f(-4.0, 20.0, 10.2);//5
	glVertex3f(60, 20.0, 10.2);

	glVertex3f(-4.0, 25.0, 10.2);//6
	glVertex3f(60, 25.0, 10.2);

	glVertex3f(-4.0, 35.0, 10.2);//7
	glVertex3f(60, 35.0, 10.2);

	glVertex3f(-4.0, 40.0, 10.2);//8
	glVertex3f(60, 40.0, 10.2);
	glEnd();

	//
	glBegin(GL_POLYGON);
	glColor3ub(92, 51, 23);
	glVertex3f(-5.0, -5.0, 10.2);
	glVertex3f(60, -5.0, 10.2);
	glVertex3f(60, -10.0, 10.2);
	glVertex3f(-10.0, -10.0, 10.2);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(92, 51, 23);
	glVertex3f(7.1, 5.0, 10.2);//3
	glVertex3f(60, 5.0, 10.2);
	glVertex3f(60, 10.0, 10.2);
	glVertex3f(13.5, 10.0, 10.2);//4
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(25.0, 20.0, 10.2);//5
	glVertex3f(60, 20.0, 10.2);
	glVertex3f(60, 25.0, 10.2);
	glVertex3f(30.5, 25.0, 10.2);//6
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(42.9, 35.0, 10.2);//7
	glVertex3f(60, 35.0, 10.2);
	glVertex3f(60, 40.0, 10.2);
	glVertex3f(47.9, 40.0, 10.2);//8
	glEnd();

	objek3();
	objek2();
	objek1();
	jalanparkiran();
	tiang2();
	penyangga();
	tiang();
	bangunankiri();
	fondasibangunkanan();
	fondasibangunkiri();
	glPushMatrix();
	glPopMatrix();
	glutSwapBuffers();

}

void keyboard(unsigned char key, int x, int y) {
	switch (key) {

	case 'j':
		glRotatef(2.0, 1.0, 0.0, 0.0);
		break;

	case 'u':
		glRotatef(-2.0, 1.0, 0.0, 0.0);
		break;

	case 'i':
		glRotatef(2.0, 0.0, 1.0, 0.0);
		break;

	case 'y':
		glRotatef(-2.0, 0.0, 1.0, 0.0);
		break;

	case 'n':
		glRotatef(2.0, 0.0, 0.0, 1.0);
		break;

	case 'm':
		glRotatef(-2.0, 0.0, 0.0, 1.0);
		break;

	case 'r':
		glTranslatef(3.0, 0.0, 0.0);
		break;

	case 'w':
		glTranslatef(-3.0, 0.0, 0.0);
		break;

	case 'e':
		glTranslatef(0.0, 3.0, 0.0);
		break;

	case 'd':
		glTranslatef(0.0, -3.0, 0.0);
		break;

	case 'x':
		if (is_depth) {
			is_depth = 0;
			glDisable(GL_DEPTH_TEST);
		}
		else {
			is_depth = 1;
			glEnable(GL_DEPTH_TEST);
		}
	}
	bangunankanan();
}

void key(int key, int x, int y) {
	switch (key) {
	case GLUT_KEY_PAGE_UP:
		glTranslatef(0.0, 0.0, 3.0);
		break;

	case GLUT_KEY_PAGE_DOWN:
		glTranslatef(0.0, 0.0, -3.0);
		break;
	}
	bangunankanan();

}

void ukuran(int lebar, int tinggi) {
	if (tinggi == 0) tinggi = 1;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(100.0, lebar / tinggi, 5.0, 500.0);
	glTranslatef(0.0, -5.0, -150.0);
	glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(250, 80);
	glutCreateWindow("Mall Summercon Kelapa Gading 3D");
	init();
	glutDisplayFunc(bangunankanan);
	glutKeyboardFunc(keyboard);
	glutSpecialFunc(key);
	glutReshapeFunc(ukuran);
	glutMainLoop();
	return 0;
}