////汉诺塔问题 打印n层汉诺塔从最左边移动到最右边的全部过程
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//void func(int n,string from,string mid,string to) {
//	if (n == 1) {
//		cout << "move from " <<from<<" to "<<to << endl;
//		return;
//	}
//	//将左边的n-1个移动到中间
//	func(n - 1, from, to, mid);
//	//将左边的第n个移动到右边
//	func(1, from, mid, to);
//	//将中间的n-1个移动到右边
//	func(n - 1, mid, from, to);
//
//}
//int main() {
//	func(5, "left", "mid", "right");
//	return 0;
//}


//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//void func(int n,string from,string mid,string to) {
//	if (n == 1) {
//		cout << "move from " <<from<<" to "<<to << endl;
//		return;
//	}
//	func(n - 1, from, to, mid);
//	func(1, from, mid, to);
//	func(n - 1, mid, from, to);
//
//}
//int main() {
//	func(5, "left", "mid", "right");
//	return 0;
//}