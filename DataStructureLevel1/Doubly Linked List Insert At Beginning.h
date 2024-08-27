#pragma once
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
template<class T>
class Node {
public:
	T value;
	Node* next;
	Node* prev;
};

void InsertAtBeginning(Node<int>*& head, int value) {
	//1 - Create a new node with the desired value.
	//2 - Set the next pointer of the new node to the current head of the list.
	//3 - Set the previous pointer of the current head to the new node.
	//4 - Set the new node as the new head of the list.
	Node<int>* newNode = new Node<int>();

	newNode->value = value;
	newNode->prev = NULL;
	newNode->next = head;
	if (head != NULL) {
		head->prev = newNode;
	}
	head = newNode;
}
void PrintNodeDetails(Node<int>* head) {
	string prev = (head->prev != NULL) ? to_string(head->prev->value) : "NULL";
	string next = (head->next != NULL) ? to_string(head->next->value) : "NULL";
	cout << setw(4) << prev;
	cout << " <--> " << head->value << " <--> ";
	cout << next;
}
// Print the linked list
void PrintListDetails(Node<int>* head) {
	while (head != NULL)
	{
		PrintNodeDetails(head);
		head = head->next;
		cout << endl;
	}
}
// Print the linked list
void PrintList(Node<int>* head) {
	cout << "NULL <--> ";
	while (head != NULL) {
		cout << head->value << " <--> ";
		head = head->next;
	}
	cout << "NULL ";
}
void DoublyLinkedListInsertAtBeginning()
{
	Node<int>* head = NULL;

	InsertAtBeginning(head, 5);
	InsertAtBeginning(head, 4);
	InsertAtBeginning(head, 3);
	InsertAtBeginning(head, 2);
	InsertAtBeginning(head, 1);

	cout << "\nLinked List Contenet:\n";
	PrintList(head);
	cout << endl << endl;
	PrintListDetails(head);
}