//һЩ��ĿҪռ��һ�������������������Ҳ���ͬʱ����������Ŀ ��������
//����ÿһ����Ŀ��ʼ��ʱ��ͽ�����ʱ��(����һ�����飬���� ��һ�����������Ŀ)��
//���������������ճ̣�Ҫ������ҽ��� �������ĳ�����ࡣ������������������Ρ�
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//struct Program {
//	int start;
//	int end;
//	Program(int a, int b) {
//		start = a;
//		end = b;
//	}
//};
//int getMax(vector<Program> vec) {
//	if (vec.empty())
//		return 0;
//	sort(vec.begin(), vec.end(), [](Program& a, Program& b) {
//		return a.end<b.end;
//		});
//	int res = 0;
//	int start = 0;
//	for (int i = 0; i < vec.size(); i++) {
//		if (vec[i].start >= start) {
//			res++;
//			start= vec[i].end;
//		}
//	}
//	return res;
//}
//int main() {
//	Program a(1, 2);
//	Program b(1, 3);
//	Program c(2, 4);
//	vector<Program> vec = {
//		a,b,c
//	};
//	cout << getMax(vec) << endl;
//	return 0;
//}




//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//typedef struct Program {
//	int start;
//	int end;
//	Program(int a, int b) {
//		start = a;
//		end = b;
//	}
//}program;
//int getMax(vector<program> vec) {
//	if (vec.empty())
//		return 0;
//	sort(vec.begin(), vec.end(), [](program& a, program& b) {
//		return a.end <= b.end;
//		});
//
//	int end = 0;
//	int count = 0;
//	for (int i = 0; i < vec.size(); i++) {
//		if (end <= vec[i].start) {
//			count++;
//			end = vec[i].end;
//		}
//	}
//	return count;
//}
//int main() {
//	Program a(1, 2);
//	Program b(1, 3);
//	Program c(2, 4);
//	vector<Program> vec = {
//		a,b,c
//	};
//	cout << getMax(vec) << endl;
//	return 0;
//}
