////�ж�һ�������Ƿ�Ϊ��������
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
//	while(nodetmp2->next!=NULL&&nodetmp2->next->next!=NULL){	//����ָ�����
//		nodetmp1 = nodetmp1->next;
//		nodetmp2 = nodetmp2->next;
//	}
//	nodetmp2 = nodetmp1->next;//�ұ߽ڵ��ͷָ��
//	nodetmp1->next = NULL;
//	node* n3 = NULL;
//	while (nodetmp2 != NULL) {	//��ת����
//		n3 = nodetmp2->next;
//		nodetmp2->next = nodetmp1;
//		nodetmp1 = nodetmp2;
//		nodetmp2 = n3;
//	}
//	n3 = nodetmp1;	//��ת�������
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
//	//�ָ�ԭ��
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
