#include "Header.h"

// 포인터 매개변수를 이용해서 숫자를 인자값으로 넣었을 때, 그 값의 2배가 되는 함수를 구현하시오
// 해당 함수의 타입은 void

void doubleup(int* number);

int main()
{
	int number;

	printf("숫자를 입력하십시오: ");
	scanf("%d", &number);

	doubleup(&number);
	printf("doubleup: %d", number);

	return 0;
}

void doubleup(int* number)
{
	*number *= 2;
}