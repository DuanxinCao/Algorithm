//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include <string>
//
//using namespace std;
//string solve(string s, string t) {
//    // write code here
//    int lens = s.size() - 1;
//    int lent = t.size() - 1;
//    int tmp = 0;
//    string res = "";
//    while (lens >= 0 && lent >= 0) {
//        res += to_string((tmp + int(s[lens] - '0') + int(t[lent] - '0')) % 10);
//        tmp = (tmp + int(s[lens--] - '0') + int(t[lent--] - '0')) / 10;
//    }
//    while (lens >= 0) {
//        res += to_string((tmp + int(s[lens] - '0')) % 10);
//        tmp = (tmp + int(s[lens--] - '0')) / 10;
//    }
//    while (lent >= 0) {
//        res += to_string((tmp + int(t[lent] - '0')) % 10);
//        tmp = (tmp + int(t[lent--] - '0')) / 10;
//    }
//    if (tmp > 0) {
//        res += to_string(tmp);
//    }
//    std::reverse(res.begin(), res.end());
//    return res;
//}
//string solve2(string s, string t) {
//    // write code here
//    int lens = s.size() - 1;
//    int lent = t.size() - 1;
//    int tmps= 0,tmpt=0;
//    string res = "";
//    int flag = false;
//    while (lens >= 0 && lent >= 0) {
//        tmps = flag?int(s[lens] - '0')-1: int(s[lens] - '0');
//        tmpt = int(t[lent] - '0');
//        if (tmps > tmpt) {
//            flag = false;
//            res += to_string(tmps - tmpt);
//        }
//        else {
//            flag = true;
//            res += to_string(tmps + 10 - tmpt);
//        }
//    }
//    while (lens >= 0) {
//        tmps = flag ? int(s[lens] - '0') - 1 : int(s[lens] - '0');
//        if (tmps > 0) {
//            flag = false;
//            res += to_string(tmps - tmpt);
//        }
//        else {
//            flag = true;
//            res += to_string(tmps + 10 - tmpt);
//        }
//    }
//    std::reverse(res.begin(), res.end());
//    return res;
//}
//int main() {
//    //string str = "99";
//   /* char ch = 'a';
//    str += ch;*/
// /*   int len = str.size();
//    char *ch=new char[len + 1];
//    ch = (char*)(str.c_str());
//
//    cout << ch[0] << ch[1] << endl;*/
//    //cout << solve("99", "1") << endl;
//    cout << "Hello World!" << endl;
//    return 0;
//}