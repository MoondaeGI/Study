#include "Header.h"


// goto�� label(���̺�)
/*
	goto�� ���ؼ� label�� �̵��� �� �ְ� ���ִ� �ڵ�
	���к��ϰ� ���� �ڵ尡 ���� �� �ִ� �������� ������
*/
int main()
{
	int number;

PRESS:
	scanf("%d", &number);

	switch (number) {
		case 1:
			goto FIRST;
		case 2:
			goto SECOND;
		default:
			goto LAST;
	}

	//���̺� �����
FIRST: 
	printf("�ȳ��ϼ���!\n");
	goto PRESS;
SECOND:
	printf("�ݰ����ϴ�!\n");
	goto PRESS;
LAST:
	return 0;
}