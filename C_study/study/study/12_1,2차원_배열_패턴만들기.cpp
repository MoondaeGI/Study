#include "Header.h"


// 2���� �迭�� �̿��� ���� �����

int main()
{
	int array[4][4];
	int number = 1;

	for (int i = 0; i < 4; i++) {
		if (i % 2 == 0) {  // ¦����(0, 2��°)���
			for (int j = 0; j < 4; j++) {  // ������ ����
				array[j][i] = number++;
			}
		}
		else {  // Ȧ����(1, 3��°)���,
			for (int j = 3; j >= 0; j--) {  // ������ ����
				array[j][i] = number++;
			}
		}
	}

	// ���� ��������� ���� ���� ���� ����� �䱸�Ǿ ������ ����� ���� �����ؾ� ��
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%02d ", array[i][j]);
		}
		printf("\n");
	}

	return 0;
}