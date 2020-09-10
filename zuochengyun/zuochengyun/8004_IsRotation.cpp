//想想一个字符串其实是个循环数组，可以循环右移。 
//比如”abc”， 向右循环右移一位，得到”cab”， 向右循环右移两位，
//得到“bca”， 向右循环右移三位，得到“abc”， 给定两个字符串str1和str2，
//判断str2是不是由str1循环右移得到的。
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//vector<int> getNext(string str) {
//	if (str.empty()) {
//		return vector<int>(-1);
//	}
//	vector<int> res(str.size(), 0);
//	res[0] = -1;
//	res[1] = 0;
//	int pos = 2;
//	int cn = 0;
//	while (pos < res.size()) {
//		if (str[pos - 1] == str[cn]){
//			res[pos++] = ++cn;
//		}
//		else if (cn > 0) {
//			cn = res[cn];
//		}
//		else {
//			res[pos++] = 0;
//		}
//	}
//	return res;
//}
//int getIndex(string a, string b) {
//	if (a.empty() || b.empty() || a.size() < b.size()) {
//		return -1;
//	}
//	int ai = 0;
//	int bi = 0;
//	vector<int> next = getNext(b);
//	while (ai < a.size() && bi < b.size()) {
//		if (a[ai] == b[bi]) {
//			ai++;
//			bi++;
//		}
//		else if (next[bi] == -1) {
//			ai++;
//		}
//		else {
//			bi = next[bi];
//		}
//	}
//	return bi == b.size() ? ai - bi : -1;
//}
//bool ifQueal(string a, string b) {
//	if (a.empty() || b.empty() || a.size() != b.size()) {
//		return false;
//	}
//	string c = b + b;
//	return getIndex(c, a) >= 0?true:false;
//}
//int main() {
//	cout << ifQueal("abc", "bcd");
//	return 0;
//}
//
//
