#include "Header.h"


// switch: ()�ȿ� ������ �ְ� �� ���� �ش��ϴ� case�� ��� ������ ��ɹ��� ó����
// ���� Ȱ��Ǵ� ���: break

//  switch�� �̿��ؼ� ������ �Է¹��� ��, ������ ���� ����� ������ �Ǵ� ���α׷��� ����
int main()
{
	int score = 0;
	char rank;

	printf("����� ���� ������ �Է��Ͻʽÿ�\n");
	printf("��� ǥ: 90�� �̻�> A, 80�� �̻�> B, 70�� �̻�> C, 60�� �̻�> D, �� ��> F\n");
	printf("�ּ� ������ 0���̸�, �ְ� ������ 100�������Դϴ�.\n");
	printf("����: ");
	scanf("%d", score);

	switch (score / 10) {
		case 9:
			rank = 'A';
			break;
		case 8:
			rank = 'B';
				break;
		case 7:
			rank = 'C';
			break;
		case 6:
			rank = 'D';
			break;
		defult:
			rank = 'F';
	}

	// 0���� �۰ų� 1--���� ū ���� �Է��� ���޵��� �������־��
	printf("����� ������ %d�̸�, ����� %c�Դϴ�.", score, rank);
	return 0;
}