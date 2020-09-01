////打印一个字符串的全部子序列，包括空字符串
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//vector<char> str;
//int len = 0;
//void printStr(vector<char>& str) {
//	for (char c : str) {
//		cout << c;
//	}
//	cout << endl;
//}
//void func(vector<char> &res, int i) {
//	if (i == len) {
//		printStr(res);
//		return;
//	}
//
//	res.push_back(str[i]);
//	func(res, i + 1);
//	res.pop_back();
//	func(res, i + 1);
//
//}
//void printAllSusquence(string st) {
//	
//	for (char c : st) {
//		str.push_back(c);
//	}
//	vector<char> res;
//	func(res,0);
//}
//int main() {
//	len = 3;
//	printAllSusquence("abc");
//	return 0;
//}