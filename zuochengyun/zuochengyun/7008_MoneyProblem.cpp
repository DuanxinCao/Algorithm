////����һ������arr����һ������aim��
////�����������ѡ��arr�е� ���֣��ܲ����ۼӵõ�aim������true����false//
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//bool func2(int aim, int sum, int i, vector<int>& arr) {
//	if (sum > aim||i>=arr.size())
//		return false;
//	if (sum == aim)
//		return true;
//
//	return func2(aim, sum + arr[i], i + 1, arr) || func2(aim, sum, i + 1, arr);
//}
//bool func(int aim, vector<int> arr) {
//	if (arr.empty())
//		return false;
//	return func2(aim, 0, 0, arr);
//}
//
//int main() {
//	vector<int> arr = { 1,2,3 };
//	int aim = 3;
//	cout << func(aim, arr) << endl;
//	return 0;
//}


//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//bool func2(int aim, int sum, int i, vector<int>& arr) {
//	if (sum > aim && i >= arr.size())
//		return false;
//	if (sum == aim)
//		return true;
//	return func2(aim, sum + arr[i], i + 1, arr) || func2(aim, sum, i+1, arr);
//}
//	
//bool func(int aim, vector<int> arr) {
//	if (arr.empty())
//		return false;
//	return func2(aim, 0, 0, arr);
//}
//
//int main() {
//	vector<int> arr = { 1,2,3 };
//	int aim = 3;
//	cout << func(aim, arr) << endl;
//	return 0;
//}