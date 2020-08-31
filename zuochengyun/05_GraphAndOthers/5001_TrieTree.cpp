////何为前缀树？ 如何生成前缀树？ 
////例子： 一个字符串类型的数组arr1，另一个字符串类型的数组arr2
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//typedef struct treeNode {
//	int path;
//	int end;
//	struct treeNode* treeMap[26];
//	treeNode() {
//		path = 0;
//		end = 0;
//		for (int i = 0; i < 26; i++) { //~~~指针必须初始化
//			treeMap[i] = NULL;
//		}
//	}
//}Node;
//Node* head = new Node();
//void insert(string word) {
//	if (word.empty()) {
//		return;
//	}
//	Node* node = head;
//	int index = 0;
//	for (char c : word) {
//		index = c - 'a';
//		if (node->treeMap[index] == NULL) {
//			Node* tmp = new Node();
//			node->treeMap[index] = tmp;
//		}
//		node = node->treeMap[index];
//		node->path++;
//	}
//	node->end++;
//}
//void deleteWord(string word) {
//	if (word.empty()) {
//		return;
//	}
//	int index=0;
//	Node* node = head;
//	for (char c : word) {
//		index = c - 'a';
//		if (node->treeMap[index]->path-- == 1) {
//			return;
//		}
//		node = node->treeMap[index];
//	}
//	node->end--;
//}
//int searchWord(string word) {
//	if (word.empty()) {
//		return false;
//	}
//	int index = 0;
//	Node* node = head;
//	for (char c : word) {
//		index = c - 'a';
//		if (node->treeMap[index] == NULL) {
//			return 0;
//		}
//		node = node->treeMap[index];
//	}
//	return node->end;
//}
//int findPre(string pre) {
//	if (pre.empty()) {
//		return 0;
//	}
//	int index = 0;
//	Node* node = head;
//	for (char c : pre) {
//		index = c - 'a';
//		if (node->treeMap[index] == NULL) {
//			return 0;
//		}
//		node = node->treeMap[index];
//	}
//	return node->path;
//}
//int main() {
//	insert("cdx");
//	insert("cdx");
//	cout << searchWord("cdx") << endl;
//	cout << findPre("cd") << endl;
//	deleteWord("cdx");
//	cout << searchWord("cdx") << endl;
//	return 0;
//}