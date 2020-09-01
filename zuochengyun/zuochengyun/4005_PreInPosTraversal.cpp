////二叉树先中后序遍历
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stack>
//using namespace std;
//
//typedef struct node {
//	int data;
//	struct node* left;
//	struct node* right;
//	node(int data_) :data(data_), left(NULL), right(NULL) {
//	}
//}Node,*ListNode;
//stack<Node*> treeStack;
//void preOrder(Node* head) {
//	if (head == NULL) {
//		return;
//	}
//	cout << head->data<<endl;
//	preOrder(head->left);
//	preOrder(head->right);
//}
//void inOrder(Node* head) {
//	if (head == NULL) {
//		return;
//	}
//	inOrder(head->left);
//	cout << head->data << endl;
//	inOrder(head->right);
//}
//void posOrder(Node* head) {
//	if (head == NULL) {
//		return;
//	}
//	posOrder(head->left);
//	posOrder(head->right);
//	cout << head->data << endl;
//}
//void preOrder2(Node* head) {
//	if (head == NULL) {
//		return;
//	}
//	treeStack.push(head);
//	while (!treeStack.empty()) {
//		//每次取栈顶元素，进行判断是否已经遍历他的左右子树
//		Node *tmp = treeStack.top();
//		treeStack.pop();
//		if (tmp != nullptr) {
//			if (tmp->right) treeStack.push(tmp->right);
//			if (tmp->left) treeStack.push(tmp->left);
//			treeStack.push(tmp);
//			treeStack.push(nullptr);
//		}
//		else {
//			cout << treeStack.top()->data<< endl;
//			treeStack.pop();
//		}
//	}
//}
//void inOrder2(Node* head) {
//	if (head == NULL) {
//		return;
//	}
//	treeStack.push(head);
//	while (!treeStack.empty()) {
//		Node* tmp = treeStack.top();
//		treeStack.pop();
//		if (tmp != nullptr) {
//			if(tmp->right) treeStack.push(tmp->right);
//			treeStack.push(tmp);
//			treeStack.push(nullptr);
//			if (tmp->left) treeStack.push(tmp->left);
//		}
//		else {
//			cout<<treeStack.top()->data<<endl;
//			treeStack.pop();
//		}
//	}
//}
//void posOrder2(Node* head) {
//	if (head == NULL) {
//		return;
//	}
//	treeStack.push(head);
//	while (!treeStack.empty()) {
//		Node* tmp = treeStack.top();
//		treeStack.pop();
//		if (tmp != nullptr) {
//		    treeStack.push(tmp);
//			treeStack.push(nullptr);
//			if (tmp->right) treeStack.push(tmp->right);
//			if (tmp->left) treeStack.push(tmp->left);
//		}
//		else {
//			cout << treeStack.top()->data << endl;
//			treeStack.pop();
//		}
//	}
//}
//int main() {
//	Node node1 = Node(1);
//	Node node2 = Node(2);
//	Node node3 = Node(3);
//	node1.left = &node2;
//	node1.right = &node3;
//	preOrder(&node1);
//	inOrder(&node1);
//	posOrder(&node1);
//	cout << "------------------非递归遍历-------------------" << endl;
//	preOrder2(&node1);
//	inOrder2(&node1);
//	posOrder2(&node1);
//	return 0;
//}