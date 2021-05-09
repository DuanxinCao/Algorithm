//////之字形打印矩形方阵
//#include <iostream>
//#include <vector>
//using namespace std;
//void printMatrix(vector <vector<int>>& num, int row1, int col1, int row2, int col2, bool flag) {
//	if (flag) {
//		while (row1 < row2 + 1) {
//			cout << num[row1++][col1--];
//		}
//	}
//	else {
//		while (row2 > row1 - 1) {
//			cout << num[row2--][col2++];
//		}
//	}
//}
//void printMatrix(vector<vector<int>>& num) {
//	int row1 = 0, col1 = 0;
//	int row2 = 0, col2 = 0;
//	int rowEnd = num.size()-1;
//	int colEnd = num[0].size()-1;
//	bool flag = false;
//	while (row1 <= rowEnd) {
//		printMatrix(num, row1, col1, row2, col2, flag);
//		row1 = col1 == colEnd ? ++row1: row1;
//		col1 = col1 == colEnd ? col1 : ++col1;
//		col2 = row2 == rowEnd ? ++col2 : col2;
//		row2 = row2 == rowEnd ? row2 : ++row2;
//		flag = !flag;
//	}
//}
//int main() {
//	vector<vector<int>> num = {
//		{1,2,3,4},
//		{5,6,7,8},
//		{9,10,11,12}
//	};
//	printMatrix(num);
//	return 0;
//}


//之字形打印矩形方阵
//#include <iostream>
//#include <vector>
//using namespace std;
//void printMatrix(vector <vector<int>>& num, int row1, int col1, int row2, int col2, bool flag) {
//	if (flag) {
//		while (row1 < row2+1) {
//			cout << num[row1++][col1--]<<endl;
//		}
//	}
//	else {
//		while (row2>row1-1) {
//			cout << num[row2--][col2++] << endl;
//		}
//	}
//}
//void printMatrix(vector<vector<int>>& num) {
//	if (num.empty())
//		return;
//	int col1 = 0, row1 = 0, col2 = 0, row2 = 0;
//	int rowEnd = num.size() - 1;
//	int colEnd = num[0].size() - 1;
//	int flag = false;
//	while (row1 <= rowEnd && col2 <= colEnd) {
//		printMatrix(num, row1, col1, row2, col2,flag);
//		row1 = col1 == colEnd ? ++row1 : row1;
//		col1 = col1 == colEnd ? col1 : ++col1;
//		col2 = row2 == rowEnd ? ++col2 : col2;
//		row2 = row2 == rowEnd ? row2 : ++row2;
//		flag = !flag;
//
//	}
//}
//int main() {
//	vector<vector<int>> num = {
//		{1,2,3,4},
//		{5,6,7,8},
//		{9,10,11,12}
//	};
//	printMatrix(num);
//	return 0;
//}