//给定一个字符串str，和一个整数k，返回str向左循环左移k位后的结 果
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//void reverse(string& str,int start, int end) {
//	char tmp = 0;
//	while (start < end) {
//		tmp = str[start];
//		str[start] = str[end];
//		str[end] = tmp;
//		start++;
//		end--;
//	}
//}
//void rotate(string &str, int k) {
//	if (str.empty() || k == 0 || k > str.size()) {
//		return ;
//	}
//	reverse(str, 0, k - 1);
//	reverse(str, k, str.size() - 1);
//	reverse(str, 0, str.size() - 1);
//}
//int main() {
//	string str = "12345abc";
//	rotate(str, 2);
//	cout << str << endl;
//	return 0;
//}
//
//



//
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//void reverse(string& str,int start, int end) {
//	char tmp = ' ';
//	while (start < end) {
//		tmp = str[end];
//		str[end--] = str[start];
//		str[start++] = tmp;
//	}
//}
//void rotate(string& str, int k) {
//	if (str.size() < k)
//		return;
//	reverse(str, 0, k - 1);
//	reverse(str, k, str.size() - 1);
//	reverse(str, 0, str.size() - 1);
//}
//int main() {
//	string str = "12345abc";
//	rotate(str, 2);
//	cout << str << endl;
//	return 0;
//}
//
