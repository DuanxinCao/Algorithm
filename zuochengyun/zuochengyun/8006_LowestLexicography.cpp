////����һ���ַ������͵�����strs���ҵ�һ��ƴ�ӷ�ʽ��
////ʹ�ð������� ����ƴ����֮���γɵ��ַ���������͵��ֵ���
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
