////母牛每年生一只母牛，新出生的母牛成长三年后也能每年生一只 母牛，假设不会死。
////求N年后，母牛的数量。
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//int func(int n) {
//	if (n == 0)
//		return 0;
//	if (n <=3) {
//		return n;
//	}
//	return func(n - 1) + func(n - 3);
//}
//int func2(int n) {
//	if (n <= 3)
//		return n;
//	vector<int> num = {
//		1,2,3
//	};
//	for (int i = 3; i < n; i++) {
//		num.push_back(num[i - 1] + num[i - 3]);
//	}
//	return num.back();
//}
//int main() {
//	cout << func(4)<< endl;
//	cout << func2(4)<< endl;
//	return 0;
//}