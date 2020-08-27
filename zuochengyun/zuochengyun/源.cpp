//�ڶ��������ҵ�һ���ڵ�ĺ�̽ڵ� 
//����Ŀ�� ������һ���µĶ������ڵ��������£� 
//public class Node { public int value; public Node left; public Node right;
//					public Node parent; public Node(int data) 
//{ this.value = data; } }

//��������ĺ�̽ڵ㣬��������ӽڵ㣬�������ӽڵ���ظ����ӽڵ�
//���û�����ӽڵ㣬�ýڵ�ʱ���ӽڵ㣬�������ĸ��ڵ�
//���û���Լ��㣬�ýڵ�ʱ���ӽڵ㣬�������ĸ��ڵ���Ϊ���ӽڵ�ĸ���
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef struct node {
	int data;
	struct node* left;
	struct node* right;
	struct node* parent;
	node(int data_) :data(data_), left(NULL), right(NULL), parent(NULL) {
	}
}Node,*ListNode;
Node* getNode(Node* node) {
	if (node == NULL)
		return NULL;
	while (node->left != NULL) {
		node = node->left;
	}
	return node;
}
Node* getNextNode(Node* node) {
	if (node == NULL)
		return NULL;
	if (node->right != NULL) {
		return getNode(node->right);
	}
	Node* parent = node->parent;
	while (parent != NULL && parent->left != node) {
		node = parent;
		parent = parent->parent;
	}
	return parent;
}
int main() {
	Node node1 = Node(1);
	Node node2 = Node(2);
	Node node3 = Node(3);
	node1.left = &node2;
	node1.right = &node3;
	node2.parent = &node1;
	node3.parent = &node1;
	Node* res = getNextNode(&node1);
	if (res != NULL)
		cout << res->data<<endl;
	return 0;
}