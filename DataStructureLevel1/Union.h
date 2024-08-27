#pragma once
#include <iostream>
using namespace std;

union MyUnion {
	int intValue;
	float floatValue;
	char charValue;
};

void UnionEx() {
	MyUnion myUnion;

	myUnion.intValue = 42;
	cout << "Integer value: " << myUnion.intValue << endl;

	myUnion.floatValue = 3.14f;
	cout << "Float value: " << myUnion.floatValue << endl;

	myUnion.charValue = 'A';
	cout << "Char value: " << myUnion.charValue << endl;
}