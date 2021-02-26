////堆排序：
////	现将数组中的数据构成一个大顶堆（从下到上），然后进行堆排序（从上到下）
////	时间复杂度：O（nlogn）
////	空间复杂度：O（1）
////	不稳定性排序 感觉可以做到稳定性
//#include <iostream>
//#include <vector>
//using namespace std;
//void heapSort(vector<int>& num, int size) {
//	int index = 0;
//	int left = 2 * index + 1;
//
//	while (left <= size) {
//		int big = left;
//		if (left + 1 <= size && num[left + 1] > num[left]) {
//			big = left + 1;
//		}
//		if (num[index] >= num[big]) {
//			break;
//		}
//		swap(num[index], num[big]);
//		index = big;
//		left = big * 2 + 1;
//		
//	}
//}
//void heapInsert(vector<int>& num, int index) {
//	while (num[index] > num[(index - 1) / 2]) {
//		swap(num[index], num[(index - 1) / 2]);
//		index = (index - 1) / 2;
//	}
//}
//vector<int> heapSort(vector<int> num) {
//	if (num.size() < 2)
//		return num;
//	for (int i = 0; i < num.size(); i++) {
//		heapInsert(num, i);
//	}
//	int size = num.size() - 1;
//	swap(num[0], num[size--]);
//	while (size > 0) {
//		heapSort(num, size);
//		swap(num[0], num[size--]);
//	}
//	return num;
//}
//int main() {
//	vector<int> num = {4,5,6,1,2,3};
//	vector<int> res = heapSort(num);
//	for (int i = 0; i < res.size(); i++) {
//		cout << res[i];
//	}
//	return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//void heapSort(vector<int>& num, int size) {
//	int index = 0;
//	int left = 2 * index + 1;
//	while (left <= size) {
//		int big = left;
//		if (left + 1 <= size && num[left + 1] > num[left]) {
//			big = left + 1;
//		}
//		if (num[index] < num[big]) {
//			swap(num[index], num[big]);
//			index = big;
//			left = 2 * index + 1;
//		}
//		else {
//			break;
//		}
//	}
//}
//void heapInsert(vector<int>& num, int index) {
//	while (num[(index - 1) / 2] < num[index]) {
//		swap(num[(index - 1) / 2], num[index]);
//		index = (index - 1) / 2;
//	}
//}
//vector<int> heapSort(vector<int> num) {
//	if (num.size() < 2)
//		return num;
//	for (int i = 0; i < num.size(); i++) {
//		heapInsert(num, i);
//	}
//	swap(num[0], num[num.size() - 1]);
//	for (int i = num.size() - 2; i >= 0; i--) {
//		heapSort(num, i);
//		swap(num[0], num[i]);
//	}
//	return num;
//	
//}
//int main() {
//	vector<int> num = {4,5,6,1,2,3};
//	vector<int> res = heapSort(num);
//	for (int i = 0; i < res.size(); i++) {
//		cout << res[i];
//	}
//	return 0;
//}