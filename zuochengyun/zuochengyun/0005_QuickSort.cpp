//���ţ�
//	ÿһ�λ��֣������һ��Ԫ��Ϊ��׼�����ֳ�С�ڵ��ڴ������Ԫ�ص�����
//	ʱ�临�Ӷȣ�O(nlogn)
//	�ռ临�Ӷȣ�O(1)
//	���ȶ�������
#include <iostream>
#include <vector>
using namespace std;
vector<int> partition(vector<int>& num, int L, int R) {
	int less = L-1;		//С������
	int more = R;	//��������
	while (L < more) {
		if (num[L] < num[R])
			swap(num[++less], num[L++]);
		else if (num[L] > num[R])
			swap(num[L], num[--more]);
		else
			L++;
	}
	swap(num[more],num[R]);
	vector<int> tmp = { less,more+1 };
	return tmp;
}
void quickSort(vector<int>& num, int L, int R) {
	cout << "L��" << L << "R:" << R << endl;
	if (L >= R)	//��ֹ��������Ϊ>=,������=
		return;
	vector<int> tmp = partition(num, L, R);
	quickSort(num, L, tmp[0]);
	quickSort(num, tmp[1], R);
}
vector<int> quickSort(vector<int> num) {
	if (num.size() < 2)
		return num;
	quickSort(num, 0, num.size()-1);
	return num;
}
int main() {
	vector<int> num = { 6,5,4,3,2,1 };
	vector<int> res = quickSort(num);
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << " ";
	}
	return 0;
}
