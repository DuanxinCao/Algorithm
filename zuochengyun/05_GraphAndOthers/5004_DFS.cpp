////图的深度优先遍历
////用栈来模拟节点的读取，用集合来存储已经访问过的节点
////每次在新的节点放入到栈时，访问节点，
////每次在栈中弹出节点，并且将新节点和之前的节点一起放回到栈中
//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include <stack>
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
//void DFS(Node * node) {
//	if (node == NULL) {
//		return;
//	}
//	stack<Node*> sk;
//	set<Node*> st;
//	cout << node->getNum() << endl;
//	st.insert(node);
//	sk.push(node);
//	while (!sk.empty()) {
//		Node* tmp = sk.top();
//		sk.pop();
//		for (Node* node : tmp->getNodes()) {
//			if (!(st.find(node) == st.end())) {
//				sk.push(tmp);
//				sk.push(node);
//				st.insert(node);
//				cout << node->getNum() << endl;
//				break;
//			}
//		}
//	}
//}
//int main() {
//	cout << "Hello World!" << endl;
//	return 0;
//}