#include "Header.h"
// �����Ϳ� �迭
// ������: �ּҰ��� ����Ŵ, �迭: ���� Ÿ���� �����͸� ��� ǥ���� > �ּҰ��� ����ϴ� ����


int main()
{
	int array[5] = {1, 2, 3, 4, 5};
	
	// ������ �����
	// �迭�� ����ų ��� &�� ������ �ʾƵ� ��
	int* ptr_array = array;

	printf("%d\n", *ptr_array);  // *ptr_array = array[0]

	// �����ͷ� �迭�� ��� ���
	for (int i = 0; i < 5; i++) {
		printf("%d ", ptr_array[i]);
	}
	printf("\n");
	// �迭�� �������� ���·� ��� ���
	for (int i = 0; i < 5; i++) {
		printf("%d ", *(array + i));
	}

	return 0;
}