//#include <iostream>
//#include <vector>
//#include <limits>
//using namespace std;
//
//
//////����ʵ��ջ
////public class ArrayToStack
////{
////public:
////	ArrayToStack(int initsize);
////	void push(int obj);
////	int pop();
////private:
////	vector<int> num;
////	int size;
////};
////
////ArrayToStack::ArrayToStack(int initsize) {
////	this.num.reverse(initsize);
////	this.size = 0;
////}
////ArrayToStack::push(int obj) {
////	if (size == num.size())
////		cout << "ջ����" << endl;
////	else
////		num[size++] = obj;
////}
////int ArrayToStack::pop() {
////	if (size == 0) {
////		cout << "ջ����" << endl;
////		return INT_MIN;
////	}
////	else {
////		return num[size--]
////	}
////}
//
//
////����ʵ�ֶ���
//public class ArrayToQueue {
//public:
//	ArrayToQueue::ArrayToQueue(int initsize);
//	void push(int obj);
//	int pop();
//private:
//	int size;
//	vector<int> num;
//	int first;
//	int last;
//};
//ArrayToQueue::ArrayToQueue(int initsize) {
//	this.num.reverse(initsize);
//	this.first = 0;
//	this.last = 0;
//	this.size = 0;
//}
//ArrayToQueue::push(int obj) {
//	if (size == num.size()-1)
//		cout << "��������" << endl;
//	else {
//		size++;
//		num[last] = obj;
//		last = last == num.size() - 1 ? 0 : last+1;
//	}
//}
//int ArrayToQueue::pop() {
//	if (size ==0) {
//		cout << "���п���" << endl;
//		return INT_MIN;
//	}
//	else {
//		size--;
//		int tmp = num[first];
//		first = first == num.size() - 1 ? 0 : first+1;
//		return tmp;
//	}
//}