#ifndef SHAPEMANAGER_H
#define SHAPEMANAGER_H

#include<iostream>
using namespace std;

#include "Shape.h"

class ShapeManager
{
	public:
		ShapeManager();

		void add(Shape *s);

		friend ostream& operator<<(ostream &os, ShapeManager &sm);
		~ShapeManager();
	protected:
		Shape *shapes[1000];
		int numShapes;
		
};

#endif