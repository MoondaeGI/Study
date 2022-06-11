#include "Header.h"


// 함수 포인터 (Function pointer): 함수를 가리키는 포인터 > 함수도 주소값을 가지고 있으며 그 주소값에 대한 호출로 진행됨

void test1();
void test2();

int main()
{
	void (*fp)();  // void 타입의 함수 포인터 선언

	fp = test1;  // fp에 test1 함수 주소 저장
	fp();

	return 0;
}


void test1()
{
	printf("테스트1 진행중...");
}

void test2()
{
	printf("테스트2 진행중...");
}