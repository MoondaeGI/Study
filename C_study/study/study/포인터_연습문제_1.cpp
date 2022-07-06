#include "Header.h"


void chage(int* ip);

int main()
{
	int i = 1;
	int* ip = &i;

	chage(ip);
	printf("%d", *ip);

	return 0;
}


void chage(int* ip)
{
	int data = 5;
	*ip = data;

	// ip에 *이 없어서 주소로 값이 가지 않고 삭제됨
}