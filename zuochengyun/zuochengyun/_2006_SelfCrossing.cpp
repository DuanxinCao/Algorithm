//һ���˿�ʼ��(0, 0)�����ǵ�һ�������Ϸ����ڶ��������󷽣�
//�����������·��� ���Ĵ������ҷ�������������Ϸ��������������󷽣�
//���ߴ������·����ڰ� �������ҷ����ھŴ������Ϸ�...��������ȥ��
//����һ������arr��arr[i]��ʾ��i���ߵĲ�����
//�뷵�أ���������Ĳ����ߣ��᲻�����߹���·��������һ��
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
