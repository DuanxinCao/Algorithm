////��������
////���ȱ���һ��ڵ㣬�����Ϊ0�Ľڵ����
////Ȼ��Ӷ�����ȡ��һ���ڵ㣬��ӡ��ȡ���ýڵ��ָ��Ľڵ㣬����Щ�ڵ�
////����ȼ�һ�������Щ�ڵ�����Ϊ�㣬�����Ƿ��뵽������
//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include <stack>
//#include <set>
//#include <list>
//#include <map>
//#include <queue>
//using namespace std;
//class Node;
//class Edge {
//public:
//	Edge(Node* from_,Node* to_,int value_) {
//		from = from_;
//		to = to_;
//		value = value_;
//	}
//private:
//	Node* from;
//    Node* to;
//	int value;
//};
//class Node {
//public:
//	Node(int num_) {
//		num = num_;
//		in = 0;
//		out = 0;
//	}
//	int getIn() {
//		return in;
//	}
//	void setIn(int num) {
//		in = num;
//	}
//	int getOut() {
//		return out;
//	}
//	void setOut(int num) {
//		out = num;
//	}
//	int getNum() {
//		return num;
//	}
//	list<Node*> getNodes() {
//		return nodes;
//	}
//	list<Edge*> getEdges() {
//		return edges;
//	}
//private:
//	int num;
//	int in;
//	int out;
//	list<Node*> nodes;
//	list<Edge*> edges;
//};
//class Graph {
//public:
//	Graph() {
//	}
//	map<int, Node*> getNodes() {
//		return nodes;
//	}
//	set<Edge*> getEdges() {
//		return edges;
//	}
//private:
//	map<int, Node*> nodes;
//	set<Edge*> edges;
//};
//vector<Node*> sort(Graph* grap) {
//	vector<Node*> res;
//	if (grap == NULL) {
//		return res;
//	}
////	map<Node*, int> mapNode;
//	queue<Node*> qu;
//	map<int, Node*>::iterator iter;
//	for (iter = grap->getNodes().begin(); iter != grap->getNodes().end(); iter++) {
//		//mapNode.insert(pair<Node* ,int>(iter->second, iter->first));
//		if (iter->second->getIn() == 0) {
//			qu.push(iter->second);
//		}
//	}
//	while (!qu.empty()) {
//		Node* node = qu.back();
//		res.push_back(node);
//		qu.pop();
//		for (Node* tmp : node->getNodes()) {
//			tmp->setIn(tmp->getIn() - 1);
//	//		mapNode.insert(pair<Node*,int>(tmp, tmp->getIn()));
//			if (tmp->getIn() == 0) {
//				qu.push(tmp);
//			}
//		}
//	}
//	return res;
//
//}
//int main() {
//	cout << "Hello World!" << endl;
//	return 0;
//}