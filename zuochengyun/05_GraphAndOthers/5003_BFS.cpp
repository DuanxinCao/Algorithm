////图的广度优先遍历
//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include <queue>
//#include <set>
//#include <list>
//#include <map>
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
//void BFS(Node *node) {
//	if (node == NULL) {
//		return;
//	}
//	set<Node*> st;
//	queue<Node*> qu;
//	qu.push(node);
//	st.insert(node);
//	while (!qu.empty()) {
//		Node* tmp = qu.back();
//		qu.pop();
//		cout << tmp->getNum() << endl;
//		for (Node* node : tmp->getNodes()) {
//			if (!(st.find(node) == st.end())) {
//				qu.push(node);
//				st.insert(node);
//			}
//		}
//	}
//	
//}
//int main() {
//	cout << "Hello World!" << endl;
//	return 0;
//}