#include "Header.h"

// ���ϴ� ���� ��ȣ�� �Է����ּ��� >> +
// ���� 2���� ������� �Է��� �ּ��� >> 10 5
// ��� ����  >> 15  �� �ݺ�


int main()
{
	char oper;
	int a, b;
	int result;

	while (1) {  // while�� ���ǹ��� 1�� ���, 1�� ���α׷��ֿ��� true�� ���� >> ���ǽ��� �׻� true�� ��� (���� �ݺ�)
		printf("���ϴ� ���� ��ȣ�� �Է��Ͻÿ�: ");  // ��ȣ�� ���� ���� �߻�
		scanf("%c", &oper);
		
		printf("���� 2���� ������� �Է��Ͻÿ�: ");
		scanf("%d %d", &a, &b);


		if      (oper == '+') result = a + b;
		else if (oper == '-') result = a - b;
		else if (oper == '*') result = a * b;
		else if (oper == '/') result = a / b;
		else if (oper == '%') result = a % b;
		else {
			printf("�����ڰ� �߸��Ǿ����ϴ�. �ٽ� �Է��Ͻʽÿ�\n");
			getchar();
			continue;
		}

		printf("%d %c %d = %d\n", a, oper, b, result);
		getchar();  
		// ���ڿ��̳� ���ڸ� �ϳ� ������ ��� 
		// �Է� ���۶�� �ϴ� �ӽ� ����ҿ� �����ϴ� ���
		// �۾��� �ݺ��ϸ鼭 ���� ��� (�ַ� enter)�� ó����
	}

	return 0;
}