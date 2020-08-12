//ջʵ�ֶ��У�����ʵ��ջ
#include <iostream>
#include <stack>
#include <queue>
#include <limits>
using namespace std;

////ջʵ�ֶ���
//public class StackToQueue {
//public:
//	StackToQueue();
//	void push(int num);
//	int pop();
//	int peek();
//private:
//	stack<int> stackPush;
//	stack<int> stackPop;
//};
//StackToQueue::StackToQueue() {
//}
//void StackToQueue::push(int num) {
//	stackPush.push(num);
//}
//int StackToQueue::pop() {
//	if (stackPush.empty() && stackPop.empty()) {
//		cout<<"ջ��û��������"��
//	}
//	else if (stackPop.empty()) {
//		while (!stackPush.empty()) {
//			stackPop.push(stackPush.pop());
//		}
//		return stackPop.pop();
//	}
//	else {
//		return stackPop.pop();
//	}
//}
//int StackToQueue::peek() {
//	if (stackPush.empty() && stackPop.empty()) {
//		cout << "ջ��û��������"��
//	}
//	else if (stackPop.empty()) {
//		while (!stackPush.empty()) {
//			stackPop.push(stackPush.pop());
//		}
//		return stackPop.top();
//	}
//	else {
//		return stackPop.top();
//	}
//}


//����ʵ��ջ
puclic class QueueToStack {
public:
	QueueToStack();
	void push(int num);
	int pop();
	int peek();
private:
	queue<int> queue1;
	queue<int> queue2;
};
QueueToStack::QueueToStack() {
}
void QueueToStack::push(int num) {
	queue1.push(num);
}
int QueueToStack::pop() {
	if (queue1.empty()) {
		cout << "���п���";
	}
	else {
		while (queue1.size() != 1) {
			queue2.push(queue1.pop());
		}
	}
	int tmp = queue1.pop();
	swap(queue1, queue2);
	return tmp;
}
int QueueToStack::peek() {
	if (queue1.empty()) {
		cout << "���п���";
	}
	else {
		while (queue1.size() != 1) {
			queue2.push(queue1.pop());
		}
	}
	int tmp = queue1.pop();
	queue2.push(tmp);
	swap(queue1, queue2);
	return tmp;
}