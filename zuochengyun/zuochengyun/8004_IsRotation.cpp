//����һ���ַ�����ʵ�Ǹ�ѭ�����飬����ѭ�����ơ� 
//���硱abc���� ����ѭ������һλ���õ���cab���� ����ѭ��������λ��
//�õ���bca���� ����ѭ��������λ���õ���abc���� ���������ַ���str1��str2��
//�ж�str2�ǲ�����str1ѭ�����Ƶõ��ġ�
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





//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//vector<int> getNext(string str) {
//	vector<int> res(str.size(), 0);
//	res[0] = -1;
//	res[1] = 0;
//	int cn = 0;
//	int pos = 2;
//	while (pos < str.size()) {
//		if (res[pos - 1] == res[cn]) {
//			res[pos++] = ++cn;
//		}
//		else if(cn>0){
//			cn = res[cn];
//		}
//		else {
//			res[pos++] = 0;
//		}
//	}
//	return res;
//}
//int getIndex(string a, string b) {
//	int res;
//	vector<int> next = getNext(b);
//	int indexa = 0;
//	int indexb = 0;
//	while (indexa < a.size() && indexb < b.size()) {
//		if (a[indexa] == b[indexb]) {
//			indexa++;
//			indexb++;
//		}
//		else if (next[indexb] == -1) {
//			indexa++;
//		}
//		else {
//			indexb = next[indexb];
//		}
//	}
//	return (indexb == b.size()) ? indexb : -1;
//
//}
//bool ifQueal(string a, string b) {
//	if (a.empty() || a.size() != b.size())
//		return false;
//	string c = a + a;
//	int index=getIndex(c, b);
//	return index >= 0 ? true : false;
//}
//int main() {
//	cout << ifQueal("abc", "bca");
//	return 0;
//}

