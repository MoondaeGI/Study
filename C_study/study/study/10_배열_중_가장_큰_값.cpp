#include "Header.h"
// ���� ū ���� ���� ǥ���ϱ�


int maxArray(int numbers[]);
// �Լ� �����͸� ���
/*
	1. ���� ������ �Լ��� ���� �Ѵ�
	2. ���� �Ʒ����� �Լ��� ���� ������ ����

	��� ����
	1. ������ ���α׷� �ڵ� �� ���� �ְ� �����μ�, �ڵ带 ���� ���ϰ� ��
*/

int main()
{
	int numbers[10];
	int start = 1;
	int max_num;

	for (int i = 0; i < 10; i++) {
		numbers[i] = start++;
		printf("%d ", numbers[i]);
	}

	max_num = maxArray(numbers);
	printf("\n%d", max_num);

	return 0;
}

int maxArray(int numbers[])
{
	int max = 0;
	int length = 10;

	for (int i = 0; i < length; i++) {
		if (max < numbers[i])
			max = numbers[i];
	}

	return max;
}