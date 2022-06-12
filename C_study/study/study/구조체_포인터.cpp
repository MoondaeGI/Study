#include "Header.h"

struct Book{
	const char* name;
	const char* author;
	int price;
};

int main()
{
	struct Book C = { "C언어 프로그래밍", "나", 10000 };
	struct Book* ptr;

	ptr = &C;

	printf("C: %s %s %d\n", C.name, C.author, C.price);
	printf("ptr: %s %s %d\n", ptr -> name, ptr -> author, ptr -> price);
	// 구조체는 포인터로 가리켰을 경우, .대신 ->로 값을 표현함

	return 0;
}