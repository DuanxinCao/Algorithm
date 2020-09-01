////求n!的结果
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//long getFactorial(int n) {
//	if (n == 1) {
//		return 1;
//	}
//	long tmp = getFactorial(n - 1);
//	return n * tmp;
//}
//long getFactorial2(int n) {
//	if (n <= 1) {
//		return n;
//	}
//	long res = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		res *= i;
//	}
//	return res;
//}
//int main() {
//	cout << getFactorial(10) << endl;
//	cout << getFactorial2(10) << endl;
//	return 0;
//}