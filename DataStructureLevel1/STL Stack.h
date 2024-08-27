#include <iostream>
#include <stack>
using namespace std;

void STLStackEx()

{
	stack<int> stackNumbers;
	stackNumbers.push(2);
	stackNumbers.push(22);
	stackNumbers.push(222);
	stackNumbers.push(2222);
	stackNumbers.push(22222);
	cout << "Count = " << stackNumbers.size() << endl;
	cout << "Numbers are:\n";
	while (!stackNumbers.empty()) {
		cout << stackNumbers.top() << endl;
		stackNumbers.pop();
	}
};