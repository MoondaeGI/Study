#include "Header.h"

// 원하는 연산 기호를 입력해주세요 >> +
// 숫자 2개를 순서대로 입력해 주세요 >> 10 5
// 결과 산출  >> 15  후 반복


int main()
{
	char oper;
	int a, b;
	int result;

	while (1) {  // while의 조건문이 1일 경우, 1은 프로그래밍에서 true를 뜻함 >> 조건식이 항상 true인 경우 (무한 반복)
		printf("원하는 연산 기호를 입력하시오: ");  // 기호에 대한 문제 발생
		scanf("%c", &oper);
		
		printf("숫자 2개를 순서대로 입력하시오: ");
		scanf("%d %d", &a, &b);


		if      (oper == '+') result = a + b;
		else if (oper == '-') result = a - b;
		else if (oper == '*') result = a * b;
		else if (oper == '/') result = a / b;
		else if (oper == '%') result = a % b;
		else {
			printf("연산자가 잘못되었습니다. 다시 입력하십시오\n");
			getchar();
			continue;
		}

		printf("%d %c %d = %d\n", a, oper, b, result);
		getchar();  
		// 문자열이나 문자를 하나 얻어오는 기능 
		// 입력 버퍼라고 하는 임시 저장소에 저장하는 기능
		// 작업을 반복하면서 남는 명령 (주로 enter)가 처리됨
	}

	return 0;
}