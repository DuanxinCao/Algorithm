//给定一个链表list， 
//如果： list = 1 调整之后1。 list = 1->2 调整之后1->2 list = 1->2->3 
//调整之后1->2->3 list = 1->2->3->4 调整之后1->3->2->4 list = 1->2->3->4->5 
//调整之后1->3->2->4->5 list = 1->2->3->4->5->6 
//调整之后1->4->2->5->3->6 list = 1->2->3->4->5->6->7 
//调整之后1->4->2->5->3->6->7 根据上面的规律，调整一个任意长度的链表。
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//typedef struct node{
//	int value;
//	struct node* next;
//	node(int value_):next(NULL),value(value_){}
//}Node;
//void mergeLR(Node* head, Node* mid) {
//	Node* next = NULL;
//	while (head->next != NULL) {
//		next = mid->next;
//		mid->next = head->next;
//		head->next = mid;
//		head = mid->next;
//		mid = next;
//	}
//	head->next = mid;
//}
//void relocate(Node* head) {
//	if (head == NULL || head->next == NULL) {
//		return;
//	}
//	Node* node1 = head;
//	Node* node2 = head->next;
//	while (node2->next != NULL && node2->next->next != NULL) {
//		node1 = node1->next;
//		node2 = node2->next->next;
//	}
//	node1->next = NULL;
//	node2 = node1->next;
//	mergeLR(head, node2);
//}
//int main() {
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
