#include "Square.h"


Square::Square(int a) 
	: Rectangle(a, a) {
	setName("Square");
	m_a = a;
}

int Square::getArea() {
	return m_a * m_a;
}

int Square::getPerimeter() {
	return m_a * 4;
}

Square::~Square() {

}
