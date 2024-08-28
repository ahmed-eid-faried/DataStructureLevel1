#pragma once
#include <iostream>
#include "Doubly Linked List Insert At Beginning.h"
#include "DOUBLYOperationsFindNode.h"
using namespace std;


void DeleteNode(Node<int>*& head, Node<int>*& NodeToDelete) {
	//1-Set the next pointer of the previous node to the next pointer of the current node.
	//2-Set the previous pointer of the next node to the previous pointer of the current node.
	//3-Delete the current node.
	if (head == NULL || NodeToDelete == NULL)return;
	if (head == NodeToDelete)head = NodeToDelete;
	if (NodeToDelete->prev->next != NULL)NodeToDelete->prev->next = NodeToDelete->next;
	if (NodeToDelete->next->prev != NULL)NodeToDelete->next->prev = NodeToDelete->prev;
	delete NodeToDelete;
}

void DOUBLYOperationsDeleteNode()
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

	//Traverse the list to find the node to be deleted.
	Node<int>* N1 = Find(head, 4);

	DeleteNode(head, N1);

	cout << "\n\n\nLinked List Contenet after delete:\n";
	PrintList(head);
	PrintListDetails(head);

}