#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"
#include<iostream>
#include<math.h>
using namespace std;

class Triangle:public Shape
{
	public:
		Triangle(int a, int b, int c);
		virtual int getArea();
		virtual int getPerimeter();
		static bool isTriangle(int a, int b, int c);
		~Triangle();
	protected:
		int m_a, m_b, m_c;
	private:
		
		
};

#endif