#include "Header.h"

// 배열(array)
/*
	같은 타입의 데이터를 묶어서 표현하는 자료구조
	주소값을 활용하는 개념(같은 위치에 정리되도록 끼워맞추는 개념)
*/
int main()
{
	int numbers[5];  // int 타입의 데이터 5개를 넣을 수 있는 배열 선언

	// 배열 안의 값(요소) 초기화
	/*
		index>> 배열에서 값에 대한 위치를 표현하는 정수형 데이터
		인덱스는 0번부터 전체의 길이 -1까지의 범위를 가짐
		인덱스에 대한 음수 번호는 없음
	*/
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	numbers[4] = 5;

	// 배열의 값 출력
	// 배열을 사용할 경우, numbers라는 공통의 이름을 사용하면서 반복문을 통해 전체적인 출력도 가능
	for (int i = 0; i < 5; i++) {
		printf("numbers의 %d번째 값: % d\n", i, numbers[i]);
	}

	// 문자를 배열로 만들 경우
	char name[10];
	const char* name2 = "hello";  // const char*로는 ""저장 가능
	// 문자를 표현하는 ""로는 사용 불가 (name = "hello")
	// 문자열을 지정하는 지정자 s로 name에 대한 입력은 가능, 배열이라 주소값을 이미 사용하기 때문에 &(주소 연산자)를 사용하지 않음
	scanf("%s", name);

	printf("%s\n", name);  // 문자열 출력시 배열 이름만 적으면 전체 출력됨
	printf("%c", name[1]);  // 문자열 중에 문자 하나만 출력시 인덱스를 활용

	name[0] = 'a';  // 문자열 중에서 문자 하나만 초기화하는 것은 가능

	return 0;
}