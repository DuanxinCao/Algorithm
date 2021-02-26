////选取k个任务使获得利润最大
////贪心策略：每次在成本足够的情况下，选取利润最大的任务
//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//using namespace std;
//struct Node {
//	int cost;
//	int profit;
//	Node(int cost_, int profit_) :cost(cost_), profit(profit_) {
//	}
//};
//struct cmpmin {
//	bool operator()(Node a,Node b) {
//		return b.cost < a.cost;
//	}
//};
//struct cmpmax {
//	bool operator()(Node a, Node b) {
//		return b.profit > a.profit;
//	}
//};
//priority_queue<Node, vector<Node>, cmpmin> lessCost;
//priority_queue<Node, vector<Node>, cmpmax> maxProfit;
//int getMaxProfit(int k,int money, vector<int> cost, vector<int> profit) {
//	for (int i = 0; i < cost.size(); i++) {
//		lessCost.push(Node(cost[i], profit[i]));
//	}
//	while (k--) {
//		while (!lessCost.empty() && lessCost.top().cost <= money) {
//			maxProfit.push(lessCost.top());
//			lessCost.pop();
//		}
//		if (maxProfit.empty()) {
//			return money;
//		}
//		money += maxProfit.top().profit;
//		maxProfit.pop();
//	}
//	return money;
//}
//
//int main() {
//
//	vector<int> cost = { 2,3,6 };
//	vector<int> profit = { 1,1,2 };
//	int k = 2;
//	int money = 2;
//	cout << getMaxProfit(2, 2, cost, profit);
//	return 0;
//}

//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//using namespace std;
//typedef struct Node {
//	int cost;
//	int profit;
//	Node(int cost_, int profit_) :cost(cost_), profit(profit_) {
//	}
//}node;
//struct mincpy {
//	bool operator()(node &a, node &b) {
//		return a.cost > b.cost;
//	}
//};
//struct maxprofit {
//	bool operator()(node& a, node& b) {
//		return a.profit < b.profit;
//	}
//};
//priority_queue<node, vector<node>, mincpy> minheap;
//priority_queue<node, vector<node>, maxprofit> maxheap;
//int getMaxProfit(int k,int money, vector<int> cost, vector<int> profit) {
//	for (int i = 0; i < cost.size();i++) {
//		minheap.push(node(cost[i],profit[i]));
//	}
//	while (k > 0) {
//		while (!minheap.empty() && minheap.top().cost<=money) {
//			maxheap.push(minheap.top());
//			minheap.pop();
//		}
//		if (maxheap.empty())
//			return money;
//		money += maxheap.top().profit;
//		maxheap.pop();
//		k--;
//	}
//	return money;
//}
//
//int main() {
//
//	vector<int> cost = { 2,3,6 };
//	vector<int> profit = { 1,1,2 };
//	int k = 2;
//	int money = 2;
//	cout << getMaxProfit(2, 2, cost, profit);
//	return 0;
//}