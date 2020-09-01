////生成图的最小生成树：Prim算法
////每次银镜遍历过的节点中选一条权值最小并且不会生成回路的边，直到所有的节点都被遍历
////算法：
////需要一个小顶堆来存放已经遍历过的节点的连接边，
////一个集合来存放已经遍历过的节点
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
//	Edge(Node* from_, Node* to_, int value_) {
//		from = from_;
//		to = to_;
//		value = value_;
//	}
//public:
//	Node* from;
//	Node* to;
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
//class cmpmin {
//public:
//	bool operator()(Edge* node1,Edge* node2) {
//		return node2->value < node1->value;
//	}
//};
//set<Edge*> prim(Graph* graph) {
//	set<Edge*> res;
//	priority_queue<Edge*, vector<Edge*>, cmpmin> lessQueue;
//	set<Node*> nodes;
//	map<int, Node*>::iterator iter;
//	for (iter = graph->getNodes().begin(); iter != graph->getNodes().end(); iter++) {
//		if (nodes.find(iter->second) == nodes.end()) {
//			nodes.insert(iter->second);
//			for (Edge* edge : iter->second->getEdges()) {
//				lessQueue.push(edge);
//			}
//		}
//		while (!lessQueue.empty()) {
//			Edge* tmp = lessQueue.top();
//			lessQueue.pop();
//			if (nodes.find(tmp->to) == nodes.end()) {
//				res.insert(tmp);
//				nodes.insert(tmp->to);
//				for (Edge* edge : tmp->to->getEdges()) {
//					lessQueue.push(edge);
//				}
//			}
//		}
//	}
//	return res;
//}
//int main() {
//	cout << "Hello World!" << endl;
//	return 0;
//}