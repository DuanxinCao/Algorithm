//给定一个数组代表一个容器， 比如[3, 1, 2, 4]， 
//代表0位置是一个宽度为1，高度为3的直方图。 代表1位置是一个宽度为1，
//高度为1的直方图。 代表2位置是一个宽度为1，高度为2的直方图。 代表3位置是一个宽度为1，
//高度为4的直方图。 所有直方图的底部都在一条水平线上，且紧靠着。 把这个图想象成一个容器，
//a这个容器可以装3格的水。 给定一个没有负数的数组arr，返回能装几格水？
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//int getWater(vector<int> num) {
//	if (num.empty() || num.size() < 3) {
//		return 0;
//	}
//	int value = 0;
//	int leftMax = num[0];
//	int rightMax = num[num.size() - 1];
//	int l = 1;
//	int r = num.size() - 2;
//	while (l <= r) {
//		if (leftMax <= rightMax) {
//			value += max(0, leftMax - num[l]);
//			leftMax = max(leftMax, num[l++]);
//		}
//		else {
//			value += max(0, rightMax - num[r]);
//			rightMax = max(rightMax, num[r++]);
//		}
//
//		
//	}
//return value;
//}
//int main() {
//	vector<int> num = {
//		3,2,1,2,3
//	};
//	cout << getWater(num)<<endl;
//	return 0;
//}
