#include "Header.h"
#include <string.h>

//���ڿ� >  ������ ������ char�� �迭 ���·� �ۼ��� ��, ""�������� ǥ���� �� �ְ� ����ó�� ����� �� ����(string.h ���)

void change(char data[]);

int main()
{
	char data[30] = "MoondaeGI";  // ���ڿ��� ���� �� �ʱ�ȭ �ϴ� ���� ����
	// ����� �� �������� �ʱ�ȭ �Ұ���

	// ���ڿ� ���� strlen()
	printf("���� %s�� ���̴� %d�̴�.\n", data, strlen(data));  // ���� 9
	printf("���� \"\"�� ���̴� %d�̴�.\n", strlen(""));  // ���� 0

	char data2[10] = "";
	if (strlen(data2) == 0)
		printf("���� �ۼ��� ������ �����ϴ�.\n");

	// ���ڿ� ���� strcpy() >  ���ڿ� ���� �ڵ� �󿡼� �������ֱ� ���� ����
	change(data2);  // ���ڿ� ����
	printf("���� %s�� ���̴� %d�̴�.\n", data2, strlen(data2));  // ���� 9

	// ���ڿ� ���� strcat()
	char data3[30] = "Daddy";
	char data4[30] = "Mommy";

	printf("%s + %s = %s\n", data3, data4, strcat(data3, data4));

	// ���ڿ� �� strcmp() >  �� ���ڸ� ���ؼ� ���� ������� �� ���̸�ŭ�� ǥ�����ִ� ���
	char data5[30] = "Compare";
	char data6[30] = "compare";
	char data7[30] = "Compare";

	// ���ڿ��� ���� ������ �ٸ����� �Ǵ��ϴµ� ����
	printf("strcmp(data5, data6): %d ", strcmp(data5, data6));  // -1 (�� �տ� ����)
	printf("strcmp(data6, data5): %d ", strcmp(data6, data5));  // 1 (�� �ڿ� ����)
	printf("strcmp(data5, data7): %d ", strcmp(data5, data7));  // 0 (���� ���� ����)


	return 0;
}


void change(char data[])
{
	char change_data[30];
	printf("������ ������ �Է��Ͻʽÿ�: ");
	scanf("%s", change_data);
	strcpy(data, change_data);
	printf("������ �Ϸ�Ǿ����ϴ�.\n");
}