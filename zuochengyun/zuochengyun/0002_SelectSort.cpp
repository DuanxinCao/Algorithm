////选择排序：
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
//	if (str.size() < 2)
//		return;
//	for (int i = 0; i < str.size(); i++) {
//		int tmp = i;
//		for (int j = i + 1; j < str.size(); j++) {
//			tmp = str[j] < str[tmp] ? j : tmp;
//		}
//		swap(str[i], str[tmp]);
//	}
//}
//int main() {
//	vector<int> str = { 7,6,4,5,3,2 };
//	sort(str);
//	for (auto& i : str)
//		cout << i;
//	return 0;
//}
//

//
//#include<vector>
//#include <iostream>
//
//using namespace std;
//
//void sort(vector<int>& str) {
//	if (str.size() < 2)
//		return;
//	for (int i = 0; i < str.size(); i++) {
//		int min = i;
//		for (int j = i + 1; j < str.size(); j++) {
//			if (str[j] < str[min])
//				min = j;
//		}
//		swap(str[i], str[min]);
//	}
//
//}
//int main() {
//	vector<int> str = { 7,6,4,5,3,2 };
//	sort(str);
//	for (auto& i : str)
//		cout << i;
//	return 0;
//}


































