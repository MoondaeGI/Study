#include "Header.h"


// 이중 for문을 사용하는 예제
// for문의 진행 순서를 서술할 수 있는가  >> 일반적인 별찍기는 대중적으로 코드가 다 오픈되어 있음

int main()
{
	// 사각형을 만드는 코드
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			printf("*");
		}
		printf("\n");
	}
	/*
	1. i가 1로 초기화됨
	2. 조건식을 확인 >> 참/거짓을 판별
		2-1. 두번째 for문 실행 >> j가 1로 초기화됨
		2-2. 조건식 확인 >> 참/거짓을 판별
		2-3. printf 실행 >> 별출력
		2-4. j++ 실행으로 j 1 증가
		2-5. j <= 5를 만족할 때까지 반복
		2-6. for문 종료
	3. printf 실행 >> 줄바꿈
	4. i++에 의해 i 1 증가
	5. i <= 5를 만족할 때까지 반복
	6. for문 종료
	*/

	printf("\n");

	// 삼각형 
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	// 피라미드 만들기
	for (int i = 1; i <= 5; i++) {
		for (int j = 5; j >= i; j--) {
			printf(" ");
		}

		for (int k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n");

	for (int i = 1; i <= 10; i++) {
		printf("*");  // 모서리 시작 별 출력
		for (int j = 1; j <= 8; j++) {
			if (i == 1 || i == 10) {  // 사각형의 처음과 끝 부분이라면
				printf("*");  // 별 출력
			}
			else {  // 몸통 부분이라면
				printf(" ");  // 빈 값 출력
			}
		}
		printf("*\n");  // 모서리 끝 별 출력 및 다음 줄로 내려감
	}


	return 0;
}