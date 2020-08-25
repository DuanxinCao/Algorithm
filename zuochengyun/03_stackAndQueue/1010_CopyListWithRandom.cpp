//复制含有随机指针的链表：
//首先在每个节点后面复制一个本节点：
//	保存当前节点的next，new一个节点，使当前节点指向新节点，新节点指向next
//然后将每一个副本节点的rand指针更新：
//	将当前节点的rand的next赋值给当前节点的next，当前节点后移两位
//	最终将head的next保存下来，用于返回结果
//最后将原始节点和副本节点分离开，返回副本节点的头结点：
//	保存当前节点的next节点，将当前节点指向当前节点的next的next。
//	当前节点的next节点的next指向当前节点的next的next的next	
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
		next->next = cur->next!=NULL?cur->next->next:NULL;//尾部判空
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