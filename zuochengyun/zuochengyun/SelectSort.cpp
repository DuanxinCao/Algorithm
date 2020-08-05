////插入排序：
////	比较n次，每次从未排序的数据局部分选择一个最小的放到已排序数组末尾
////时间复杂度：O(n^2)
////空间复杂度：O(1)
////稳定排序
//
//#include<vector>
//#include <iostream>
//
//using namespace std;
//
//void sort(vector<int>& str) {
//	if (str.size() < 2) return;
//	for (int i = 0; i < str.size() - 1; i++) {
//		int min = i;	//保存最小数的位置下标
//		for (int j = i + 1; j < str.size(); j++) {
//			min = str[j] < str[min] ? j : min;
//		}
//		swap(str[min], str[i]);
//	}
//}
//int main() {
//	vector<int> str = { 7,6,4,5,3,2 };
//	sort(str);
//	for (auto& i : str)
//		cout << i;
//	return 0;
//}