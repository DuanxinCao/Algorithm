////并查集：并查集涉及的操作为合并和查找，应用场景为在多个大族谱中查看两个人是不是亲戚
////合并：判断两个树的长度，将长度短的树合并到长度长的树中。
//		//合并操作：先找到两个节点的祖宗节点，将短的祖宗节点调整为长的祖宗节点的孩子节点
//		//并更新长的祖宗节点的树的长度
////查找祖宗节点：查找过程中，如果该节点不是祖宗节点，则递归查找祖宗节点，如果找到祖宗节点
//		//则递归更新所有的路径上节点的祖宗节点
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <map>
//#include <list>
//using namespace std;
//typedef struct node {
//	//whatever 
//}Node,*linkedList;
//map<Node *, Node*> fatherMap;
//map<Node*, int> rankMap;
//void makeSets(list<Node*> nodes) {
//	fatherMap.clear();
//	rankMap.clear();
//	for (Node* node : nodes) {
//		fatherMap.insert(node, node);
//		rankMap.insert(node, 1);
//	}
//}
//void findFather(Node *node) {
//	Node *father = fatherMap.at(*node);
//	if (father != node) {
//		father = findFather(father);
//	}
//	fatherMap.at(node) = father;
//}
//void unionNode(Node* a,Node* b) {
//	if (a == NULL || b == NULL) {
//		return;
//	}
//	Node* fa = findFather(a);
//	Node* fb = findFather(b);
//	if (fa != fb) {
//		if (rankMap.at(fa) > rankMap.at(fb)) {
//			fatherMap.at(fb) = fa;
//			rankMap.at(fa) = rankMap.at(fa) + rankMap.at(fb);
//		}
//		else {
//			fatherMap.at(fa) = fb;
//			rankMap.at(fb) = rankMap.at(fb) + rankMap.at(fa);
//		}
//	}
//}
//int main() {
//	return 0;
//}