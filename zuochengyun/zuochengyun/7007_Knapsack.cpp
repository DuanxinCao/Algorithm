////������������w��v���������鳤����ȣ�w[i]��ʾ��i����Ʒ��������
////v[i]��ʾ��i����Ʒ�ļ�ֵ�� �ٸ���һ������bag��
////Ҫ������ѡ��Ʒ������������һ�����ܳ� ��bag������������������£����ܻ�õ�����ֵ��
//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//int dp(vector<int> v, vector<int> w, int weight) {
//	vector<vector<int>> res(v.size()+1, vector<int>(weight + 1, 0));
//	//���ж�����Ʒû�б����������һ����Ʒ��ʼ����
//	for (int i = v.size()-1; i >=0; i--) {
//		for (int j = weight; j >=0; j--) {//���ж���ʣ��ռ�
//			res[i][j] = res[i +1][j];
//			if (j+w[i]<=weight) {
//				res[i][j] = max(res[i][j], res[i +1][j +w[i]] + v[i]);
//			}
//		} 
//
//	}
//	return res[0][0];
//}
//int dp2(vector<int> v, vector<int> w, int weight) {
//	vector<vector<int>> dp(v.size(), vector<int>(weight + 1, 0));
//	if (w[0] <= weight) {
//		for (int i = w[0]; i < weight; i++) {
//			dp[0][i] = v[0];
//		}
//	}
//	for (int i = 1; i < v.size(); i++) {
//		for (int j =0; j <= weight; j++) {
//			dp[i][j] = dp[i - 1][j];
//			if (w[i] <= j) {
//				dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
//			}
//		}
//	}
//	return dp[v.size() - 1][weight];
//}
////һά����ʱ����ѭ������������Ϊ�ڿ��ǵ�ĳ��Ԫ��ʱ�����ܽ���Ԫ�ؿ��Ƕ��
//int dp3(vector<int> v, vector<int> w, int weight) {
//	vector<int> dp(weight + 1, 0);
//	for (int i = 0; i < v.size(); i++) {
//		for (int j = weight; j >= w[i]; j--) {
//			dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
//		}
//	}
//	return dp[weight];
//}

//int main() {
//	vector<int> v = {
//		3, 2, 4, 7
//	};
//	vector<int> w = {
//		5, 6, 3, 19
//	};
//	int weight = 11;
//
//	//cout << dp(v,w,11) << endl;
//	cout << dp2(v,w,11) << endl;
//	//cout << dp3(v,w,11) << endl;
//	return 0;
//}


//#include <iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//int dp(vector<int> v, vector<int> w, int weight) {
//	vector<vector<int>> res(v.size() + 1, vector<int>(weight + 1, 0));
//	//���ж�����Ʒû�б����������һ����Ʒ��ʼ����
//	for (int i = v.size() - 1; i >= 0; i--) {
//		for (int j = weight; j >= 0; j--) {//���ж���ʣ��ռ�
//			res[i][j] = res[i + 1][j];
//			if (j + w[i] <= weight) {
//				res[i][j] = max(res[i][j], res[i + 1][j + w[i]] + v[i]);
//			}
//		}
//
//	}
//	return res[0][0];
//}

//int dp2(vector<int> v, vector<int> w, int weight) {
//	vector<vector<int>> dp(v.size(), vector<int>(weight + 1, 0));
//	if (w[0] < weight) {
//		for (int i = w[0]; i < weight + 1; i++) {
//			dp[0][i] = v[0];
//		}
//	}
//	for (int i = 1; i < w.size(); i++)
//	{
//		for (int j = 0; j < weight + 1; j++) {
//			dp[i][j] = dp[i - 1][j];
//			if (w[i] <= j) {
//				dp[i][j] = max(dp[i][j],dp[i - 1][j - w[i]] + v[i]);
//			}
//		}
//	}
//	return dp[w.size() - 1][weight];
//}
////һά����ʱ����ѭ������������Ϊ�ڿ��ǵ�ĳ��Ԫ��ʱ�����ܽ���Ԫ�ؿ��Ƕ��
//int dp3(vector<int> v, vector<int> w, int weight) {
//	vector<int> dp(weight + 1, 0);
//	for (int i = 0; i < v.size(); i++)
//		for (int j = weight; j > w[i]; j--)
//			dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
//	return dp[weight];
//}
//int main() {
//	vector<int> v = {
//		3, 2, 4, 7
//	};
//	vector<int> w = {
//		5, 6, 3, 19
//	};
//	int weight = 11;
//
//	//cout << dp(v, w, 11) << endl;
//	cout << dp2(v, w, 11) << endl;
//	//cout << dp3(v, w, 11) << endl;
//	return 0;
//}