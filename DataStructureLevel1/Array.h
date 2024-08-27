#pragma once
#include <iostream>
#include "clsArray.h"  
void ArrayEx() {
	// Create an array with an initial capacity of 5
	clsArray<int> arr(5);

	// Add elements to the array
	arr.push(10);
	arr.push(20);
	arr.push(30);
	arr.push(40);
	arr.push(50);

	// Display the elements
	cout << "Array elements: ";
	arr.Print();

	arr.AddElements(202,202,92,2);

	// Display the elements
	cout << "Array elements by AddElements: ";
	arr.Print();
	
	// Add an element at the first position
	arr.AddElementAtFirst(5);
	cout << "After adding 5 at the first position: ";
	arr.Print();

	// Add an element after a specific index
	arr.AddElementAfterIndex(2, 25);  // Adds 25 after index 2
	cout << "After adding 25 after index 2: ";
	arr.Print();


	// Remove the first element
	arr.RemoveFirst();
	cout << "After removing the first element: ";
	arr.Print();

	// Remove an element by value
	arr.RemoveValue(25);
	cout << "After removing the value 25: ";
	arr.Print();


	// Remove the last element
	arr.pop();
	cout << "After removing the last element: ";
	arr.Print();

}
