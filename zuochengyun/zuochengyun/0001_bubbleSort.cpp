////冒泡排序：
//	//比较n-1轮，每一轮从前往后依次比较两个数，若前一个数大于后一个数，则交换位置
//	//时间复杂度：O（n ^ 2）
//	//空间复杂度：O（1）
//	//稳定排序
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void sort(vector<int>& str) {
//	if (str.size() < 2)
//		return;
//	for(int i = str.size()-1; i >0; i--) {
//		for (int j = 0; j < i; j++) {
//			if (str[j] > str[j + 1]) {
//				swap(str[j], str[j+ 1]);
//			}
//		}
//	}
//}
//int main() {
//	vector<int> str = { 7,6,4,5,3,2 };
//	sort(str);
//	for (auto& i : str)
//		cout << i;
//	return 0;
//}

