#include "Header.h"


// 2���� �迭: �迭�� ���°� ����, ���� ���·� ǥ��, �Ϲ����� �迭�� 1���� �迭�̶�� �θ�
// �迭�� ��Ұ� �迭�� ����
int main()
{
	/*
		2���� �迭�� ����
		�ڷ��� �迭��[���� ����][���� ����];
	*/
	int array[5] = { 1, 2, 3, 4, 5 };  // �ڷ��� �迭��[�迭�� ����] = {���1, ���2, ...};
	/*
	for (int i = 0; i < 5; i++) {
		printf("array[%d]: %d  ", i, array[i]);
	}
	printf("\n");

	int two_array[2][3];
	int number = 1;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			two_array[i][j] = number++;
			printf("two_array[%d][%d] = %d  ", i, j, two_array[i][j]);
		}
		printf("\n");
	}
	*/

	int array3[3][3];

	int new_number = 1;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 1 || j == 1)
				printf("*");
			else
				printf("%d", new_number);
			new_number++;
		}
		printf("\n");
	}

	return 0;
}