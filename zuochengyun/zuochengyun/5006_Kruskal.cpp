////生成图的最小生成树：克鲁斯卡尔方法
////每次选择一条最小权值边，如果加入这条边以后不会形成环，则将这条边加入到结果集中
////实现方式：
////	利用并查集来判断该边的两个节点是否能够形成环，利用小顶堆来选取最小权值边
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <map>
//#include <list>
//#include <set>
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
//public:
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
//map<Node *, Node*> fatherMap;
//map<Node*, int> rankMap;
//void makeSets(map<int,Node *> nodes) {
//	fatherMap.clear();
//	rankMap.clear();
//	map<int, Node*>::iterator iter;
//	for (iter = nodes.begin(); iter != nodes.end();iter++) {
//		fatherMap.insert(pair<Node*,Node *>(iter->second, iter->second));
//		rankMap.insert(pair<Node*,int>(iter->second,1));
//	}
//}
//Node* findFather(Node *node) {
//	Node *father = fatherMap[node];
//	if (father != node) {
//		father = findFather(father);
//	}
//	fatherMap.at(node) = father;
//	return father;
//}
//bool isTheSameFather(Node* node1, Node* node2) {
//	if (findFather(node1) == findFather(node2)) {
//		return true;
//	}
//	return false;
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
//class cmpmin {
//public:
//	bool operator()(Edge *a,Edge *b) {
//		return b->value < a->value;
//	}
//};
//set<Edge*> kruskal1(Graph* graph) {
//	makeSets(graph->getNodes());
//	priority_queue<Edge*, vector<Edge*>, cmpmin> lessQueue;
//	set<Edge*> res;
//	for (Edge* edge : graph->getEdges()) {
//		lessQueue.push(edge);
//	}
//	while (!lessQueue.empty()) {
//		Edge* tmp = lessQueue.top();
//		lessQueue.pop();
//		if (!isTheSameFather(tmp->from, tmp->to)) {
//			res.insert(tmp);
//		}
//		unionNode(tmp->from, tmp->to);
//	}
//	return res;
//}
//int main() {
//	cout << "Hello World!" << endl;
//	return 0;
//}