////打印两个有序链表的公共部分
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//typedef struct Node {
//	int data;
//	struct Node* next;
//	Node(int data) :next(NULL) {
//		this->data = data;
//	}
//}node, * linkedList;
//void printCommonPart(Node* node1, Node* node2) {
//	while (node1 != NULL && node2 != NULL) {
//		if (node1->data > node2->data) {
//			node2 = node2->next;
//		}
//		else if (node1->data < node2->data) {
//			node1 = node1->next;
//		}
//		else{
//			cout << node1->data;
//			node1 = node1->next;
//			node2 = node2->next;
//		}
//	}
//}
//int main() {
//	node* node1=new node(1);
//	node1->next =new node(2);
//	node1->next->next = new node(7);
//	node1->next->next->next = new node(8);
// 
//	node* node2=new node(3);
//	node2->next = new node(7);
//	node2->next->next = new node(8);
//	printCommonPart(node1, node2);
////delete 释放内存
//	return 0;
//}