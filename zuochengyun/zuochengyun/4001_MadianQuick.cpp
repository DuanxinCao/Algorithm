////Ѱ���������е���λ����
////	�����󶥶Ѻ�С���ѣ�ÿ������������ȴ󶥶Ѵ�Ͳ���С���ѣ�ÿ�β����Ժ�Ƚ������ѵĴ�С��
////���������1����ƽ��һ�¡�
//
//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//using namespace std;
//priority_queue<int, vector<int>, less<int> > maxHeap;
//priority_queue<int, vector<int>, greater<int> > minHeap;
//void modifyTwoHeap() {
//	if (maxHeap.size() - minHeap.size() == 2) {
//		minHeap.push(maxHeap.top());
//		maxHeap.pop();
//	}
//	else if (minHeap.size() - maxHeap.size() == 2) {
//		maxHeap.push(minHeap.top());
//		minHeap.pop();
//	}
//
//}
//void insert(int num) {
//	if (maxHeap.size() == 0) {
//		maxHeap.push(num);
//	}
//	else if (num <= maxHeap.top()) {
//		maxHeap.push(num);
//	}
//	else {
//		if (minHeap.size() == 0)
//			minHeap.push(num);
//		else if (num < minHeap.top())
//			maxHeap.push(num);
//		else
//			minHeap.push(num);
//	}
//	modifyTwoHeap();
//}
//int getmedian() {
//	if (maxHeap.empty()&& minHeap.empty())
//		return INT_MIN;
//	int max=maxHeap.top();
//	if (minHeap.empty())
//		return max;
//	int min = minHeap.top();
//	if ((maxHeap.size() + minHeap.size()) % 2 == 0)
//		return (max + min) % 2;
//	return maxHeap.size() > minHeap.size() ? max : min;
//}
//int main() {
//	insert(1);
//	cout << getmedian() << endl;
//	insert(2);
//	cout << getmedian() << endl;
//	insert(3);
//	cout << getmedian() << endl;
//	return 0;
//}