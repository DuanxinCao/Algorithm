//tmplate <typename T>
//class Shared_ptr {
//private:
//	int *cnt;
//	T *ptr;
//public:
//	Shared_ptr(T* ptr_);
//	Shared_ptr(Shared_ptr<T> const &sharedPtr);
//	Shared_ptr<T>& operator=(Shared_ptr<T> const &sharedPtr);
//	~Shared_ptr();
//	T& operator*();
//	T* operator&();
//};
//Shared_ptr::Shared_ptr((T* ptr_) : ptr(ptr_) {
//	if (ptr) {
//		*cnt++;
//	}
//}
//Shared_ptr::Shared_ptr(Shared_ptr<T> const& sharedPtr) {
//	ptr = sharedPtr->ptr;
//	cnt = sharedPtr->cnt;
//	*cnt++;
//}
//Shared_ptr<T>& Shared_ptr::operator=(Shared_ptr<T> const& sharedPtr) {
//	if (this == &sharedPtr) {
//		*cnt++;
//	}
//	else {
//		*cnt--;
//		if (*cnt == 0)
//			delete ptr;
//		ptr = sharedPtr->ptr;
//		cnt = sharedPtr->cnt;
//		*cnt++;
//	}
//	return *this;
//}
//Shared_ptr~Shared_ptr() {
//	*cnt--;
//	if (*cnt == 0)
//		delete ptr;
//}
//T& Shared_ptr::operator*() {
//	return *ptr;
//}
//T* Shared_ptr::operator*() {
//	return ptr;
//}