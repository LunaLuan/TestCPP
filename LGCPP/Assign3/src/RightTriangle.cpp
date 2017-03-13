#include "RightTriangle.h"


RightTriangle::RightTriangle(int a, int b) 
	:Triangle(a, b, sqrt(a * a + b * b)) {
	setName("Right Triangle");

}

int RightTriangle::getArea() {
	return m_a * m_b;
}



RightTriangle::~RightTriangle() {

}





