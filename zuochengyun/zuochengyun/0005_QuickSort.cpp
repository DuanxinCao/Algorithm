////���ţ�
////	ÿһ�λ��֣������һ��Ԫ��Ϊ��׼�����ֳ�С�ڵ��ڴ������Ԫ�ص�����
////	ʱ�临�Ӷȣ�O(nlogn)
////	�ռ临�Ӷȣ�O(1)
////	���ȶ������� �о����������ȶ���
//#include <iostream>
//#include <vector>
//using namespace std;
//void quickSort(vector<int>& num, int left, int right) {
//	if (left >= right)
//		return;
//	int value = num[left];
//	int leftIndex = left;
//	int rightIndex = right;
//	while (leftIndex < rightIndex) {
//		while (leftIndex < rightIndex&&num[rightIndex] >= value) {
//			rightIndex--;
//		}
//		if (leftIndex < rightIndex) {
//			num[leftIndex++]=num[rightIndex];
//		}
//		while (leftIndex < rightIndex&&num[leftIndex] <= value) {
//			leftIndex++;
//		}
//		if (leftIndex < rightIndex) {
//			num[rightIndex--] = num[leftIndex];
//		}
//		num[leftIndex] = value;
//	}
//	quickSort(num, left, leftIndex - 1);
//	quickSort(num, leftIndex +1,right);
//}
//vector<int> quickSort(vector<int> num) {
//	if (num.size() < 2)
//		return num;
//	quickSort(num, 0, num.size() - 1);
//	return num;
//}
//int main() {
//	vector<int> num = { 6,5,3,4,3,2,1,3 };
//	vector<int> res = quickSort(num);
//	for (int i = 0; i < res.size(); i++) {
//		cout << res[i] << " ";
//	}
//	return 0;
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//void quickSort(vector<int>& num, int left, int right) {
//	if (left >= right)
//		return;
//	int lefttmp = left;
//	int righttmp = right;
//	int tmp = num[left];
//	while (lefttmp <righttmp) {
//		while (lefttmp < righttmp && num[righttmp] >= tmp)
//			righttmp--;
//		if(lefttmp < righttmp)
//			num[lefttmp++] = num[righttmp];
//		while (lefttmp < righttmp && num[lefttmp] <= tmp)
//			lefttmp++;
//		if(lefttmp < righttmp)
//			num[righttmp--] = num[lefttmp];
//	}
//	num[righttmp] = tmp;
//	quickSort(num,left,righttmp-1);
//	quickSort(num, righttmp + 1, right);
//}
//vector<int> quickSort(vector<int> num) {
//	if (num.empty())
//		return num;
//	quickSort(num, 0, num.size() - 1);
//	return num;
//}
//int main() {
//	vector<int> num = { 6,5,3,4,3,2,1,3 };
//	vector<int> res = quickSort(num);
//	for (int i = 0; i < res.size(); i++) {
//		cout << res[i] << " ";
//	}
//	return 0;
//}


