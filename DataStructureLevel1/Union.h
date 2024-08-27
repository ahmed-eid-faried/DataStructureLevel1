#pragma once
#include <iostream>
using namespace std;

union MyUnion {
	int intValue;
	float floatValue;
	char charValue;
};

void UnionEx() {

	MyUnion myUnion1;
	myUnion1.intValue = 33;
	cout << "Integer: " << myUnion1.intValue << endl;
	myUnion1.floatValue = 33.33333f;
	cout << "Integer: " << myUnion1.floatValue << endl;
	myUnion1.charValue = 'x';
	cout << "Integer: " << myUnion1.charValue << endl;
}