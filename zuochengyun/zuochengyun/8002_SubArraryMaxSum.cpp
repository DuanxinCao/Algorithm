//给定一个数组arr，返回所有子数组的累加和中，最大的累加和
//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include <limits>
//using namespace std;
//int getMax(vector<int> num) {
//	if (num.empty()) {
//		return 0;
//	}
//	int maxSum = INT_MIN;
//	int cur = 0;
//	for (int i = 0; i < num.size(); i++) {
//		cur += num[i];
//		maxSum = max(maxSum, cur);
//		cur = cur < 0 ? 0 : cur;
//	}
//	return maxSum;
//
//}
//int main() {
//	vector<int> num = {
//		3,2,-7,6
//	};
//	cout << getMax(num);
//	return 0;
//}




//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include <limits>
//using namespace std;
//int getMax(vector<int> num) {
//	if (num.empty())
//		return 0;
//
//	int cur = num[0];
//	int res = cur;
//	for (int i = 1; i < num.size(); i++) {
//		cur += num[i];
//		res = max(res, cur);
//		cur = max(0, cur);
//	}
//	return res;
//}
//int main() {
//	vector<int> num = {
//		3,2,-7,6
//	};
//	cout << getMax(num);
//	return 0;
//}