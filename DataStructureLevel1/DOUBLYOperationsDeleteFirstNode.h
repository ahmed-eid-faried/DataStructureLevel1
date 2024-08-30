#pragma once
#include <iostream>
#include "Doubly Linked List Insert At Beginning.h"
using namespace std;

void DeleteFirstNode(Node<int>*& head) {
	//1-Store a reference to the head node in a temporary variable.
	//2-Update the head pointer to point to the next node in the list.
	//3-Set the previous pointer of the new head to NULL.
	//4-Delete the temporary reference to the old head node.
	if (head == NULL)return;
	Node<int>* temp = head;
	head = head->next;
	if (head != NULL)head->prev = NULL;
	delete temp;
}

void DOUBLYOperationsDeleteFirstNode()
{
	Node<int>* head = NULL;

	InsertAtBeginning(head, 5);
	InsertAtBeginning(head, 4);
	InsertAtBeginning(head, 3);
	InsertAtBeginning(head, 2);
	InsertAtBeginning(head, 1);

	cout << "\nLinked List Contenet:\n";
	PrintList(head);
	PrintListDetails(head);


	DeleteFirstNode(head);


	cout << "\n\n\nLinked List Contenet after delete:\n";
	PrintList(head);
	PrintListDetails(head);
}