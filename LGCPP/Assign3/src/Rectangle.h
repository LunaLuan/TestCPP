#include "Shape.h"

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle:public Shape
{
	public:
		Rectangle(int a, int b);
		virtual int getArea();
		virtual int getPerimeter();
		int getNumEdges();
		virtual ~Rectangle();
	protected:
		static const int numEdges = 4;
		int m_a, m_b;
};

#endif
