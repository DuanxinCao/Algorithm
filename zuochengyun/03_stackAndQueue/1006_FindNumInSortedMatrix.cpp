////在一个行和列分别排好序的矩阵中查找一个数字（要求:时间复杂度O(n+m),空间复杂度：O(1)）
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//bool isContains(vector<vector<int>>& num, int k) {
//	int row = 0;
//	int col = num[0].size()-1;
//	while (row <= num.size()-1&& col >= 0){
//		if (num[row][col] == k)
//			return true;
//		else if (num[row][col] < k) {
//			row++;
//		}
//		else
//			col--;
//	}
//	return false;
//}
//int main() {
//	vector<vector<int>> num = {
//		{ 0, 1, 2, 3, 4, 5, 6 },// 0
//		{ 10, 12, 13, 15, 16, 17, 18 },// 1
//		{ 23, 24, 25, 26, 27, 28, 29 },// 2
//		{ 44, 45, 46, 47, 48, 49, 50 },// 3
//		{ 65, 66, 67, 68, 69, 70, 71 },// 4
//		{ 96, 97, 98, 99, 100, 111, 122 },// 5
//		{ 166, 176, 186, 187, 190, 195, 200 },// 6
//		{ 233, 243, 321, 341, 356, 370, 380 } // 7
//	};
//	int k = 233;
//	cout << isContains(num, k) << endl;
//	return 0;
//}