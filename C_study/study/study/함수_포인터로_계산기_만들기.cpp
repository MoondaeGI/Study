#include "Header.h"


// �Լ� �������� ����� Ȱ���ؼ� ���� ���α׷��� �����Ͻÿ�
/*
	1. ��ɿ� ���� ������ �Է¹���
	2. ��ɿ� ���� �Լ��� ������
	3. ����� ���

	�Լ� ���´� ���� int Ÿ������ ����
*/

int add(int a, int b);
int substract(int a, int b);
int multiply(int a, int b);
int division(int a, int b);

int main()
{
	int select;
	int number1, number2;
	int result;

	while (1) {
		printf("���ϴ� ����� �����Ͻʽÿ�\n");
		printf("1: + 2: - 3: * 4: / 5: exit >> ");
		scanf("%d", &select);

		int (*fp)(int a, int b) = NULL;
		switch (select) {
			case 1:
				fp = add;
				break;
			case 2:
				fp = substract;
				break;
			case 3:
				fp = multiply;
				break;
			case 4:
				fp = division;
				break;
			default:
				printf("���α׷��� �����մϴ�.");
				return 0;
		}

		printf("���� ���� 2�� �Է��Ͻʽÿ�: ");
		scanf("%d %d", &number1, &number2);

		result = fp(number1, number2);
		printf("answer: %d\n\n", result);
	}

	return 0;
}


int add(int a, int b) {
	return a + b;
}

int substract(int a, int b) {
	return a - b;
}

int multiply(int a, int b) {
	return a * b;
}

int division(int a, int b) {
	return a / b;
}