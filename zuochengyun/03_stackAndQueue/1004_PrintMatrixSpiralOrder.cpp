//תȦ��ӡ���� ����Ŀ�� ����һ�����;���matrix���밴��תȦ�ķ�ʽ��ӡ���� 
//���磺 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 
//��ӡ���Ϊ��1��2��3��4��8��12��16��15��14��13��9��5��6��7��11�� 10
//��Ҫ�� ����ռ临�Ӷ�ΪO(1)
//˼·��
//	ȡ���Ϻ����µ������㣬ÿ��ѭ�������������Χ�Ƶ�ԲȦ��Ȼ����������һȦ������ӡ
//	��ÿ�δ�ӡ��ͬ���Ǳ߽������ˣ�
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
	else {	//ע��߽�
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
