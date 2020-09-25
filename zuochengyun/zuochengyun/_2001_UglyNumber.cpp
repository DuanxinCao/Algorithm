//规定1是丑数，其他的数如果只含有2或3或5的因子，那么这个 数也是丑数。 
//比如依次的丑数为：1, 2, 3, 5, 6, 8, 9, 10, 12, 15...求第n个丑数
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//int  uglyNumber(int n) {
//	vector<int> help(n);
//	help[0] = 1;
//	int i2 = 0;
//	int i3 = 0;
//	int i5 = 0;
//	int index = 1;
//	while (index < n) {
//		help[index] = min(2 * help[i2], min(3 * help[i3], 5 * help[i5]));
//		if (help[index] == 2 * help[i2]) {
//			i2++;
//		}
//		if (help[index] == 3 * help[i3]) {
//			i3++;
//		}
//		if (help[index] == 5 * help[i5]) {
//			i5++;
//		}
//		index++;
//	}
//	return help[index - 1];
//}
//int main() {
//	cout << uglyNumber(5);
//	return 0;
//}
//
//
//
//
