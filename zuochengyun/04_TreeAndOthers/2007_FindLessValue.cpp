////在数组中找到一个局部最小的位置 
////【题目】 定义局部最小的概念。arr长度为1时，arr[0]是局部最小。
////arr的长度为 N(N > 1)时，如果arr[0] < arr[1]，那么arr[0]是局部最小；
////如果arr[N - 1] < arr[N - 2]，那么arr[N - 1]是局部最小；
////如果0 < i < N - 1，既有 arr[i] < arr[i - 1]，又有arr[i] < arr[i + 1]，
////那么arr[i]是局部最小。 给定无序数组arr，已知arr中任意两个相邻的数都不相等。
////写一个函数， 只需返回arr中任意一个局部最小出现的位置即可。
//
//二分法
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