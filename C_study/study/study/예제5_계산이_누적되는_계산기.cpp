#include "Header.h"

/*
	����� ������ �� ���� (a, b)
	����� result
	��� ����(����)  1) +  
					2) -
					3) *
					4) /
*/

int main()
{

	int a, b;
	int result = 0;
	int select;
	/*
	while (1) {
		if (result) {
			printf("���� 2���� �Է��Ͻÿ�: ");
			scanf("%d %d", &a, &b);
		}
		else {
			a = result;
			printf("���ڸ� �Է��Ͻÿ�: ");
			scanf("%d", &b);
		}

		printf("1) + \t2) -\t3) *\t4) /\n");
		printf("���ϴ� �����ڸ� �����Ͻÿ�: ");
		scanf("%d", &select);

		if      (select == 1)  result = a + b;
		else if (select == 2)  result = a - b;
		else if (select == 3)  result = a * b;
		else if (select == 4)  result = a / b;
		else {
			printf("�߸��� �Է��Դϴ�. �ٽ� �Է��Ͻʽÿ�.\n");
			continue;
		}

		printf("�ش� ���� %d�Դϴ�.\n", result);
	}
	*/

	printf("%d\n", result);
	printf("ó�� ����� ������ ���� 2���� �Է��Ͻÿ�: ");
	scanf("%d %d", &a, &b);

	// do - while 
	do {  // ���ǽ��� ����� ������� ������ ����Ǵ� ����
		if (result) {
			a = result;
			printf("���ڸ� �Է����ּ���: ");
			scanf("%d", &b);
		}
		printf("1) + \t2) -\t3) *\t4) /\t5) exit\n");
		printf("���ϴ� �����ڸ� �����Ͻÿ�: ");
		scanf("%d", &select);

		if      (select == 1)  result = a + b;
		else if (select == 2)  result = a - b;
		else if (select == 3)  result = a * b;
		else if (select == 4)  result = a / b;
		else if (select == 5) {
			printf("���α׷��� �����մϴ�.\n");
			continue;
		}
		else {
			printf("�߸��� �Է��Դϴ�. �ٽ� �Է��Ͻʽÿ�.\n");
			continue;
		}
		printf("%d\n", result);	
	} while (select != 5);  // ���ǽ��� �Ǵ�
	// �Ϲ����� while�� �ٸ��� �ѹ��� ����ǰ� �� �ڿ� ���ǽ��� ������ ���� ���θ� �Ǵ��ϴ� �ݺ��� do - while
	return 0;
}

// do - while�� �Ϲ������� ���� �������� ������, ���ǰ� ������� �ݵ�� �ѹ��� �����ؾ� �ϴ� �ڵ尡 ������ ��쿡�� ���ȴ�
// �ַ� ���Ǵ� ���: ��ũ��, �׽�Ʈ