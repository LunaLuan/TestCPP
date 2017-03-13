#include "ShapeFactory.h"


ShapeFactory::ShapeFactory() {

}



Shape* ShapeFactory::createShape(int type) {
	if (type == 1) {
		cout << "- Nhap 3 canh hinh tam giac: ";
		int a, b, c;
		cin >> a >> b >> c;
		return new Triangle(a, b, c);
	}
	else if(type == 2) {
		cout << " - Nhap 2 canh tam giac vuong: ";
		int a, b;
		cin >> a >> b;
		return new RightTriangle(a, b);
	}
	else if (type == 3) {
		cout << "- Nhap chieu dai va chieu rong hinh chu nhat: ";
		int a, b;
		cin >> a >> b;
		return new Rectangle(a, b);
	}
	else if (type == 4) {
		cout << "- Nhap canh hinh vuong: ";
		int a;
		cin >> a;
		return new Square(a);
	}

	return NULL;
}





ShapeFactory::~ShapeFactory() {

}

