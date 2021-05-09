//pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
//pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
//const int BUFFER_LENGTH = 100;
//int buffer[BUFFER_LENGTH];
//int front = 0, rear = -1;
//int size = 0;
//void producer() {
//	while (true) {
//		pthread_mutex_lock(&mutex);
//		while (size == BUFFER_LENGTH) {
//			pthread_cond_wait(&cond, &mutex);
//		}
//		rear = (rear + 1) % BUFFER_LENGTH;
//		buffer[rear] = rear;
//		size++;
//		if (size == 1) {
//			pthread_cond_signal(&cond);
//		}
//		pthread_mutex_unlock(&mutex);
//	}
//}
//void consumer() {
//	while (true) {
//		pthread_mutex_lock(&mutex);
//		while (size == 0) {
//			pthread_con_wait(&cond,&mutex);
//		}
//		front = (front + 1) % BUFFER_LENGTH;
//		size--;
//		if (size == BUFFER_LENGTH - 1) {
//			pthread_cond_signal(&cond);
//		}
//		pthread_mutex_unlock(&mutex);
//	}
//}