//快排：
//	每一次划分，以随机一个元素为基准，划分出小于等于大于这个元素的区域
//	时间复杂度：O(nlogn)
//	空间复杂度：O(1)
//	不稳定性排序
#include <iostream>
#include <vector>
using namespace std;
vector<int> partition(vector<int>& num, int L, int R) {
	int less = L-1;		//小于区域
	int more = R;	//大于区域
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
	cout << "L：" << L << "R:" << R << endl;
	if (L >= R)	//终止条件必须为>=,不能是=
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
