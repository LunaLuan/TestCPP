#include <iostream>
using namespace std;

#include "ShapeManager.h"
#include "ShapeFactory.h"
#include<stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void printMenu() {
	cout << "\t***Moi ban nhap hinh mong muon:***" << endl;
	cout << "1. Triangle" << endl;
	cout << "2. Right Triangle" << endl;
	cout << "3. Rectangle" << endl;
	cout << "4. Square" << endl;
	cout << "0. End" << endl;
	cout << "Moi nhap: ";
}

int main() {
	ShapeManager sm;
	ShapeFactory fatory;

	int type = 0;

	printMenu();
	cin >> type;
	while (type != 0) {
		cout << type;
		sm.add(fatory.createShape(type));
		printMenu();
		cin >> type;
	}

	cout << sm;

	return 0;
}
