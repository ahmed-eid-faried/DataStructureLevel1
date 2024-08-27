#pragma once
#include <stack>
#include <iostream>
using namespace std;
void PrintStack(stack<int> MyStack, string Title) {
	cout << endl << Title << " = ";
	while (!MyStack.empty()) {
		cout << MyStack.top() << " ";
		MyStack.pop();
	}
}
void stackSwapEx()
{
	stack<int> MyStack1;
	stack<int> MyStack2;

	MyStack1.push(1);
	MyStack1.push(11);
	MyStack1.push(111);
	MyStack1.push(1111);

	MyStack2.push(2);
	MyStack2.push(22);
	MyStack2.push(222);
	MyStack2.push(2222);

	PrintStack(MyStack1, "MyStack1");
	PrintStack(MyStack2, "MyStack2");

	MyStack1.swap(MyStack2);

	PrintStack(MyStack1, "MyStack1");
	PrintStack(MyStack2, "MyStack2");
}