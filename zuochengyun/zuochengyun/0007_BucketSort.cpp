////Ͱ���򣺣���������ʵ�֣�
////	����һ���ܹ���������������飬����ͳ��ԭ������ÿ�������ֵĸ����������������
////	���飬��ͳ�Ƶ����ֱ�������
////	ʱ�临�Ӷȣ�O(n)��
////	�ռ临�Ӷȣ�O��n����
////	�ȶ�������
////�������ԣ��Ǹ�����
//#include <iostream>
//#include <vector>
//using namespace std;
//vector<int> bucketSort(vector<int> num) {
//	if (num.size() < 2)
//		return num;
//	int a = -1;
//	for (auto i: num) {
//		a = i > a ? i : a;
//	}
//	vector<int> tmp(a + 1, 0);
//	for (auto i : num) {
//		tmp[i]++;
//	}
//	int j = 0;
//	for (int i = 0; i < tmp.size(); i++) {
//		while (tmp[i]-- > 0)
//			num[j++] = i;
//	}
//	return num;
//}
//int main() {
//	vector<int> num = { 8,8,7,7,6,6,5,5,4,3,2,1 };
//	vector<int> res = bucketSort(num);
//	for (auto i : res) {
//		cout << i;
//	}
//	return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//vector<int> bucketSort(vector<int> num) {
//	if (num.size()<2) {
//		return num;
//	}
//	int  size = 0;
//	for (auto i : num) {
//		if (i > size)
//			size = i;
//	}
//	vector<int> nums(size + 1, 0);
//	for (auto i:num) {
//		nums[i]++;
//	}
//	int index = 0;
//	for (int i=0; i < nums.size();i++) {
//		while (nums[i] > 0) {
//			nums[i]--;
//			num[index++] = i;
//		}
//	}
//	return num;
//}
//int main() {
//	vector<int> num = { 8,8,7,7,6,6,5,5,4,3,2,1 };
//	vector<int> res = bucketSort(num);
//	for (auto i : res) {
//		cout << i;
//	}
//	return 0;
//}