////���������ҵ�һ���ֲ���С��λ�� 
////����Ŀ�� ����ֲ���С�ĸ��arr����Ϊ1ʱ��arr[0]�Ǿֲ���С��
////arr�ĳ���Ϊ N(N > 1)ʱ�����arr[0] < arr[1]����ôarr[0]�Ǿֲ���С��
////���arr[N - 1] < arr[N - 2]����ôarr[N - 1]�Ǿֲ���С��
////���0 < i < N - 1������ arr[i] < arr[i - 1]������arr[i] < arr[i + 1]��
////��ôarr[i]�Ǿֲ���С�� ������������arr����֪arr�������������ڵ���������ȡ�
////дһ�������� ֻ�践��arr������һ���ֲ���С���ֵ�λ�ü��ɡ�
//
//���ַ�
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
// int findSmallernum(vector<int> num) {
//	if (num.empty()||num.size()==0) {
//		return -1;
//	}
//	if (num.size() == 1) {
//		return 0;
//	}
//	if (num[0] < num[1]) {
//		return 0;
//	}
//	if (num[num.size() - 1] < num[num.size() - 2]) {
//		return num.size() - 1;
//	}
//	int left = 1;
//	int right = num.size() - 1;
//	int mid = 0;
//	while (left < right) {
//		mid = left + (right - left) / 2;
//		if (num[mid] > num[mid - 1]) {
//			right = mid - 1;
//		}
//		else if (num[mid] > num[mid + 1]) {
//			left = mid + 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return left;
//
//}
//int main() {
//	vector<int> num = {
//		9,8,6,8,9
//	};
//	int res=findSmallernum(num);
//	cout << res << " : " << num[res];
//	return 0;
//}