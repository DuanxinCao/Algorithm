////���ɴ������ֵ���� ����Ŀ�� 
////��һ����������arr��һ����СΪw�Ĵ��ڴ����������߻������ұߣ�
////����ÿ�����ұ߻�һ�� λ�á� ���磬����Ϊ[4, 3, 5, 4, 3, 3, 6, 7]��
////���ڴ�СΪ3ʱ��[4 3 5] 4 3 3 6 7 ���������ֵΪ5 4[3 5 4] 3 3 6 7 
////���������ֵΪ5 4 3[5 4 3] 3 6 7 ���������ֵΪ5 4 3 5[4 3 3] 6 7 
////���������ֵΪ4 4 3 5 4[3 3 6] 7 ���������ֵΪ6 4 3 5 4 3[3 6 7] 
////���������ֵΪ7 ������鳤��Ϊn�����ڴ�СΪw����һ������n - w + 1�����ڵ����ֵ��
////��ʵ��һ�������� ���룺��������arr�����ڴ�СΪw�� 
////�����һ������Ϊn - w + 1������res��res[i]��ʾÿһ�ִ���״̬�µ����ֵ�� 
////�Ա���Ϊ�������Ӧ�÷���{ 5,5,5,4,6,7 }��
//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include <deque>
//using namespace std;
//vector<int> getMaxWindow(vector<int> num, int k) {
//	vector<int> res;
//	if (k == 0 || num.empty() || num.size() < k) {
//		return res;
//	}
//	deque<int> qmax;
//	for (int i = 0; i < num.size(); i++) {
//		while (!qmax.empty() &&num[qmax.back()] < num[i]) { //�ҵ������λ��
//			qmax.pop_back();
//		}
//		qmax.push_back(i);
//		if (qmax.front() == i - k) {//��������е�ֵ����K���򵯳��׸�Ԫ��
//			qmax.pop_front();
//		}
//		if (i >= k - 1) {//ȷ���Ѿ�������k��Ԫ��
//			res.push_back(num[qmax.front()]);
//		}
//	}
//	return res;
//}
//void printVector(vector<int> num) {
//	if (num.empty()) {
//		return;
//	}
//	for (int a : num) {
//		cout << a << endl;
//	}
//}
//int main() {
//	vector<int> num = {
//		2,3,4,2,6,2,5,1
//	};
//	int k = 3;
//	vector<int> res = getMaxWindow(num, k);
//	printVector(res);
//	return 0;
//}




//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include <deque>
//using namespace std;
//vector<int> getMaxWindow(vector<int> num, int k) {
//	vector<int> res;
//	if (num.size() < k)
//		return res;
//	deque<int> que;
//	for (int i = 0; i < num.size(); i++) {
//		while(!que.empty() && num[i] > num[que.back()]) {
//			que.pop_back();
//		}
//		que.push_back(i);
//		if (i - que.front() >= k)
//			que.pop_front();
//		if (i >= k - 1)
//			res.push_back(num[que.front()]);
//	}
//	return res;
//}
//void printVector(vector<int> num) {
//	if (num.empty()) {
//		return;
//	}
//	for (int a : num) {
//		cout << a << endl;
//	}
//}
//int main() {
//	vector<int> num = {
//		2,3,4,2,6,2,5,1
//	};
//	int k = 3;
//	vector<int> res = getMaxWindow(num, k);
//	printVector(res);
//	return 0;
//}




