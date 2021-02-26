
////借助桶排序的思想：（O(n)时间复杂度内寻找无序数组中相差最大的两数之差）
////	申请n+1个桶，将数据按照均匀分配准则放到每个桶中，并记录每个桶内的最大值和最小值
////	最后依次比较每个相邻非空桶之间min-max，求出最大值就是最大差
////	数据类型：正负long等（总之不能用桶排序）
//#include <iostream>
//#include<vector>
//#include<limits.h>
//#include<algorithm>
//using namespace std;
//int bucket(int i, int min, int max, int len) {
//	return (int)(i - min) * len / (max - min);
//}
//int maxGap(vector<int> num) {
//	if (num.size() < 2)
//		return 0;
//	int len = num.size();
//	int max = INT_MIN; //嘤嘤嘤~
//	int min = INT_MAX;
//	for (auto i : num) {
//		min = min < i ? min : i;
//		max = max > i ? max : i;
//	}
//	if (min == max)
//		return 0;
//	vector<int> tmax(len+1, 0);
//	vector<int> tmin(len+1, 0);
//	vector<bool> thas(len+1, 0);
//	int tmp = 0;
//	for (auto i : num) {
//		tmp = bucket(i, min, max, len);
//		tmin[tmp] = thas[tmp] ? std::min(tmin[tmp],i) : i;
//		tmax[tmp] = thas[tmp] ? std::max(tmax[tmp],i) : i;
//		thas[tmp] = true;
//	}
//	int res = 0;
//	int lastmax = tmax[0];
//	for (int i = 1; i <= len; i++) {
//		if (thas[i]) {
//			res = res > (tmin[i] - lastmax) ? res : tmin[i] - lastmax;
//			lastmax = tmax[i];
//		}
//	}
//	return res;
//}
//int main() {
//	vector<int>  num = { 1,3,4,5,7,9,20 };
//	int  res = maxGap(num);
//	cout << res;
//	return 0;
//}

//#include <iostream>
//#include<vector>
//#include<limits.h>
//#include<algorithm>
//using namespace std;
//int bucket(int i, int min, int max, int len) {
//	return (i - min) / (max - min) * len;
//}
//int maxGap(vector<int> num) {
//	if (num.size() < 2)
//		return 0;
//	vector<int> maxvalue(num.size() + 1, 0);
//	vector<int> minvalue(num.size() + 1, 0);
//	vector<bool> flag(num.size() + 1, false);
//	int minval = INT_MAX;
//	int maxval = INT_MIN;
//	for (int i = 0; i < num.size(); i++) {
//		if (minval > num[i])
//			minval = num[i];
//		if (maxval < num[i])
//			maxval = num[i];
//	}
//	for (int i = 0; i < num.size(); i++) {
//		int buc = bucket(num[i], minval, maxval, num.size());
//		if (flag[buc]) {
//			maxvalue[buc] = maxvalue[buc] > num[i] ? maxvalue[buc] : num[i];
//			minvalue[buc] = minvalue[buc] < num[i] ? minvalue[buc] : num[i];
//		}
//		else {
//			maxvalue[buc] = num[i];
//			minvalue[buc]=num[i];
//			flag[buc] = true;
//		}
//	}
//	int  res = 0;
//	int lastmax = maxvalue[0];
//	for (int i = 1; i < num.size() + 1; i++) {
//		if (flag[i] && minvalue[i] - lastmax > res) {
//			res = minvalue[i] - lastmax;
//			lastmax = maxvalue[i];
//		}
//	}
//	return res;
//}
//int main() {
//	vector<int>  num = { 1,3,4,5,7,9,20 };
//	int  res = maxGap(num);
//	cout << res;
//	return 0;
//}