////花费最少的钱分钱
////10+20+30=60
//
//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//using namespace std;
//priority_queue<int,vector<int>,greater<int>> minHeap;
//int lessMoney(vector<int> num) {
//	for (int i : num) {
//		minHeap.push(i);
//	}
//	int sum = 0;
//	int cur = 0;
//	while (minHeap.size()>1) {
//		cur = minHeap.top();
//		minHeap.pop();
//		cur += minHeap.top();
//		minHeap.pop();
//		sum += cur;
//		minHeap.push(cur);
//	}
//	return sum;
//}
//int main() {
//	vector<int> num= {10, 20, 30};
//	cout << lessMoney(num);
//	return 0;
//}