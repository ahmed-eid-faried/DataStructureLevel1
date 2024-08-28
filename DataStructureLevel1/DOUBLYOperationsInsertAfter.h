#pragma once
#include <iostream>
#include "Doubly Linked List Insert At Beginning.h"
#include "DOUBLYOperationsFindNode.h"
using namespace std;

void InsertAfter(Node<int>* current, int value) {
	//1 - Create a new node with the desired value.
	//2-Set the next pointer of the new node to the next node of the current node.
	//3-Set the previous pointer of the new node to the current node.
	//4-Set the next pointer of the current node to the new node.
	//5-Set the previous pointer of the next node to the new node(if it exists).
	Node<int>* newNode = new Node<int>();
	newNode->value = value;
	newNode->next = current->next;
	newNode->prev = current;

	current->next = newNode;
	if (current->next != NULL)	current->next->prev = newNode;
}

void DOUBLYOperationsInsertAfter()
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
 	Node<int>* N1 = Find(head, 2);

	InsertAfter(N1, 500);

	cout << "\n\n\nLinked List Contenet after InsertAfter:\n";
	PrintList(head);
 	PrintListDetails(head);

}