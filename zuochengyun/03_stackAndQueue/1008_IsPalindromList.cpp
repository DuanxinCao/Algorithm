////判断一个链表是否为回文链表
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
//}node,*linkedList;
//bool isPalindrom(node* node1) {
//	if (node1 == NULL || node1->next == NULL) {
//		return true;
//	}
//	node *nodetmp1 = node1;
//	node *nodetmp2 = node1;
//	while(nodetmp2->next!=NULL&&nodetmp2->next->next!=NULL){	//快慢指针遍历
//		nodetmp1 = nodetmp1->next;
//		nodetmp2 = nodetmp2->next;
//	}
//	nodetmp2 = nodetmp1->next;//右边节点的头指针
//	nodetmp1->next = NULL;
//	node* n3 = NULL;
//	while (nodetmp2 != NULL) {	//反转链表
//		n3 = nodetmp2->next;
//		nodetmp2->next = nodetmp1;
//		nodetmp1 = nodetmp2;
//		nodetmp2 = n3;
//	}
//	n3 = nodetmp1;	//反转后的链表
//	nodetmp2 = node1;
//	bool flag = true;
//	while (nodetmp1!=NULL&&nodetmp2 != NULL) {
//		if (nodetmp1->data != nodetmp2->data) {
//			flag = false;
//			break;
//		}
//		nodetmp2 = nodetmp2->next;
//		nodetmp1 = nodetmp1->next;
//	}
//	//恢复原串
//	nodetmp1 = n3->next;
//	n3->next = NULL;
//	while (nodetmp1 != NULL) {
//		nodetmp2 = nodetmp1->next;
//		nodetmp1->next = n3;
//		n3 = nodetmp1;
//		nodetmp1 = nodetmp2;
//	}
//	return flag;
//}
//int main() {
//	node* node1=new node(1);
//	node1->next =new node(2);
//	node1->next->next = new node(2);
//	node1->next->next->next = new node(1);
//	cout << isPalindrom(node1);
//	return 0;
//}
