//一个人开始在(0, 0)，总是第一次走向上方，第二次走向左方，
//第三次走向下方， 第四次走向右方，第五次走向上方，第六次走向左方，
//第七次走向下方，第八 次走向右方，第九次走向上方...依次走下去。
//给定一个数组arr，arr[i]表示第i次走的步数。
//请返回，按照数组的步数走，会不会让走过的路径交叉在一起。
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//bool isSelfCrossing(vector<int> num) {
//	if (num.empty() || num.size() < 4) {
//		return false;
//	}
//	if ((num.size() > 3 && num[2] <= num[0] && num[3] >= num[1]) || (num.size() > 4 && ((num[4] >= num[2] && num[3] <= num[1]) || (num[1] == num[3] && num[0] + num[4] >= num[2]))) ){
//		return true;
//	}
//	for (int i = 5; i < num.size(); i++) {
//		if ((num[i - 1] <= num[i - 3] && num[i] >= num[i - 2]) || (num[i - 4]<=num[i - 2] && num[i] + num[i - 4]>num[i - 2] && num[i - 1] + num[i - 5] > num[i - 3])) {
//			return true;
//		}
//	}
//	return false;
//}
//int main() {
//	cout << "Hello World!" << endl;
//	return 0;
//}
//
//
//
