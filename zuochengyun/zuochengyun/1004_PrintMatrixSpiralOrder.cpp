//转圈打印矩阵 【题目】 给定一个整型矩阵matrix，请按照转圈的方式打印它。 
//例如： 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 
//打印结果为：1，2，3，4，8，12，16，15，14，13，9，5，6，7，11， 10
//【要求】 额外空间复杂度为O(1)
//思路：
//	取左上和右下的两个点，每次循环输出两个点所围绕的圆圈，然后向内收缩一圈继续打印
//	（每次打印不同考虑边界的情况了）
#include <iostream>
#include <vector>
using namespace std;
void print(vector<vector<int>>& num, int row1, int col1, int row2, int col2) {
	int curRow = row1;
	int curCol = col1;
	if (col1 == col2) {
		while (curRow <= row2) {
			cout << num[curRow++][col1] << " ";
		}
	}
	else if (row1 == row2) {
		while (curCol <= col2) {
			cout << num[row1][curCol++] << " ";
		}
	}
	else {	//注意边界
		while (curCol < col2) {
			cout << num[row1][curCol++] << " ";
		}
		while (curRow < row2) {
			cout << num[curRow++][col2]<<" ";
		}
		while (curCol >col1) {
			cout << num[row2][curCol--]<< " ";
		}
		while (curRow >row1) {
			cout << num[curRow--][col1] << " ";
		}
	}
}
void print(vector<vector<int>>& num) {
	int row1 = 0;
	int col1 = 0;
	int row2 = num.size() - 1;
	int col2 = num[0].size() - 1;
	while (row1 <= row2 && col1 <= col2) {
		print(num, row1++, col1++, row2--, col2--);
	}
}
int main() {
	vector<vector<int>>  num = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	print(num);
	return 0;
}
