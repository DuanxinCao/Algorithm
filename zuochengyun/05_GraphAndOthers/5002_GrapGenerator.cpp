////构建图
//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include <set>
//#include <map>
//#include <list>
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
//Graph GrapGenerator(vector<vector<int>>& num){
//	Graph graph;
//	for (vector<int> tmp : num) {
//		int from = tmp[0];
//		int to = tmp[1];
//		int value = tmp[2];
//		//初始化点
//		if (!(graph.getNodes().find(from) == graph.getNodes().end())) {
//			graph.getNodes().insert(pair<int, Node*>(from, new Node(from)));
//		}
//		if (!(graph.getNodes().find(to) == graph.getNodes().end())) {
//			graph.getNodes().insert(pair<int,Node*>(to,new Node(to)));
//		}
//		//初始化边
//		Node* node1 =graph.getNodes().at(from);
//		Node* node2 = graph.getNodes().at(to);
//		Edge* edge=new Edge(node1, node2, value);
//		graph.getEdges().insert(edge);
//
//		node1->getNodes().push_back(node2);
//		node1->setOut(node1->getOut()+1);
//		node1->getEdges().push_back(edge);
//		node2->setIn(node2->getIn() + 1);
//	}
//	return graph;
//}
//int main() {
//	cout << "Hello World!" << endl;
//	return 0;
//}