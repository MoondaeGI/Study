#include "Header.h"


void chage(int* ip);

int main()
{
	int i = 1;
	int* ip = &i;

	chage(ip);
	printf("%d", *ip);

	return 0;
}


void chage(int* ip)
{
	int data = 5;
	*ip = data;

	// ip�� *�� ��� �ּҷ� ���� ���� �ʰ� ������
}