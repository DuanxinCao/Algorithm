//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include <list>
//#include <map>
//
//using namespace std;
//struct CacheNode {
//	int key;
//	int value;
//	//CacheNode* pre, * next;
//	CacheNode(int key_, int value_) :key(key_), value(value_){
//	}
//};
//map<int, CacheNode*> hashMap;
//list<CacheNode*> mList;
//int size = 10;
//int get(int key) {
//	map<int, CacheNode*>::iterator iter = hashMap.find(key);
//	if (iter == hashMap.end()) {
//		return -1;
//	}
//	else {
//		CacheNode* node = iter->second;
//		int value = node->value;
//		mList.remove(node);
//		mList.push_front(node);
//		return value;
//	}
//}
//void set(int key, int value) {
//	map<int, CacheNode*>::iterator iter = hashMap.find(key);
//	if (iter == hashMap.end()) {
//		CacheNode* newNode = new CacheNode(key, value);
//		map<int, CacheNode*>::iterator iter = hashMap.find(mList.back()->key);
//		if (mList.size() >= 10) {
//			mList.pop_back();
//			hashMap.erase(iter);
//			hashMap.insert(pair<int,CacheNode*>(key,newNode));
//		}
//		mList.push_front(newNode);
//	}
//	else {
//		CacheNode* node = iter->second;
//		node->value = value;
//		mList.remove(node);
//		mList.push_front(node);
//	}
//}
//int main() {
//	cout << "Hello World!" << endl;
//	return 0;
//}


