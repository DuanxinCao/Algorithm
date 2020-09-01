//打印一个字符串的全部排列
#include <iostream>
#include<vector>
#include<algorithm>
#include <set>
using namespace std;
//vector<char> str;
//int len;
//void printStr(vector<char>& str) {
//	for (char c : str) {
//		cout << c;
//	}
//	cout << endl;
//}
//void func(int i) {
//	if (i == len) {
//		printStr(str);
//		return;
//	}
//	for (int k = i; k < len; k++) {
//		swap(str[i], str[k]);
//		func(i+1);
//		swap(str[i], str[k]);
//	}
//}
//void printAllSusquence(string st) {
//	for (char c : st) {
//		str.push_back(c);
//	}
//	func(0);
//}
vector<char> str;
int len;

void printStr(vector<char>& str) {
	for (char c : str) {
		cout << c;
	}
	cout << endl;
}
void func(int i) {
	if (i == len) {
		printStr(str);
		return;
	}
	set<char> st;
	for (int k = i; k < len; k++) {
		if (st.empty()||st.find(str[k]) == st.end()) {
			st.insert(str[k]);
			swap(str[i], str[k]);
			func(i + 1);
			swap(str[i], str[k]);
		}

	}
}
void printAllSusquence(string st) {
	for (char c : st) {
		str.push_back(c);
	}
	func(0);
}
int main() {
	len = 2;
	printAllSusquence("ab");
	return 0;
}