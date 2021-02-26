////寻找两个链表的交点：
////	两个链表都没有环时，若尾节点不相同，则有交点，否则长的链表先走n步，
////然后两个链表一起走，直到两个链表相遇。
////	两个链表都有环时，若他们的环入口相同，则重复上一步，否则从第一个链
////表的入口处遍历链表，查看是否有第二个链表的入口。
////	两个链表一个有环，一个没有环时，两个链表不存在交点。
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
//}node;
//node* findInNoLoop(node* head1, node* head2) {
//	node* node1 = head1;
//	node* node2 = head2;
//	int n = 0;
//	while (node1 ->next!= NULL) {
//		node1 = node1->next;
//		n++;
//	}
//	while (node2->next != NULL) {
//		node2 = node2->next;
//		n--;
//	}
//	if (node1 != node2) {
//		return NULL;
//	}
//	node1 = head1;
//	node2 = head2;
//	if (n >= 0) {
//		while (n > 0) {
//			node1 = node1->next;
//			n--;	//~~~~~~
//		}
//	}
//	else {
//		while (n < 0) {
//			node2 = node2->next;
//			n++;	//~~~~~~
//		}
//	}
//	while (node1 != node2) {
//		node1 = node1->next;
//		node2 = node2->next;
//	}
//	return node1;
//}
//node* findInLoop(node* head1, node* loop1, node* head2, node* loop2) {
//	if (loop1 == loop2) {
//		node* node1 = head1;
//		node* node2 = head2;
//		int n = 0;
//		while (node1->next !=loop1) {
//			node1 = node1->next;
//			n++;
//		}
//		while (node2->next != loop1) {
//			node2 = node2->next;
//			n--;
//		}
//		if (node1 != node2) {
//			return loop1;
//		}
//		node1 = head1;
//		node2 = head2;
//		if (n >= 0) {
//			while (n > 0) {
//				node1 = node1->next;
//			}
//		}
//		else {
//			while (n < 0) {
//				node2 = node2->next;
//			}
//		}
//		while (node1 != node2) {
//			node1 = node1->next;
//			node2 = node2->next;
//		}
//		return node1;
//	}
//	else {
//		while (loop1->next != loop1) {
//			if (loop1 == loop2)
//				return loop1;
//			loop1 = loop1->next;
//		}
//		return NULL;
//	}
//}
//node* findLoop(node* head) {
//	//先判空
//	if (head == NULL || head->next ==NULL || head->next->next == NULL) {
//		return NULL;
//	}
//	node* slow = head->next;
//	node* fast = head->next->next;
//	while (slow!=fast&&fast!=NULL&&fast->next!=NULL) {
//		slow == slow->next;
//		fast = fast->next->next;
//	}
//	if (slow == fast) {//~~~~~~
//		fast = head;
//		while (fast != slow) {
//			fast = fast->next;
//			slow = slow->next;
//		}
//		return slow;
//	}
//	return NULL;
//}
//node* findNode(node* head1, node* head2) {
//	if (head1 == NULL || head2 == NULL) {
//		return NULL;
//	}
//	node* loop1 = findLoop(head1);
//	node* loop2 = findLoop(head2);
//	if (loop1 == NULL && loop2 == NULL) {
//		return findInNoLoop(head1, head2);
//	}
//	if (loop1 != NULL && loop2 != NULL) {
//		return findInLoop(head1, loop1, head2, loop2);
//	}
//	return NULL;
//}
//int main() {
//	node* node1 = new node(1);
//	node* node2 = new node(2);
//	node* node3 = new node(3);
//	node* node4 = new node(4);
//	node* node5 = new node(5);
//	node1->next = node2;
//	node2->next = node3;
//	node3->next = node4;
//	node5->next = node3;
//	node* res = findNode(node1, node5);
//	if (res != NULL) {
//		cout << res->data;
//	}
//	return 0;
//}