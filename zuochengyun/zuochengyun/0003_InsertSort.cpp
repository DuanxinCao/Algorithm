////��������
////	n��ѭ����ÿ��ѭ����δ����ĵ�һ��Ԫ����ǰ���Ԫ�رȽϣ���С��ǰ���Ԫ������н���
////	ʱ�临�Ӷȣ�O(n^2)
////	�ռ临�Ӷȣ�O(1)
////	�ȶ�����
//#include<vector>
//#include <iostream>
//
//using namespace std;
//
//void sort(vector<int>& str) {
//	if (str.size() < 2) return;
//	for (int i = 1; i < str.size(); i++) {
//		for (int j = i -1; j >=0&& str[j + 1] < str[j]; j--) {
//			swap(str[j], str[j +1]);
//		}
//	}
//}
//int main() {
//	vector<int> str = { 7,6,4,5,3,2 };
//	sort(str);
//	for (auto& i : str)
//		cout << i;
//	return 0;
//}

//#include<vector>
//#include <iostream>
//
//using namespace std;
//
//void sort(vector<int>& str) {
//	if (str.size() < 2)
//		return;
//	for (int i = 0; i < str.size()-1; i++) {
//		for (int j = i; j >=0; j--) {
//			if (str[j + 1] < str[j]) {
//				swap(str[j + 1], str[j]);
//			}
//		}
//	}
//}
//int main() {
//	vector<int> str = { 7,6,4,5,3,2 };
//	sort(str);
//	for (auto& i : str)
//		cout << i;
//	return 0;
//}
