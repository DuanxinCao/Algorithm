//给定一个字符串str1，只能往str1的后面添加字符变成str2。 
//要求1：str2必须包含两个str1，两个str1可以有重合，但是不 能以同一个位置开头。
//要求2：str2尽量短 最终返回str2 举例： str1 = 123，str2 = 123123 时，包含两个str1，
//且不以相同 位置开头，且str2最短。 str1 = 123123，str2 = 123123123 时，包含两个str1，
//且不 以相同位置开头，且str2最短。 str1 = 111，str2 = 1111 时，包含两个str1，
//且不以相同位 置开头，且str2最短。
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
