//给定一个整数矩阵matrix，每个位置你可以向左、右、下、上移动，
//找到其中最长的递增路径。 
//例如： matrix = [[9, 9, 4], [6, 6, 8], [2, 1, 1]] 返回4 最长路径是[1, 2, 6, 9].
//matrix = [[3, 4, 5], [3, 2, 6], [2, 2, 1]] 返回4 最长路径是[1, 2, 6, 9]
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//int maxValue(vector<vector<int>> num, vector<vector<int>> h, int i, int j, int value) {
//	if (i<0 || i>num.size() || j<0 || j>num[0].size() || num[i][j] >= value) {
//		return 0;
//	}
//	if (h[i][j] == 0) {
//		h[i][j] = maxValue(num, h, i - 1, j, num[i][j])+1;
//		h[i][j] = max(maxValue(num, h, i, j - 1, num[i][j])+1,h[i][j]);
//		h[i][j] = max(maxValue(num, h, i+1, j, num[i][j])+1,h[i][j]);
//		h[i][j] = max(maxValue(num, h, i, j + 1, num[i][j])+1,h[i][j]);
//	}
//	return h[i][j];
//}
//int getMax(vector<vector<int>> num) {
//	if (num.empty())
//		return 0;
//	vector<vector<int>> h(num.size(), vector<int>(num[0].size(), 0));
//	int res = 0;
//	for (int i = 0; i < num.size(); i++) {
//		for (int j = 0; j < num[0].size(); j++) {
//			res = max(res, maxValue(num,h,i-1,j,num[i][j])+1);
//			res = max(res, maxValue(num,h,i,j-1,num[i][j])+1);
//			res = max(res, maxValue(num,h,i+1,j,num[i][j])+1);
//			res = max(res, maxValue(num,h,i,j+1,num[i][j])+1);
//		}
//	}
//	return res;
//}
//int main() {
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
//
//
