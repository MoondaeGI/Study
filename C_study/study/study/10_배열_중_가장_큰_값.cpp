#include "Header.h"
// 가장 큰 값에 대한 표현하기


int maxArray(int numbers[]);
// 함수 리펙터링 기능
/*
	1. 메인 위에서 함수를 선언만 한다
	2. 메인 아래에서 함수에 대한 구현을 진행

	사용 이유
	1. 메인이 프로그램 코드 상 위에 있게 둠으로서, 코드를 보기 편하게 함
*/

int main()
{
	int numbers[10];
	int start = 1;
	int max_num;

	for (int i = 0; i < 10; i++) {
		numbers[i] = start++;
		printf("%d ", numbers[i]);
	}

	max_num = maxArray(numbers);
	printf("\n%d", max_num);

	return 0;
}

int maxArray(int numbers[])
{
	int max = 0;
	int length = 10;

	for (int i = 0; i < length; i++) {
		if (max < numbers[i])
			max = numbers[i];
	}

	return max;
}