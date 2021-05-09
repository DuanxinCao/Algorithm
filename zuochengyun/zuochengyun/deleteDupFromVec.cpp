////删除有序数组中重复的数字
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//void deleteNum(vector<int>& vec) {
//	int cur = 0;
//	int pos = 0;
//	while (pos < vec.size() - 1) {
//		if (vec[pos] != vec[pos + 1]) {
//			vec[cur++] = vec[pos++];
//		}
//		else {
//			while (pos < vec.size() - 1 && vec[pos] == vec[pos + 1]) {
//				pos++;
//			}
//			pos++;
//		}
//	}
//	if (pos == vec.size() - 1) {
//		vec[cur++] = vec[pos];
//	}
//	for (int i = 0; i < cur; i++) {
//		cout << vec[i] << endl;
//	}
//}
//int main() {
//	vector<int> vec{ 1,2,2,3,3,4,4,4,5 };
//	deleteNum(vec);
//	return 0;
//}
