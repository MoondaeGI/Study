#include "Header.h"


// �Լ� ������ (Function pointer): �Լ��� ����Ű�� ������ > �Լ��� �ּҰ��� ������ ������ �� �ּҰ��� ���� ȣ��� �����

void test1();
void test2();

int main()
{
	void (*fp)();  // void Ÿ���� �Լ� ������ ����

	fp = test1;  // fp�� test1 �Լ� �ּ� ����
	fp();

	return 0;
}


void test1()
{
	printf("�׽�Ʈ1 ������...");
}

void test2()
{
	printf("�׽�Ʈ2 ������...");
}