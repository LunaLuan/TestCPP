#include "ShapeManager.h"

ShapeManager::ShapeManager() {
	numShapes = 0;
}

void ShapeManager::add(Shape *s) {
	shapes[numShapes] = s;
	numShapes ++;
}

ostream& operator<<(ostream &os, ShapeManager &sm) {
	os << "Shape manager: "<<endl;
	for (int i = 0; i < sm.numShapes; i++) {
		os << sm.shapes[i] <<endl;
	}
	return os;
}

ShapeManager::~ShapeManager() {

}
