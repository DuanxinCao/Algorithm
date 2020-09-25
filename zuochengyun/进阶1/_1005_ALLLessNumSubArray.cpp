//给定数组arr和整数num，共返回有多少个子数组满足如下情况： 
//max(arr[i..j]) - min(arr[i..j]) <= num max(arr[i..j])表示子数组arr[i..j]中的最大值，
//min(arr[i..j])表示子数组arr[i..j] 中的最小值。 
//【要求】 如果数组长度为N，请实现时间复杂度为O(N)的解法。
//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include<deque>
//using namespace std;
//int getres(vector<int> num, int target) {
//	if (num.empty())
//		return 0;
//	int res = 0;
//	deque<int> minQueue;
//	deque<int> maxQueue;
//	int i=0,j = 0;
//	while (i < num.size()) {
//		while (j < num.size()) {
//			while (!minQueue.empty() && num[minQueue.back()] >= num[j]) {
//				minQueue.pop_back();
//			}
//			minQueue.push_back(j);
//			while (!maxQueue.empty() && num[maxQueue.back()] <= num[j]) {
//				maxQueue.pop_back();
//			}
//			maxQueue.push_back(j);
//			if (num[maxQueue.front()] - num[minQueue.front()] > target)
//				break;
//			j++;//~~~
//		}
//		if (minQueue.front() == i)
//			minQueue.pop_front();
//		if (maxQueue.front() == i)
//			maxQueue.pop_front();
//		res += j - i;
//		i++;
//	}
//	return res;//~~~~
//}
//int main() {
//	cout << getres({ 1,2 }, 6);
//	return 0;
//}
//
//
//
//
