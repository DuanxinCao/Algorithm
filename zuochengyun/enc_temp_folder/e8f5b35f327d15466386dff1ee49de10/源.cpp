//����Ͱ�����˼�룺��O(n)ʱ�临�Ӷ���Ѱ�����������������������֮�
//	����n+1��Ͱ�������ݰ��վ��ȷ���׼��ŵ�ÿ��Ͱ�У�����¼ÿ��Ͱ�ڵ����ֵ����Сֵ
//	������αȽ�ÿ�����ڷǿ�Ͱ֮��min-max��������ֵ��������
//	�������ͣ�����long�ȣ���֮������Ͱ����
#include <iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int bucket(int i, int min, int max, int len) {
	return (int)(i - min) * len / (max - min);
}
int maxGap(vector<int> num) {
	if (num.size() < 2)
		return 0;
	int len = num.size();
	int max = INT_MIN;
	int min = INT_MAX;
	for (auto i : num) {
		min = min < i ? min : i;
		max = max > i ? max : i;
	}
	if (min == max)
		return 0;
	vector<int> tmax(len+1, 0);
	vector<int> tmin(len+1, 0);
	vector<bool> thas(len+1, 0);
	int tmp = 0;
	for (auto i : num) {
		tmp = bucket(i, min, max, len);
		tmin[tmp] = thas[tmp] ? std::min(tmin[tmp],i) : i;
		tmax[tmp] = thas[tmp] ? std::max(tmax[tmp],i) : i;
		thas[tmp] = true;
	}
	int res = 0;
	int lastmax = tmax[0];
	for (int i = 1; i <= len; i++) {
		if (thas[i]) {
			res = res > (tmin[i] - lastmax) ? res : tmin[i] - lastmax;
			lastmax = tmax[i];
		}
	}
	return res;
}
int main() {
	vector<int>  num = { 1,3,4,5,7,9,20 };
	int  res = maxGap(num);
	cout << res;
	return 0;
}
