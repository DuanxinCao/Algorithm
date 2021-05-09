//class String {
//private:
//	char* ch;
//public:
//	String(const char *ptr);
//	String(const String& str);
//	String& operator=(const String& str);
//	~String();
//};
//String::String(char* ptr) {
//	if (ptr == NULL) {
//		ch = new char[1];
//		ch[0] = '\0';
//	}
//	else {
//		int len = strlen(ptr);
//		ch = new char[len + 1];
//		strcpy(ch,ptr);
//	}
//}
//String::String(const String& str) {
//	int len = strlen(str.ch);
//	if (len == 0) {
//		ch = new char[1];
//		ch[0] = '\0';
//	}
//	else {
//		ch = new char[len + 1];
//		strcpy(ch, str.ch);
//	}
//}
//String& String::operator=(const String& str) {
//	if (this == &str)
//		return *this;
//	else {
//		delete[] ch;
//		int len = strlen(str.ch);
//		ch = new char[len + 1];
//		strcpy(ch, str.ch);
//		return *this;
//	}
//}
//~String::String() {
//	delete[] ch;
//}