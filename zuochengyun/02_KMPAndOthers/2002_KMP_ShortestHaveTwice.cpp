//����һ���ַ���str1��ֻ����str1�ĺ�������ַ����str2�� 
//Ҫ��1��str2�����������str1������str1�������غϣ����ǲ� ����ͬһ��λ�ÿ�ͷ��
//Ҫ��2��str2������ ���շ���str2 ������ str1 = 123��str2 = 123123 ʱ����������str1��
//�Ҳ�����ͬ λ�ÿ�ͷ����str2��̡� str1 = 123123��str2 = 123123123 ʱ����������str1��
//�Ҳ� ����ͬλ�ÿ�ͷ����str2��̡� str1 = 111��str2 = 1111 ʱ����������str1��
//�Ҳ�����ͬλ �ÿ�ͷ����str2��̡�
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//int getNext(string);
//string getStr(string str) {
//	if (str.empty()) {
//		return "";
//	}
//	if (str.size() == 1) {
//		return str + str;
//	}
//	if (str.size() == 2) {
//		return str[0] == str[1] ? str + str[0] : str + str;
//	}
//	int end = getNext(str);
//	cout << end << endl;
//	return str + str.substr(end);
//}
//int  getNext(string str) {
//	if (str.size() == -1) {
//		return -1;
//	}
//	vector<int> res(str.size()+1, 0);
//	res[0] = -1;
//	res[1] = 0;
//	int pos = 2;
//	int cn = 0;
//	while (pos < res.size()) {
//		if (str[pos - 1] == str[cn]) {
//			res[pos++] = ++cn;
//		}
//		else if (cn > 0) {
//			cn = res[cn];
//		}
//		else {
//			res[pos++] = 0;
//		}
//	}
//	return res[res.size()-1];
//}
//int main() {
//	cout << getStr("abcab") << endl;
//	return 0;
//}
//
//
