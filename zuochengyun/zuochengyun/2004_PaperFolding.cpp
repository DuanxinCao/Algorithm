//��ֽ���� ����Ŀ�� ���һ��ֽ�����ŷ��������ϣ�Ȼ���ֽ�����±����Ϸ�����1�Σ�
//ѹ���ۺۺ�չ������ʱ �ۺ��ǰ���ȥ�ģ����ۺ�ͻ��ķ���ָ��ֽ���ı��档
//�����ֽ�����±����Ϸ���������2 �Σ�ѹ���ۺۺ�չ������ʱ�������ۺۣ�
//���ϵ������������ۺۡ����ۺۺ����ۺۡ�����һ���������N��
//����ֽ�������±����Ϸ���������N�Σ�����ϵ��´�ӡ�����ۺ۵ķ��� 
//���磺N=1ʱ����ӡ�� down N=2ʱ����ӡ�� down down up
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void printProcess(int i, int n, bool down) {
	if (i > n) {
		return;
	}
	printProcess(i + 1, n, true);
	cout << (down ? "down" : "up") << endl;
	printProcess(i + 1, n, false);
}
void printProcess(int n) {
	printProcess(1, n, true);
}
int main() {
	int n = 4;
	printProcess(n);
	return 0;
}