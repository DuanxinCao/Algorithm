////����С�д����δ�ӡ�����е����֣�
////	����ΪС�д�����������ͷָ���βָ�룬����nextָ��������¼
////��������Ҫ������ָ�롣
////	�����Ľ�������Ϊnextָ��Ϊ�գ�ÿ�α������Ƚϵ�ǰ�ڵ��ֵ��Ŀ��ֵ��С��
////Ȼ����nextָ���¼��һ���ڵ㣬��ǰ�ڵ�nextָ��NULL������ǰ�ڵ���ӵ����ʵ�����
////Ȼ��Ŀ������ָ����ơ�
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//typedef struct Node {
//	int data;
//	struct Node* next;
//	Node(int data) :next(NULL) {
//		this->data = data;
//	}
//}node,*linkedList;
//void printList(node* res) {
//	if (res == NULL)
//		return;
//	while (res != NULL) {
//		cout << res->data;
//		res = res->next;
//	}
//}
//node* printLinkedList(node* node1,int k) {
//	node *head1 = NULL;
//	node *tail1 = NULL;
//	node *head2 = NULL;
//	node *tail2 = NULL;
//	node *head3 = NULL;
//	node *tail3 = NULL;
//	node *next = node1;
//	while (next != NULL) {
//		next = node1->next;
//		node1->next = NULL;
//		if (node1->data > k) {
//			if (head3 == NULL) {
//				head3 = node1;
//				tail3 = node1;
//			}
//			else {
//				tail3->next = node1;
//				tail3 = tail3->next;
//			}
//		}
//		else if (node1->data < k) {
//			if (head1 == NULL) {
//				head1 = node1;
//				tail1 = node1;
//			}
//			else {
//				tail1->next = node1;
//				tail1 = tail1->next;
//			}
//		}
//		else {
//			if (head2 == NULL) {
//				head2 = node1;
//				tail2 = node1;
//			}
//			else {
//				tail2->next = node1;
//				tail2 = tail2->next;
//			}
//		}
//		node1 = next;
//	}
//	if (tail1 != NULL && tail2 != NULL) {
//		tail1->next = head2;
//		tail2->next = head3;
//		return head1;
//	}
//	else if (tail1 != NULL && tail2 == NULL) {
//		tail1->next = head3;
//		return head1;
//	}
//	else if (tail1 == NULL && tail2 != NULL) {
//		tail2->next = head3;
//		return head2;
//	}
//	else
//		return head3;
//}
//int main() {
//	node* node1 = new Node(5);
//	node1->next = new Node(3);
//	node1->next->next = new Node(1);
//	printList(node1);
//	node * res=printLinkedList(node1,3);
//	printList(res);
//	return 0;
//}