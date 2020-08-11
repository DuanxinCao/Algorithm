#include <iostream>
#include <stack>
#include <limits>
using namespace std;

public class Stack1 {
public:
	Stack1();
	void push(int obj);
	int pop();
	int getMin();
private:
	stack<int> dataStack;
	stack<int> minDataStack;
};
Stack1::Stack1() {
}
Stack1::push(int obj) {
	if (minDataStack.empty()) {
		minDataStack.push(obj);
	}
	else if (obj > minDataStack.top()) {
		minDataStack.push(minDataStack.top());
	}
	else {
		minDataStack.push(obj);
	}
	dataStack.push(obj);
}
int Stack1::pop() {
	if (dataStack.empty()) {
		cout << "Õ»Îª¿Õ" << endl;
		return INT_MIN;
	}
	else {
		minDataStack.pop();
		return dataStack.pop();
	}
}
int Stack::getmin() {
	if (dataStack.empty()) {
		cout << "Õ»Îª¿Õ" << endl;
		return INT_MIN;
	}
	else {
		return minDataStack.top();
	}
}