#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int get_middle_number(int array[]);


int main()
{
	int compare_array[3];  // �迭 ����


	printf("���ϴ� �迭�� �Է��Ͻʽÿ�\n");
	for (int i = 0; i < 3; i++)  // �迭 �Է�
		scanf("%d", &compare_array[i]);

	printf("compare_array: ");

	for (int i = 0; i < 3; i++)  // ���� �迭 ���
		printf("%d ", compare_array[i]);

	printf("\nanswer: %d", get_middle_number(compare_array));  // �߰��� ���


	return 0;
}


int get_middle_number(int array[])  // �߰� ���� ���� �� �ִ� �Լ�
/*
	�迭�� ũ�� ������ 1, 2, 3 ���� ���Ѵٸ�, �迭�� �� 6���� �������� �����ϴ�.
	1 2 3, 1 3 2 / 2 1 3, 2 3 1 / 3 1 2, 3 2 1

	������ ��Ȳ�� �´� if���� ����� ���������� �߰����� ã�Ƴ��ϴ�.
	1) ù ��° ���� �� ��° ���� ��
	2) �� ��° ���� �� ��° ���� ��
	3) �� ��° ���� ù ��° ���� ��
*/
{
	int first = array[0];
	int second = array[1];
	int third = array[2];

	if (first > second) {  // 2 1 3 or 3 1 2 or 3 2 1
		if (second > third) {  // 3 2 1
			return second;  // 2 -> second
		}
		else  // 2 1 3 or 3 1 2
			if (first > third)  // 3 1 2
				return third;  // 2 -> third
			else  // 2 1 3
				return first;  // 2 -> first
	}

	else {  // 1 2 3 or 1 3 2 or 2 3 1
		if (second > third) { // 1 3 2 or 2 3 1
			if (first > third)  // 2 3 1
				return first;  // 2 -> first
			else  // 1 3 2
				return third;  // 2 -> third
		}
		else  // 1 2 3
			return second;  // 2 -> second
	}
}
