#include "Shape.h"

Shape::Shape() {

}

void Shape::setName(string n) {
	m_name = n;
}

string Shape::getName() const {
	return m_name;
}

ostream& operator<<(ostream& os, Shape &s) {
	os << " - " << s.getName() << ": ";
	os << "\tArea: " << s.getArea() << endl;
	os << "\tPermeter" << s.getPerimeter() << endl;

	return os;
}

ostream& operator<<(ostream& os, Shape *s) {
	os << " - " << s->getName() << ": "<<endl;
	os << "\tArea: " << s->getArea() << endl;
	os << "\tPermeter: " << s->getPerimeter() << endl;

	return os;
}

Shape::~Shape() {

}
