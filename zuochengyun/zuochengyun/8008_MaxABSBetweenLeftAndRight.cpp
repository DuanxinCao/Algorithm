////����leftMax��rightMax֮��ľ���ֵ ����Ŀ�� ����һ������ΪN��N > 1������������arr��
////���Ի��ֳ��������� ���֣��󲿷�Ϊarr[0..K]���Ҳ���Ϊarr[K + 1..N - 1]��
////K����ȡ ֵ�ķ�Χ��[0, N - 2]������ô�໮�ַ����У�
////�󲿷��е����ֵ ��ȥ�Ҳ������ֵ�ľ���ֵ�У�����Ƕ��٣�
////���磺[2, 7, 3, 1, 1]�����󲿷�Ϊ[2, 7]���Ҳ���Ϊ[3, 1, 1]ʱ�� 
////�󲿷��е����ֵ��ȥ�Ҳ������ֵ�ľ���ֵΪ4�����󲿷�Ϊ[2, 7, 3]���Ҳ���Ϊ[1, 1]ʱ��
////�󲿷��е����ֵ��ȥ�Ҳ������ ֵ�ľ���ֵΪ6�����кܶ໮�ַ����������շ���6��
//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include<limits>
//using namespace std;
//int getMax(vector<int> num) {
//	int maxValue = INT_MIN;
//	for (int i = 0; i < num.size(); i++) {
//		maxValue = max(maxValue, num[i]);
//	}
//	return maxValue - min(num[0], num[num.size() - 1]);
//}
//int main() {
//	vector<int>num={
//		2,1,8,6
//	};
//	cout << getMax(num);
//	return 0;
//}
//
//




//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include<limits>
//using namespace std;
//int getMax(vector<int> num) {
//	int maxvalue = INT_MIN;
//	for (int i : num) {
//		if (i > maxvalue)
//			maxvalue = i;
//	}
//	return maxvalue - min(num[0], num[num.size() - 1]);
//}
//int main() {
//	vector<int>num={
//		2,1,8,6
//	};
//	cout << getMax(num);
//	return 0;
//}


