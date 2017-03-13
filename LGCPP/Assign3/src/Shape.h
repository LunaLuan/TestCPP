#ifndef SHAPE_H
#define SHAPE_H

#include<iostream>
#include<string>
using namespace std;

class Shape
{
	public:
		Shape();

		void setName (string n);
		string getName() const;

		virtual int getArea() = 0;
		virtual int getPerimeter() = 0;
		friend ostream& operator<<(ostream& os, Shape &s);
		friend ostream& operator<<(ostream& os, Shape *s);

		virtual ~Shape();
	protected:
		string m_name;

		


};

#endif
