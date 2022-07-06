#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int get_middle_number(int array[]);


int main()
{
	int compare_array[3];  // 배열 선언


	printf("원하는 배열을 입력하십시오\n");
	for (int i = 0; i < 3; i++)  // 배열 입력
		scanf("%d", &compare_array[i]);

	printf("compare_array: ");

	for (int i = 0; i < 3; i++)  // 현재 배열 출력
		printf("%d ", compare_array[i]);

	printf("\nanswer: %d", get_middle_number(compare_array));  // 중간값 출력


	return 0;
}


int get_middle_number(int array[])  // 중간 값을 얻을 수 있는 함수
/*
	배열의 크기 순서로 1, 2, 3 으로 정한다면, 배열은 총 6개의 가짓수를 가집니다.
	1 2 3, 1 3 2 / 2 1 3, 2 3 1 / 3 1 2, 3 2 1

	각각의 상황에 맞는 if문을 사용해 최종적으로 중간값을 찾아냅니다.
	1) 첫 번째 값과 두 번째 값을 비교
	2) 두 번째 값과 세 번째 값을 비교
	3) 세 번째 값과 첫 번째 값을 비교
*/
{
	int first = array[0];
	int second = array[1];
	int third = array[2];

	if (first > second) {  // 2 1 3 or 3 1 2 or 3 2 1
		if (second > third) {  // 3 2 1
			return second;  // 2 -> second
		}
		else  // 2 1 3 or 3 1 2
			if (first > third)  // 3 1 2
				return third;  // 2 -> third
			else  // 2 1 3
				return first;  // 2 -> first
	}

	else {  // 1 2 3 or 1 3 2 or 2 3 1
		if (second > third) { // 1 3 2 or 2 3 1
			if (first > third)  // 2 3 1
				return first;  // 2 -> first
			else  // 1 3 2
				return third;  // 2 -> third
		}
		else  // 1 2 3
			return second;  // 2 -> second
	}
}
