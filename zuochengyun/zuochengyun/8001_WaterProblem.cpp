//����һ���������һ�������� ����[3, 1, 2, 4]�� 
//����0λ����һ�����Ϊ1���߶�Ϊ3��ֱ��ͼ�� ����1λ����һ�����Ϊ1��
//�߶�Ϊ1��ֱ��ͼ�� ����2λ����һ�����Ϊ1���߶�Ϊ2��ֱ��ͼ�� ����3λ����һ�����Ϊ1��
//�߶�Ϊ4��ֱ��ͼ�� ����ֱ��ͼ�ĵײ�����һ��ˮƽ���ϣ��ҽ����š� �����ͼ�����һ��������
//a�����������װ3���ˮ�� ����һ��û�и���������arr��������װ����ˮ��
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//int getWater(vector<int> num) {
//	if (num.empty() || num.size() < 3) {
//		return 0;
//	}
//	int value = 0;
//	int leftMax = num[0];
//	int rightMax = num[num.size() - 1];
//	int l = 1;
//	int r = num.size() - 2;
//	while (l <= r) {
//		if (leftMax <= rightMax) {
//			value += max(0, leftMax - num[l]);
//			leftMax = max(leftMax, num[l++]);
//		}
//		else {
//			value += max(0, rightMax - num[r]);
//			rightMax = max(rightMax, num[r++]);
//		}
//
//		
//	}
//return value;
//}
//int main() {
//	vector<int> num = {
//		3,2,1,2,3
//	};
//	cout << getWater(num)<<endl;
//	return 0;
//}
