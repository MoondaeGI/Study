#include "Header.h"


void swap(int a, int b);
void ref_swap(int& a, int& b);
void ptr_swap(int* a, int* b);

int main()
{
	int number = 10;

	// C��� ������ ����
	int* ptr_number = &number;

	cout << ptr_number << endl;
	cout << *ptr_number << endl;

	// �迭�� ���� �����Ͷ� ������ ������ ���� �״�� ������ �� �� ����
	char name[10] = "strings";
	char* ptr_name = name;
	cout << ptr_name << endl;

	// ���¿� �°� ���� ������
	int& ref_number = number;
	cout << ref_number << endl;

	int a = 1;
	int b = 2;

	// ptr, ref swap ��
	swap(a, b);
	printf("swap: %d %d\n", a, b);

	ref_swap(a, b);
	printf("ref_swap: %d %d\n", a, b);
	
	ptr_swap(&a, &b);
	printf("ptr_swap: %d %d\n", a, b);

	return 0;
}

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void ref_swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void ptr_swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}