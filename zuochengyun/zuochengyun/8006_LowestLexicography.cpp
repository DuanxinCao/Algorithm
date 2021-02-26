////给定一个字符串类型的数组strs，找到一种拼接方式，
////使得把所有字 符串拼起来之后形成的字符串具有最低的字典序。
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//vector<string> getMin(vector <string> str) {
//	if (str.empty()) {
//		return str;
//	}
//	sort(str.begin(), str.end(), [](string a, string b) {
//		return a + b < b + a;
//		});
//	return str;
//}
//void printVector(vector<string> str) {
//	if (str.empty()) {
//		return;
//	}
//	for (string a : str) {
//		cout << a << endl;
//	}
//}
//int main() {
//	vector<string> str = {
//		"b","a","ac"
//	};
//	vector<string> res = getMin(str);
//	printVector(res);
// 	return 0;
//}




//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include <string>
//
//using namespace std;
//vector<string> getMin(vector <string> str) {
//	if (str.empty())
//		return str;
//	sort(str.begin(), str.end(), [](string a, string b) {
//		return a + b <= b + a;
//		});
//	return str;
//}
//void printVector(vector<string> str) {
//	if (str.empty()) {
//		return;
//	}
//	for (string a : str) {
//		cout << a << endl;
//	}
//}
//int main() {
//	vector<string> str = {
//		"b","a","ac"
//	};
//	vector<string> res = getMin(str);
//	printVector(res);
// 	return 0;
//}
