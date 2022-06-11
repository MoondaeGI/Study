#include "Header.h"


// 함수 포인터의 기능을 활용해서 계산기 프로그램을 설계하시오
/*
	1. 기능에 대한 선택을 입력받음
	2. 기능에 따라 함수가 결정됨
	3. 결과를 출력

	함수 형태는 전부 int 타입으로 통일
*/

int add(int a, int b);
int substract(int a, int b);
int multiply(int a, int b);
int division(int a, int b);

int main()
{
	int select;
	int number1, number2;
	int result;

	while (1) {
		printf("원하는 계산을 선택하십시오\n");
		printf("1: + 2: - 3: * 4: / 5: exit >> ");
		scanf("%d", &select);

		int (*fp)(int a, int b) = NULL;
		switch (select) {
			case 1:
				fp = add;
				break;
			case 2:
				fp = substract;
				break;
			case 3:
				fp = multiply;
				break;
			case 4:
				fp = division;
				break;
			default:
				printf("프로그램을 종료합니다.");
				return 0;
		}

		printf("계산될 수를 2개 입력하십시오: ");
		scanf("%d %d", &number1, &number2);

		result = fp(number1, number2);
		printf("answer: %d\n\n", result);
	}

	return 0;
}


int add(int a, int b) {
	return a + b;
}

int substract(int a, int b) {
	return a - b;
}

int multiply(int a, int b) {
	return a * b;
}

int division(int a, int b) {
	return a / b;
}