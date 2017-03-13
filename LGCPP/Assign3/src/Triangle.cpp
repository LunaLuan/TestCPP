#include "Triangle.h"

Triangle::Triangle(int a, int b, int c) {
	if(!isTriangle(a, b, c)) {

	}
	setName("Triangle");
	m_a = a;
	m_b = b;
	m_c = c;
}

int Triangle::getArea() {
	int p = getPerimeter();
	int a = p * (p - m_a) * (p - m_b) * (p - m_c);
	return (int) sqrt(a);
}

int Triangle::getPerimeter() {
	return m_a + m_b + m_c;
}





bool Triangle::isTriangle(int a, int b, int c) {
	bool t1 = (a + b >= c);
	bool t2 = (a + c >= b);
	bool t3 = (b + c >= a);

	return (t1 || t2 || t3);
}

Triangle::~Triangle() {

}
