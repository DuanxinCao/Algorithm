////马拉车算法，找字符串中的最长回文子串
//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include<limits>
//using namespace std;
//string getStr(string str) {
//	string res;
//	int index = 0;
//	for (int i = 0; i < 2 * str.size() + 1; i++) {
//		if (i %2 == 0) {
//			res += '#';
//		}
//		else {
//			res += str[index++];
//		}
//	}
//	return res;
//}
//int maxLength(string str) {
//	if (str.empty()) {
//		return 0;
//	}
//	string strtmp = getStr(str);
//	cout << strtmp<<strtmp.size() << endl;
//	vector<int> arr(strtmp.size(), 0);
//	int index = -1;
//	int right = -1;
//	int maxValue = INT_MIN;
//	for (int i = 0; i != strtmp.size(); i++) {
//		arr[i] = right > i ? min(arr[2 * index - i], right - i) : 1;
//		while (i + arr[i]<strtmp.size() && i - arr[i]>-1) {
//			if (strtmp[i + arr[i]] == strtmp[i - arr[i]]) {
//				arr[i]++;
//			}
//			else {
//				break;
//			}
//		}
//		if (i + arr[i] > right) {
//			right = i + arr[i];
//			index = i;
//		}
//		maxValue = max(maxValue, arr[i]);
//	}
//	return maxValue-1;
//}
//int main() {
//	cout << maxLength("abb");
//	return 0;
//}
//
//
