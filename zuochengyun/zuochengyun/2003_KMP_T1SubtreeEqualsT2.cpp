//给定两个二叉树T1和T2，返回T1的某个子树结构是否与T2的结构相等。
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//int getIndex(string a, string b);
//typedef struct treeNode {
//	int value;
//	struct treeNode* left;
//	struct treeNode* right;
//	treeNode(int v) :value(v), left(NULL), right(NULL) {
//
//	}
//}Node;
//string getString(Node* node) {
//	if (node == NULL)
//		return "#!";
//	string res = node->value + "!";
//	res += getString(node->left);
//	res += getString(node->right);
//	return res;
//}
//bool isContain(Node* a, Node* b) {
//	string stra = getString(a);
//	string strb = getString(b);
//	int pos = getIndex(stra,strb);
//	return pos >= 0 ? true : false;
//}
//vector<int> getNext(string str) {
//	if (str.empty()) {
//		return vector<int>(-1);
//	}
//	vector<int> next(str.size() - 1, 0);
//	next[0] = -1;
//	next[1] = 0;
//	int pos = 2;
//	int cn = 0;
//	while (pos < next.size()) {
//		if (str[pos - 1] == str[cn]) {
//			next[pos++] = ++cn;
//		}
//		else if(cn>0){
//			cn = next[cn];
//		}
//		else {
//			next[pos++] = 0;
//		}
//	}
//	return next;
//}
//int getIndex(string a, string b) {
//	if (a.empty() || b.empty() || a.size() < b.size()) {
//		return -1;
//	}
//	vector<int> next = getNext(b);
//	int ai = 0;
//	int bi = 0;
//	while (ai<a.size() && bi<b.size()) {
//		if (a[ai] == b[ai]) {
//			ai++;
//			bi++;
//		}
//		else if (next[bi] == -1) {
//			ai++;
//		}
//		else {
//			bi = next[bi];
//		}
//	}
//	return bi == b.size() ? ai - bi : -1;
//}
//int main() {
//	Node* head1 = new Node(1);
//	Node* node1 = new Node(2);
//	Node* node2 = new Node(3);
//	head1->left = node1;
//	head1->right = node2;
//
//	Node* head2 = new Node(6);
//	cout << isContain(head1, head2);
//	return 0;
//}
//
//
