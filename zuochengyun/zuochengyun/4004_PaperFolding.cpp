////折纸问题 【题目】 请把一段纸条竖着放在桌子上，然后从纸条的下边向上方对折1次，
////压出折痕后展开。此时 折痕是凹下去的，即折痕突起的方向指向纸条的背面。
////如果从纸条的下边向上方连续对折2 次，压出折痕后展开，此时有三条折痕，
////从上到下依次是下折痕、下折痕和上折痕。给定一个输入参数N，
////代表纸条都从下边向上方连续对折N次，请从上到下打印所有折痕的方向。 
////例如：N=1时，打印： down N=2时，打印： down down up
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//void printProcess(int i, int n, bool down) {
//	if (i > n) {
//		return;
//	}
//	printProcess(i + 1, n, true);
//	cout << (down ? "down" : "up") << endl;
//	printProcess(i + 1, n, false);
//}
//void printProcess(int n) {
//	printProcess(1, n, true);
//}
//int main() {
//	int n = 4;
//	printProcess(n);
//	return 0;
//}



//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//void printProcess(int i, int n, bool down) {
//	if (i >= n)
//		return;
//	printProcess(i + 1, n, true);
//	if (down)
//		cout << "down" << endl;
//	else
//		cout << "up" << endl;
//	printProcess(i + 1, n, false);
//}
//void printProcess(int n) {
//	printProcess(0, n, true);
//}
//int main() {
//	int n = 4;
//	printProcess(n);
//	return 0;
//}