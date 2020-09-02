////给你一个二维数组，二维数组中的每个数都是正数，要求从左上 角走到右下角，
////每一步只能向右或者向下。沿途经过的数字要累 加起来。返回最小的路径和。
//#include <iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int dp(vector<vector<int>> num) {
//	if (num.empty()) {
//		return 0;
//	}
//	for (int i = 1; i < num[0].size(); i++) {
//		num[0][i] += num[0][i - 1];
//	}
//	for (int j = 1; j < num.size(); j++) {
//		num[j][0] += num[j - 1][0];
//	}
//	for (int i = 1; i < num[0].size(); i++) {
//		for (int j = 1; j < num.size(); j++) {
//			num[i][j] = min(num[i - 1][j] , num[i][j - 1]) + num[i][j];
//		}
//	}
//	return num[num[0].size() - 1][num.size() - 1];
//}
//int main() {
//	vector<vector<int>> num = {
//		{ 1, 3, 5, 9 }, { 8, 1, 3, 4 }, { 5, 0, 6, 1 }, { 8, 8, 4, 0 }
//	};
//
//	cout <<dp(num) << endl;
//	return 0;
//}