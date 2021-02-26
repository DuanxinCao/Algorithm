////最大的leftMax与rightMax之差的绝对值 【题目】 给定一个长度为N（N > 1）的整型数组arr，
////可以划分成左右两个 部分，左部分为arr[0..K]，右部分为arr[K + 1..N - 1]，
////K可以取 值的范围是[0, N - 2]。求这么多划分方案中，
////左部分中的最大值 减去右部分最大值的绝对值中，最大是多少？
////例如：[2, 7, 3, 1, 1]，当左部分为[2, 7]，右部分为[3, 1, 1]时， 
////左部分中的最大值减去右部分最大值的绝对值为4。当左部分为[2, 7, 3]，右部分为[1, 1]时，
////左部分中的最大值减去右部分最大 值的绝对值为6。还有很多划分方案，但最终返回6。
//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include<limits>
//using namespace std;
//int getMax(vector<int> num) {
//	int maxValue = INT_MIN;
//	for (int i = 0; i < num.size(); i++) {
//		maxValue = max(maxValue, num[i]);
//	}
//	return maxValue - min(num[0], num[num.size() - 1]);
//}
//int main() {
//	vector<int>num={
//		2,1,8,6
//	};
//	cout << getMax(num);
//	return 0;
//}
//
//




//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include<limits>
//using namespace std;
//int getMax(vector<int> num) {
//	int maxvalue = INT_MIN;
//	for (int i : num) {
//		if (i > maxvalue)
//			maxvalue = i;
//	}
//	return maxvalue - min(num[0], num[num.size() - 1]);
//}
//int main() {
//	vector<int>num={
//		2,1,8,6
//	};
//	cout << getMax(num);
//	return 0;
//}


