#include "Header.h"


// 포인터와 함수
// 포인터는 주소 그 자체를 가리키기 때문에, 이를 매개변수로서 활용하면 값을 넘겨주기 편하다

void swap1(int a, int b);
void swap2(int* a, int* b);
void show(int number1, int number2);

int main()
{
	int number1 = 10;
	int number2 = 30;
	show(number1, number2);

	// 함수는 호출이 끝나면 데이터를 저장하는 메모리 영역에서 삭제됨. return이 없어서 직접 넣어지지 못하고 삭제됨
	swap1(number1, number2);
	show(number1, number2);
	// 포인터를 사용한다면 변수의 주소값에 직접적으로 값을 넣어주기 때문에 값의 변화가 진행됨
	swap2(&number1, &number2);
	show(number1, number2);


	return 0;
}


void swap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap2(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void show(int number1, int number2)
{
	printf("number1 = %d number2 = %d\n", number1, number2);
}