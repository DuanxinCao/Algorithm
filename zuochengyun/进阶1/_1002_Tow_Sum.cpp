//����һ������arr����һ������aim���뷵��������λ�õ����� �Լӳ�aim����
//����arr = { 2, 7, 11, 15 }��target = 9 ����{ 0,1 }����Ϊarr[0] + arr[1] = 2 + 7 = 9 
//���Լ���ÿ��������ֻ��һ���
//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include <map>
//using namespace std;
//vector<int> twoSum(vector<int> nums, int target) {
//	map<int, int> tmp;
//	for (int i = 0; i < nums.size(); i++) {
//		tmp.insert(pair<int,int>(nums[i],i));
//	}
//	sort(nums.begin(), nums.end(), [](int a, int b) {
//		return a > b;
//		});
//	int l = 0;
//	int r = nums.size() - 1;
//	vector<int> res = {
//		-1,-1
//	};
//	while (l < r) {
//		if (nums[l] + nums[r] == target) {
//			res[0] = tmp[nums[l]];
//			res[1] = tmp[nums[r]];
//			break;//~~~~
//		}
//		else if (nums[l] + nums[r] > target) {
//			r--;
//		}
//		else
//			l++;
//	}
//	return res;
//}
//int main() {
//	vector<int> res = twoSum({ 1,2,3,4,5,6 }, 7);
//	cout << res[0] << " " << res[1] << endl;
//	return 0;
//}
//
//
//
//
