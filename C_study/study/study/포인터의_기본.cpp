#include "Header.h"

// 포인터: 주소값을 가리키는 하나의 변수
// 자료형* 포인터 변수명 = &변수명

// 포인터에서 알아둬야 할 것
/*
	1. *(에스터리스크): 자료형 뒤 / 변수 앞에 붙어서 주소값을 받아 해당 주소의 값을 반환하는 역할

	2. &(앰퍼샌드): 변수 앞에 붙어서 주소값을 반환해주는 주소 연산자
*/

int main()
{
	int number = 1;
	printf("number의 주소값: %p\n", &number);  // 해당 값은 주소값 출력
	printf("number의 주소값: %x\n", number);  // 16진수 주소값 출력

	int* ptr_number = &number;  // 포인터 변수 선언
	printf("포인터 ptr_number의 주소값: %p\n", ptr_number);
	printf("포인터 ptr_number가 가리키는 값: %d\n", *ptr_number);

	return 0;
}