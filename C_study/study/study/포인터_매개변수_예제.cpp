#include "Header.h"

// ������ �Ű������� �̿��ؼ� ���ڸ� ���ڰ����� �־��� ��, �� ���� 2�谡 �Ǵ� �Լ��� �����Ͻÿ�
// �ش� �Լ��� Ÿ���� void

void doubleup(int* number);

int main()
{
	int number;

	printf("���ڸ� �Է��Ͻʽÿ�: ");
	scanf("%d", &number);

	doubleup(&number);
	printf("doubleup: %d", number);

	return 0;
}

void doubleup(int* number)
{
	*number *= 2;
}