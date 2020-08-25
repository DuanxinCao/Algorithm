////反转单向链表和双向链表
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//typedef struct Node {
//	int data;
//	struct Node* next;
//	Node(int data) :next(NULL){
//		this->data = data;
//	}
//}node,*linkedList;
//typedef struct DoubleNode {
//	int data;
//	struct DoubleNode* next;
//	struct DoubleNode* last;
//	DoubleNode(int data) :next(NULL),last(NULL) {
//		this->data = data;
//	}
//}doubleNode, * DoubleLinkedList;
//void printList(node* head) {
//	while (head != NULL) {//~~~~~
//		cout << head->data;
//		head = head->next;
//	}
//}
//void printList(doubleNode* head) {
//	while (head != NULL) {
//		cout << head->data;
//		if (head->next != NULL)
//			cout << head->next->data;
//		if(head->last!=NULL)
//			cout<< head->last->data;
//		head = head->next;
//	}
//}
//doubleNode* reverse(doubleNode* head) {
//	doubleNode* pre = NULL;
//	doubleNode* next = head;
//	doubleNode* tmp = NULL;
//	while (next != NULL) {
//		tmp = next->next;
//		next->next = pre;
//		next->last = tmp;
//		pre = next;
//		next = tmp;
//	}
//	return pre;
//}
////反转单链表
//node* reverse(node* head) {
//	node* node1 = NULL;
//	node* node2 = head;
//	node* node3 = NULL;
//	while (node2 != NULL) {
//		node3 = node2->next;//~~~~~~
//		node2->next = node1;
//		node1 = node2;
//		node2 = node3;
//		//cout << node1->data;
//	}
//	return node1;
//}
//
//int main() {
//	node* node1 = new Node(5);
//	node1->next = new Node(3);
//	node1->next->next = new Node(1);
//	node* res = reverse(node1);
//	printList(res);
//	doubleNode* node2 = new doubleNode(2);
//	doubleNode* node3= new doubleNode(4);
//	doubleNode* node4 = new doubleNode(6);
//	node2->next = node3;
//	node3->next = node4;
//	node4->last = node3;
//	node3->last = node2;
//	doubleNode* res2 = reverse(node2);
//	printList(res2);
//	return 0;
//}