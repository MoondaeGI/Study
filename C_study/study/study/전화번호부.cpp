#include "Header.h"
#include <string.h>

struct Phonebook 
{
	char name[20];
	char phone_number[50];
};


// 5���� ��ȭ��ȣ�� ����� ����� �̸��� �˻��ϸ� �ش� �̸��� �´� ��ȭ��ȣ�� ����ϴ� ���α׷�
int main()
{
	Phonebook book[5];  // 5���� �̸��� ��ȭ��ȣ�� ���� �迭 ����

	for (int i = 0; i < 5; i++) {  // �迭�� �̸�, ��ȭ��ȣ�� �޴� ����
		printf("�̸� ��ȭ��ȣ�� �Է��Ͻʽÿ�: ");
		scanf("%s %s", book[i].name, book[i].phone_number);
		printf("\n");
	}

	char match[20];  // ���ϴ� ����� ���� ���ڿ� ����
	printf("��ȭ��ȣ�� ���ϴ� ����� �̸��� �Է��Ͻʽÿ�: ");
	scanf("%s", match);
	printf("\n");

	for (int i = 0; i < 5; i++) {  // ������ �´� �̸��� �ִ��� Ȯ��
		if (strcmp(book[i].name, match) == 0) {  // ������ �´� ����� �ִٸ�,
			printf("��ȭ��ȣ: %s\n", book[i].phone_number);  // �� ����� ��ȭ��ȣ ���
			return 0;  // ���α׷� ����
		}
	}
	// ������ �´� �̸��� ���ٸ� ���� ���
	printf("�������� �ʴ� �ι��� ��ȭ��ȣ�Դϴ�.");
	return 0;
}