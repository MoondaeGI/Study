#include "Header.h"

// �ݺ��� while��

/*
	1. �ݺ��� ����ؼ� �����ؾ� �ϴ� ���(���α׷��� ���� ��ü �ݺ� while(1))
	2. Ư�� ���ǵ��� �ݺ��� �����ϴ� ��� (�������� �ݺ� ó�� while(���ǽ�))
	3. �ݺ����� ����� ������� �� ���� ������ ������ �ϵ��� ���� (do ~ while)
*/


int main()
{
	// while(���ǽ�) 
	int number = 1;
	while (number <= 100) {
		if (number % 2 == 0) printf("%d ", number);

		number++;
		// ���� �տ� ++�� �ٴ� ���, ������ ���� �� �ش簪�� 1 ������Ŵ (���� ������)
	}

	int start = 1;
	int end;
	// end�� ����ڰ� ���� �Է��� �����Ѵ�
	printf("\n���ϴ� ������ �Է��Ͻÿ�: ");
	scanf("%d", &end);
	int count = end;

	while (start <= end * end) {
		while (start <= count) {
			printf("%d ", start);
			start++;
		}
		printf("\n");
		count += end;
	}

	while (start <= end * end) {
		printf("%d", start);
		if (start % end) printf("\n");
		start++;
	}

	return 0;
}