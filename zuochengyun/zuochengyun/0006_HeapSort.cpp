////������
////	�ֽ������е����ݹ���һ���󶥶ѣ����µ��ϣ���Ȼ����ж����򣨴��ϵ��£�
////	ʱ�临�Ӷȣ�O��nlogn��
////	�ռ临�Ӷȣ�O��1��
////	���ȶ�������
//#include <iostream>
//#include <vector>
//using namespace std;
//void heapInsert(vector<int>& num, int index) {
//	while (num[index] > num[(index - 1) / 2]) {
//		swap(num[index], num[(index - 1) / 2]);
//		index = (index - 1) / 2;
//	}
//}
//void heapify(vector<int>& num, int index, int size) {
//	int left = index * 2 + 1;
//	while (left < size) {
//		int big = left;
//		if (left + 1 < size) {
//			big = num[left] > num[left + 1] ? left : left + 1;
//		}
//		big = num[index] > num[big] ? index : big;
//		if (big == index)
//			break;
//		swap(num[index], num[big]);
//		index = big;
//		left = index * 2 + 1;
//	}
//}
//vector<int> heapSort(vector<int> num) {
//	if (num.size() < 2)
//		return num;
//	for (int i=0; i < num.size(); i++) {
//		heapInsert(num, i);
//	}
//	//������
//	int size = num.size();
//	swap(num[0], num[--size]);
//	while (size > 0) {
//		heapify(num,0, size);	//�����ѳ�Ϊ�󶥶�
//		swap(num[0], num[--size]);
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
//
