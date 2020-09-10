////马拉车算法，添加字母使成为回文字符串
//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include <limits>
//using namespace std;
//string getStr(string str) {
//	string res;
//	int index = 0;
//	for (int i = 0; i < 2 * str.size() + 1; i++) {
//		if (i % 2 == 0) {
//			res += '#';
//		}
//		else {
//			res += str[index++];
//		}
//	}
//	return res;
//}
//string shortestEnd(string str) {
//	if (str.empty()) {
//		return NULL;
//	}
//	string tmp = getStr(str);
//	vector<int> arr(tmp.size(), 0);
//	int index = -1;
//	int right = -1;
//	int maxContainEnd = -1;
//	for (int i = 0; i != tmp.size(); i++) {
//		arr[i] = i < right ? min(arr[2 * index - i], right - i) : 1;
//		while (i + arr[i]<tmp.size() && i - arr[i]>-1) {
//			if (tmp[arr[i] + i] == tmp[i - arr[i]]) {
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
//		if (right == tmp.size()) {
//			maxContainEnd = arr[i];
//			break;
//		}
//	}
//		int resultLength = str.size() - maxContainEnd + 1;
//		string result(resultLength,' ');
//		for (int i = 0; i < resultLength; i++) {
//			result[result.size() - 1 - i] = tmp[i * 2 + 1];
//		}
//		return result;
//	
//}
//int main() {
//	cout << shortestEnd("abcd123321");
//	return 0;
//}
//
//
