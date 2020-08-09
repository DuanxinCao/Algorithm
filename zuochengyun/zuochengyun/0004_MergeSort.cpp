//归并排序：
//	递归，每次将两个有序数组合并进行插入
//	时间复杂度为O(nlogn)
//	空间复杂度为O(n)
//	稳定性排序
#include <iostream>
#include <vector> 
using namespace std;
void merge(vector<int>& num, int L, int mid, int R) {
	int p1 = L;
	int p2 = mid + 1;
	vector<int> tmp(R - L + 1, 0);
	int i = 0;
	while (p1 <= mid && p2 <= R) {
		tmp[i++] = num[p1] <= num[p2] ? num[p1++] : num[p2++];
	}
	while (p1 <= mid) {
		tmp[i++] = num[p1++];
	}
	while (p2 <= R) {
		tmp[i++] = num[p2++];
	}
	for (int j = 0; j < R - L+1; j++) {
		num[L+j] = tmp[j];
	}

}
void mergeSort(vector<int>& num, int L, int R) {
	if (L == R)
		return;
	int mid = L + ((R - L) >> 1);
	mergeSort(num, L, mid);
	mergeSort(num, mid + 1, R);
	merge(num, L, mid, R);
}
vector<int> mergeSort(vector<int> num) {
	if (num.size() < 2)
		return num;
	mergeSort(num, 0, num.size() - 1);
	return num;
}
int main() {
	vector<int> num = {6,5,4,3,2,1};
	vector<int> res = mergeSort(num);
	for (int i = 0; i < num.size(); i++) {
		cout << res[i] << " ";
	}
	return 0;
}
