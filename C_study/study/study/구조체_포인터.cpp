#include "Header.h"

struct Book{
	const char* name;
	const char* author;
	int price;
};

int main()
{
	struct Book C = { "C��� ���α׷���", "��", 10000 };
	struct Book* ptr;

	ptr = &C;

	printf("C: %s %s %d\n", C.name, C.author, C.price);
	printf("ptr: %s %s %d\n", ptr -> name, ptr -> author, ptr -> price);
	// ����ü�� �����ͷ� �������� ���, .��� ->�� ���� ǥ����

	return 0;
}