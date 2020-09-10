////生成窗口最大值数组 【题目】 
////有一个整型数组arr和一个大小为w的窗口从数组的最左边滑到最右边，
////窗口每次向右边滑一个 位置。 例如，数组为[4, 3, 5, 4, 3, 3, 6, 7]，
////窗口大小为3时：[4 3 5] 4 3 3 6 7 窗口中最大值为5 4[3 5 4] 3 3 6 7 
////窗口中最大值为5 4 3[5 4 3] 3 6 7 窗口中最大值为5 4 3 5[4 3 3] 6 7 
////窗口中最大值为4 4 3 5 4[3 3 6] 7 窗口中最大值为6 4 3 5 4 3[3 6 7] 
////窗口中最大值为7 如果数组长度为n，窗口大小为w，则一共产生n - w + 1个窗口的最大值。
////请实现一个函数。 输入：整型数组arr，窗口大小为w。 
////输出：一个长度为n - w + 1的数组res，res[i]表示每一种窗口状态下的最大值。 
////以本题为例，结果应该返回{ 5,5,5,4,6,7 }。
//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include <deque>
//using namespace std;
//vector<int> getMaxWindow(vector<int> num, int k) {
//	vector<int> res;
//	if (k == 0 || num.empty() || num.size() < 3) {
//		return res;
//	}
//	deque<int> qmax;
//	for (int i = 0; i < num.size(); i++) {
//		while (!qmax.empty() &&num[qmax.back()] < num[i]) { //找到插入的位置
//			qmax.pop_back();
//		}
//		qmax.push_back(i);
//		if (qmax.front() == i - k) {//如果窗口中的值大于K，则弹出首个元素
//			qmax.pop_front();
//		}
//		if (i >= k - 1) {//确保已经遍历过k个元素
//			res.push_back(num[qmax.front()]);
//		}
//	}
//	return res;
//}
//void printVector(vector<int> num) {
//	if (num.empty()) {
//		return;
//	}
//	for (int a : num) {
//		cout << a << endl;
//	}
//}
//int main() {
//	vector<int> num = {
//		 4, 3, 5, 4, 3, 3, 6, 7
//	};
//	int k = 3;
//	vector<int> res = getMaxWindow(num, k);
//	printVector(res);
//	return 0;
//}
//
//
