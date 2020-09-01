//#include <iostream>
//#include <vector>
//#include <limits>
//using namespace std;
//
//
//////数组实现栈
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
////		cout << "栈满了" << endl;
////	else
////		num[size++] = obj;
////}
////int ArrayToStack::pop() {
////	if (size == 0) {
////		cout << "栈空了" << endl;
////		return INT_MIN;
////	}
////	else {
////		return num[size--]
////	}
////}
//
//
////数组实现队列
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
//		cout << "队列满了" << endl;
//	else {
//		size++;
//		num[last] = obj;
//		last = last == num.size() - 1 ? 0 : last+1;
//	}
//}
//int ArrayToQueue::pop() {
//	if (size ==0) {
//		cout << "队列空了" << endl;
//		return INT_MIN;
//	}
//	else {
//		size--;
//		int tmp = num[first];
//		first = first == num.size() - 1 ? 0 : first+1;
//		return tmp;
//	}
//}