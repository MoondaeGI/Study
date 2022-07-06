#include "Header.h"
#include <string.h>  // ���ڿ��� ���� �۾��� ������ �� �ִ� ��� ����
// ����ü(struct)
// �ڷ������� ��� �ϳ��� �ڷ���ó�� ����� �� �ִ� c���� ���� ���� Ȱ��Ǵ� ��� �� �ϳ�

struct Person {  // ����ü �ȿ��� ������� ������ member variable(�ɹ� ����)��� �θ�
	char name[10];  // ���� �ִ� ����: ������> �ۼ��� ���� -1���� �ۼ� ����, �ѱ�> �ۼ� ���� -1 �� /2���� ����
	int age;
	char address[100];
};

void Show(struct Person p);

int main()
{
	// ����ü�� main���� ���
	struct Person p1;

	// struct_name.member_variable = value
	strcpy(p1.name, "�̹���");  
	// strcpy: �ش� ���ڿ� ������ ���� �־��� �� �ִ� �Լ�(string.h�� ����)
	// �迭�� ���, �ѹ� ��������� ���¸� �ٲ� �� ���� ������ ������� ���
	p1.age = 26;
	strcpy(p1.address, "��⵵ ��õ�� �帻��71, 1503�� 501ȣ");

	struct Person p2 = {"��ä��", 25, "��⵵ ��õ�� ��¼��"};

	Show(p1);
	Show(p2);

	return 0;
}


void Show(struct Person p)
{
	printf("�̸�: %s\n����: %d\n�ּ�: %s\n\n", p.name, p.age, p.address);
}