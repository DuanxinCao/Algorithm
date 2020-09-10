//
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//vector<int> getNext(string);
//int getIndexOf(string a, string b) {
//	if (a.empty() || b.empty() || a.length() < b.length() || b.length() < 1) {
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
//		else if(next[bi]==-1){
//			ai++;
//		}
//		else {
//			bi = next[bi];
//		}
//	}
//	return bi == b.size() ? ai - bi : -1;
//}
//vector<int> getNext(string str) {
//	vector<int> res(str.size(),0);
//	res[0]=-1;
//	if (str.size() == 1) {
//		return res;
//	}
//	res[1]=0;
//	int pos = 2;
//	int cn = 0;
//	while (pos < str.size()) {
//		if (str[pos - 1] == str[cn]) {
//			res[pos++] = ++cn;
//		}
//		else if (cn>0) {
//			cn = res[cn];
//		}
//		else {
//			res[pos++] = 0;
//		}
//	}
//	return res;
//}
//void printVector(vector<int> rs) {
//	for (int a : rs) {
//		cout << a << endl;
//	}
//}
//int main() {
//	string a = "abcabcababaccc";
//	string b = "ababa";
//	cout << getIndexOf(a, b) << endl;
//	return 0;
//
//}
//
//
