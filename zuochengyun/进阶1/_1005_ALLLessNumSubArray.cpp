//��������arr������num���������ж��ٸ�������������������� 
//max(arr[i..j]) - min(arr[i..j]) <= num max(arr[i..j])��ʾ������arr[i..j]�е����ֵ��
//min(arr[i..j])��ʾ������arr[i..j] �е���Сֵ�� 
//��Ҫ�� ������鳤��ΪN����ʵ��ʱ�临�Ӷ�ΪO(N)�Ľⷨ��
//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include<deque>
//using namespace std;
//int getres(vector<int> num, int target) {
//	if (num.empty())
//		return 0;
//	int res = 0;
//	deque<int> minQueue;
//	deque<int> maxQueue;
//	int i=0,j = 0;
//	while (i < num.size()) {
//		while (j < num.size()) {
//			while (!minQueue.empty() && num[minQueue.back()] >= num[j]) {
//				minQueue.pop_back();
//			}
//			minQueue.push_back(j);
//			while (!maxQueue.empty() && num[maxQueue.back()] <= num[j]) {
//				maxQueue.pop_back();
//			}
//			maxQueue.push_back(j);
//			if (num[maxQueue.front()] - num[minQueue.front()] > target)
//				break;
//			j++;//~~~
//		}
//		if (minQueue.front() == i)
//			minQueue.pop_front();
//		if (maxQueue.front() == i)
//			maxQueue.pop_front();
//		res += j - i;
//		i++;
//	}
//	return res;//~~~~
//}
//int main() {
//	cout << getres({ 1,2 }, 6);
//	return 0;
//}
//
//
//
//
