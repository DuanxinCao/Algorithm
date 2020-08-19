//���ƺ������ָ�������
//������ÿ���ڵ���渴��һ�����ڵ㣺
//	���浱ǰ�ڵ��next��newһ���ڵ㣬ʹ��ǰ�ڵ�ָ���½ڵ㣬�½ڵ�ָ��next
//Ȼ��ÿһ�������ڵ��randָ����£�
//	����ǰ�ڵ��rand��next��ֵ����ǰ�ڵ��next����ǰ�ڵ������λ
//	���ս�head��next�������������ڷ��ؽ��
//���ԭʼ�ڵ�͸����ڵ���뿪�����ظ����ڵ��ͷ��㣺
//	���浱ǰ�ڵ��next�ڵ㣬����ǰ�ڵ�ָ��ǰ�ڵ��next��next��
//	��ǰ�ڵ��next�ڵ��nextָ��ǰ�ڵ��next��next��next	
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef struct Node {
	int data;
	struct Node* next;
	struct Node* rand;
	Node(int data) :next(NULL), rand(NULL) {
		this->data = data;
	}
}node,*linkedList;
void printList(node* head) {
	while (head != NULL) {
		cout << head->data;
		if (head->rand != NULL)
			cout << head->rand->data<<" ";
		head = head->next;
	}
}
node* copyList(node* head) {
	if (head == NULL)
		return NULL;
	node* cur = head;
	node* next = NULL;
	while (cur != NULL) {
		next = cur->next;
		cur->next = new node(cur->data);
		cur->next->next = next;
		cur = next;
	}
	cur = head;
	while (cur != NULL) {
		cur->next->rand = cur->rand==NULL?NULL:cur->rand->next;
		cur = cur->next->next;
	}
	node* res = head->next;
	cur = head;
	next = NULL;
	while (cur != NULL) {
		next = cur->next;
		cur->next = next->next;
		next->next = cur->next!=NULL?cur->next->next:NULL;//β���п�
		cur = cur->next;
	}
	return res;
}
int main() {
	node* node1 = new node(1);
	node* node2 = new node(2);
	node* node3 = new node(3);
	node* node4 = new node(4);
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node2->rand = node4;
	node* res=copyList(node1);
	printList(res);
	return 0;
}