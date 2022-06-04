#include "Header.h"


// goto와 label(레이블)
/*
	goto를 통해서 label로 이동할 수 있게 해주는 코드
	무분별하게 사용시 코드가 꼬일 수 있는 문제점이 존재함
*/
int main()
{
	int number;

PRESS:
	scanf("%d", &number);

	switch (number) {
		case 1:
			goto FIRST;
		case 2:
			goto SECOND;
		default:
			goto LAST;
	}

	//레이블 만들기
FIRST: 
	printf("안녕하세요!\n");
	goto PRESS;
SECOND:
	printf("반갑습니다!\n");
	goto PRESS;
LAST:
	return 0;
}