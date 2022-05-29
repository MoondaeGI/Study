#include "Header.h"


// 반복문 for
/*
	for(초기식; 조건식; 증감식) {
		반복 내용
	}

	while과 for의 차이
		for는 제한적인 특정 횟수만큼 반복을 진행할 때 주로 사용
		while은 조건에 만족할 때까지 반복을 진행하게 하며, 특수한 경우에 사용

	일반적으로는 특정 횟수만큼 반복하는 경우가 많아서 for문을 더 주력으로 사용됨
*/

int main()
{
	printf("for문 실행\n\n");

	for (int i = 1; i <= 10; i++) {
		printf("반복문이 %d번 실행 중입니다.\n", i);
	}
	// for문의 특징 1: 초기식을 for문 안에서만 생성하기 때문에 for가 종료되면 초기식이 사라짐

	printf("\nwhile문 실행\n\n");

	int a = 1;
	while (a < 10) {
		printf("반복문이 %d번 실행 중입니다.\n", a++);
	}

	printf("\n");
	// for문의 초기식을 생략하는 경우
	int c = 1;
	for (; c <= 10; c++) {  
		printf("반복문이 %d번 실행 중입니다.\n", c);
	}

	printf("\n");
	// for문으로 세우는 무한 루프(조건식or 증감식을 생략)
	for (int i =0;; i++) {
		printf("반복문이 %d번 실행 중입니다.\n", i);
		if (i > 100) 
			break;
	}


	return 0;
}