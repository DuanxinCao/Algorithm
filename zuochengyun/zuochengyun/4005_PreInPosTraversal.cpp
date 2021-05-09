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
//	if (head == NULL)
//		return;
//	cout << head->data<endl;
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
//	if (head == NULL)
//		return;
//	stack<Node*> sta;
//	sta.push(head);
//	while (!sta.empty()) {
//		Node* node = sta.top();
//		sta.pop();
//		if (node == NULL) {
//			cout << sta.top()->data << endl;
//			sta.pop();
//		}
//		else {
//			if (node->right != NULL)
//				sta.push(node->right);
//			if (node->left != NULL) {
//				sta.push(node->left);
//			}
//			sta.push(node);
//			sta.push(NULL);
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




//
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
//	if (head == nullptr)
//		return;
//	cout << head->data << endl;
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
//	if (head == NULL)
//		return;
//	stack<Node*> sta;
//	sta.push(head);
//	while (!sta.empty()) {
//		Node* node = sta.top();
//		sta.pop();
//		if (node != nullptr) {
//			if (node->right != NULL)
//				sta.push(node->right);
//			if (node->left != NULL)
//				sta.push(node->left);
//			sta.push(node);
//			sta.push(nullptr);
//		}
//		else {
//			cout << sta.top() << endl;
//			sta.pop();
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
//	//inOrder(&node1);
//	//posOrder(&node1);
//	cout << "------------------非递归遍历-------------------" << endl;
//	//preOrder2(&node1);
//	//inOrder2(&node1);
//	//posOrder2(&node1);
//	return 0;
//}