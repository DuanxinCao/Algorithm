////���鼯�����鼯�漰�Ĳ���Ϊ�ϲ��Ͳ��ң�Ӧ�ó���Ϊ�ڶ���������в鿴�������ǲ�������
////�ϲ����ж��������ĳ��ȣ������ȶ̵����ϲ������ȳ������С�
//		//�ϲ����������ҵ������ڵ�����ڽڵ㣬���̵����ڽڵ����Ϊ�������ڽڵ�ĺ��ӽڵ�
//		//�����³������ڽڵ�����ĳ���
////�������ڽڵ㣺���ҹ����У�����ýڵ㲻�����ڽڵ㣬��ݹ�������ڽڵ㣬����ҵ����ڽڵ�
//		//��ݹ�������е�·���Ͻڵ�����ڽڵ�
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
//Node* findFather(Node *node) {
//	Node *father = fatherMap.at(*node);
//	if (father != node) {
//		father = findFather(father);
//	}
//	fatherMap.at(node) = father;
//  return father;
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


//
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
//map<Node *, int> rankMap;
//void makeSets(list<Node*> nodes) {
//	fatherMap.clear();
//	rankMap.clear();
//	for (Node* node : nodes) {
//		fatherMap.insert(pair<Node*,Node *>(node, node));
//		rankMap.insert(pair<Node *,int>(node, 1));
//	}
//}
//Node* findFather(Node *node) {
//	Node* father = fatherMap.at(node);
//	while (node != father) {
//		father = findFather(node);
//	}
//	fatherMap.at(node) = father;
//	return father;
//}
//void unionNode(Node* a,Node* b) {
//	if (a == nullptr || b == nullptr)
//		return;
//	Node* fathera = findFather(a);
//	Node* fatherb = findFather(b);
//	if (fathera != fatherb) {
//		if (rankMap.at(fathera) > rankMap.at(fatherb)) {
//			fatherMap.at(fatherb) = fathera;
//			rankMap.at(fathera) = rankMap.at(fathera) + rankMap.at(fatherb);
//		}
//		else {
//			fatherMap.at(fatherb) = fathera;
//			rankMap.at(fatherb) = rankMap.at(fathera) + rankMap.at(fatherb);
//		}
//	}
//}
//int main() {
//	return 0;
//}