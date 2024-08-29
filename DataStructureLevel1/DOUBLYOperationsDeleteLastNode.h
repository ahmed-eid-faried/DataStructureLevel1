#pragma once
#include <iostream>
#include "Doubly Linked List Implementation.h"
#include "Doubly Linked List Insert At Beginning.h"
#include "DOUBLYOperationsFindNode.h"
#include "DOUBLYOperationsInsertAfter.h"
#include "DOUBLYOperationsInsertAtEnd.h"
#include "DOUBLYOperationsDeleteNode.h"
using namespace std;

void DeleteLastNode(Node<int>*& head) {
	//1-Traverse the list to find the last node.
	//2-Set the next pointer of the second-to-last node to NULL.
	//3-Delete the last node.
	if (head == NULL)return;

	if (head->next == NULL) {
		delete head;
		head = NULL;
		return;
	}
	//Node<int>* current = head;
	//while (current->next->next != NULL) {
	//	current = current->next;
	//}
	//Node<int>* temp = current->next;
	//current->next = NULL;
	//delete temp;
	Node<int>* current = head;
	while (current->next != NULL) {
		current = current->next;
	}
	Node<int>* temp = current;
	current->prev->next = NULL;
	delete temp;
}



void DOUBLYOperationsDeleteLastNode()
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

	DeleteLastNode(head);

	cout << "\n\n\nLinked List Contenet after delete last node:\n";
	PrintList(head);
	PrintListDetails(head);
}