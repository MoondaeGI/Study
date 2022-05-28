#include "Header.h"

// 반복문 while문

/*
	1. 반복을 계속해서 진행해야 하는 경우(프로그램에 대한 전체 반복 while(1))
	2. 특정 조건동안 반복을 진행하는 경우 (제한적인 반복 처리 while(조건식))
	3. 반복문의 결과와 상관없이 한 번은 무조건 진행을 하도록 설계 (do ~ while)
*/


int main()
{
	// while(조건식) 
	int number = 1;
	while (number <= 100) {
		if (number % 2 == 0) printf("%d ", number);

		number++;
		// 변수 앞에 ++가 붙는 경우, 연산이 끝난 뒤 해당값을 1 증가시킴 (증감 연산자)
	}

	int start = 1;
	int end;
	// end는 사용자가 직접 입력을 진행한다
	printf("\n원하는 끝값을 입력하시오: ");
	scanf("%d", &end);
	int count = end;

	while (start <= end * end) {
		while (start <= count) {
			printf("%d ", start);
			start++;
		}
		printf("\n");
		count += end;
	}

	while (start <= end * end) {
		printf("%d", start);
		if (start % end) printf("\n");
		start++;
	}

	return 0;
}