#pragma once
#include <iostream>
#include "Doubly Linked List Insert At Beginning.h"

using namespace std;
Node<int>* Find(Node<int>* head, int Value) {
	while (head != NULL) {
		if (head->value == Value)
			return head;
		head = head->next;
	}
	return NULL;
}
 
void DOUBLYOperationsFindNode()
{
	Node<int>* head = NULL;

	InsertAtBeginning(head, 5);
	InsertAtBeginning(head, 4);
	InsertAtBeginning(head, 3);
	InsertAtBeginning(head, 2);
	InsertAtBeginning(head, 1);

	cout << "\nLinked List Contenet:\n";
	PrintList(head);

	Node<int>* N1 = Find(head, 2);

	if (N1 != NULL)
		cout << "\n\n Node Found :-)\n";
	else
		cout << "\n\n Node Is not found :-(\n";
}