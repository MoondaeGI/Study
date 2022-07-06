#include "Header.h"


// �����Ϳ� �Լ�
// �����ʹ� �ּ� �� ��ü�� ����Ű�� ������, �̸� �Ű������μ� Ȱ���ϸ� ���� �Ѱ��ֱ� ���ϴ�

void swap1(int a, int b);
void swap2(int* a, int* b);
void show(int number1, int number2);

int main()
{
	int number1 = 10;
	int number2 = 30;
	show(number1, number2);

	// �Լ��� ȣ���� ������ �����͸� �����ϴ� �޸� �������� ������. return�� ��� ���� �־����� ���ϰ� ������
	swap1(number1, number2);
	show(number1, number2);
	// �����͸� ����Ѵٸ� ������ �ּҰ��� ���������� ���� �־��ֱ� ������ ���� ��ȭ�� �����
	swap2(&number1, &number2);
	show(number1, number2);


	return 0;
}


void swap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap2(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void show(int number1, int number2)
{
	printf("number1 = %d number2 = %d\n", number1, number2);
}