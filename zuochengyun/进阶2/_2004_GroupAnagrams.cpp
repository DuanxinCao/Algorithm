//���str1��str2�������ַ�����һ��������ÿ���ַ��ĸ���Ҳ һ����
//��ôstr1��str2�������δʡ� ����һ���ַ����͵����飬��ѱ��δʷ��顣
//���� ���룺["eat", "tea", "tan", "ate", "nat", "bat"]
//����� [["ate", "eat", "tea"], ["nat", "tan"], ["bat"]] 
//ע�⣺���е��ַ�����Сд��
//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include<map>
//using namespace std;
//vector<vector<string>> getStr(vector<string> strs) {
//	map<string, vector<string>> tmp;
//	for (string str : strs) {
//		vector<int> record(26);
//		for (char ch : str) {
//			record[ch - 'a']++;
//		}
//		string s;
//		for (vector<int>::iterator iter = record.begin(); iter != record.end(); iter++) {
//			s += *iter;
//			s += "_";
//		}
//		if (tmp.empty() || tmp.find(s) == tmp.end()) {
//			tmp.insert(pair <string, vector<string>>(s, vector<string>{str}));
//		}
//		else {
//			tmp.at(s).push_back(str);
//		}
//	}
//	vector<vector<string>> res;
//	for (map<string, vector<string>>::iterator iter = tmp.begin(); iter != tmp.end();iter++){ 
//			res.push_back(iter->second);
//	}
//	return res;
//}
//int main() {
//	vector<string> res = { "end","dne","abc" };
//	vector<vector<string>> r = getStr(res);
//	for (vector<string> i : r) {
//		for (string j : i) {
//			cout << j << endl;
//		}
//		cout << "__________"<<endl;
//	}
//	return 0;
//}
