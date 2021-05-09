////在二叉树中找到一个节点的后继节点 
////【题目】 现在有一种新的二叉树节点类型如下： 
////public class Node { public int value; public Node left; public Node right;
////					public Node parent; public Node(int data) 
////{ this.value = data; } }
//
////中序遍历的后继节点，如果有右子节点，则找右子节点的重复左子节点
////如果没有右子节点，该节点时左子节点，则找他的父节点
////如果没有右子节点，该节点时右子节点，则找他的父节点作为左子节点的父树
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//typedef struct node {
//	int data;
//	struct node* left;
//	struct node* right;
//	struct node* parent;
//	node(int data_) :data(data_), left(NULL), right(NULL), parent(NULL) {
//	}
//}Node,*ListNode;
//Node* getNode(Node* node) {
//	if (node == NULL)
//		return NULL;
//	while (node->left != NULL) {
//		node = node->left;
//	}
//	return node;
//}
//Node* getNextNode(Node* node) {
//	if (node == NULL)
//		return NULL;
//	if (node->right != NULL) {
//		return getNode(node->right);
//	}
//	Node* parent = node->parent;
//	while (parent != NULL && parent->left != node) {
//		node = parent;
//		parent = parent->parent;
//	}
//	return parent;
//}
//int main() {
//	Node node1 = Node(1);
//	Node node2 = Node(2);
//	Node node3 = Node(3);
//	node1.left = &node2;
//	node1.right = &node3;
//	node2.parent = &node1;
//	node3.parent = &node1;
//	Node* res = getNextNode(&node1);
//	if (res != NULL)
//		cout << res->data<<endl;
//	return 0;
//}
//

//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//typedef struct node {
//	int data;
//	struct node* left;
//	struct node* right;
//	struct node* parent;
//	node(int data_) :data(data_), left(NULL), right(NULL), parent(NULL) {
//	}
//}Node,*ListNode;
//Node* getNode(Node* node) {
//	if (node->left == nullptr)
//		return node;
//	return getNode(node->left);
//}
//Node* getNextNode(Node* node) {
//	if (node == nullptr)
//		return nullptr;
//	if (node->right != NULL)
//		return getNode(node->right);
//	else {
//		Node* parent = node->parent;
//		while (parent->left != node) {
//			if (parent->parent == nullptr)
//				return nullptr;
//			Node* tmp = parent->parent;
//			node = parent;
//			parent = tmp;
//		}
//		return parent;
//	}
//
//}
//int main() {
//	Node node1 = Node(1);
//	Node node2 = Node(2);
//	Node node3 = Node(3);
//	node1.left =&node2;
//	node1.right = &node3;
//	node2.parent = &node1;
//	node3.parent = &node1;
//	Node* res = getNextNode(&node1);
//	if (res != NULL)
//		cout << res->data<<endl;
//	return 0;
//}