#include "Header.h"

/*
	계산을 진행할 두 숫자 (a, b)
	결과값 result
	기능 선택(숫자)  1) +  
					2) -
					3) *
					4) /
*/

int main()
{

	int a, b;
	int result = 0;
	int select;
	/*
	while (1) {
		if (result) {
			printf("숫자 2개를 입력하시오: ");
			scanf("%d %d", &a, &b);
		}
		else {
			a = result;
			printf("숫자를 입력하시오: ");
			scanf("%d", &b);
		}

		printf("1) + \t2) -\t3) *\t4) /\n");
		printf("원하는 연산자를 선택하시오: ");
		scanf("%d", &select);

		if      (select == 1)  result = a + b;
		else if (select == 2)  result = a - b;
		else if (select == 3)  result = a * b;
		else if (select == 4)  result = a / b;
		else {
			printf("잘못된 입력입니다. 다시 입력하십시오.\n");
			continue;
		}

		printf("해당 값은 %d입니다.\n", result);
	}
	*/

	printf("%d\n", result);
	printf("처음 계산을 진행할 숫자 2개를 입력하시오: ");
	scanf("%d %d", &a, &b);

	// do - while 
	do {  // 조건식의 결과와 상관없이 무조건 실행되는 영역
		if (result) {
			a = result;
			printf("숫자를 입력해주세요: ");
			scanf("%d", &b);
		}
		printf("1) + \t2) -\t3) *\t4) /\t5) exit\n");
		printf("원하는 연산자를 선택하시오: ");
		scanf("%d", &select);

		if      (select == 1)  result = a + b;
		else if (select == 2)  result = a - b;
		else if (select == 3)  result = a * b;
		else if (select == 4)  result = a / b;
		else if (select == 5) {
			printf("프로그램을 종료합니다.\n");
			continue;
		}
		else {
			printf("잘못된 입력입니다. 다시 입력하십시오.\n");
			continue;
		}
		printf("%d\n", result);	
	} while (select != 5);  // 조건식을 판단
	// 일반적인 while과 다르게 한번은 실행되고 그 뒤에 조건식을 가지고 실행 여부를 판단하는 반복문 do - while
	return 0;
}

// do - while은 일반적으로 많이 사용되지는 않지만, 조건과 상관없이 반드시 한번은 진행해야 하는 코드가 존재할 경우에는 사용된다
// 주로 사용되는 경우: 메크로, 테스트