
#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "Triangle.h"
#include<iostream>
#include<math.h>
#include<string>
using namespace std;

class RightTriangle:public Triangle
{
	public:
		RightTriangle(int a, int b);

		virtual int getArea();

		virtual ~RightTriangle();
	protected:

	private:
		
};

#endif
