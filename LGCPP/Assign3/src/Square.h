#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

class Square:public Rectangle
{
	public:
		Square(int a);

		virtual int getArea();
		virtual int getPerimeter();

		~Square();
	protected:

	private:

};

#endif
