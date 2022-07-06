#include "Header.h"


// 2차원 배열: 배열의 형태가 가로, 세로 형태로 표현, 일반적인 배열은 1차원 배열이라고 부름
// 배열의 요소가 배열인 형태
int main()
{
	/*
		2차원 배열의 형태
		자료형 배열명[열의 길이][행의 길이];
	*/
	int array[5] = { 1, 2, 3, 4, 5 };  // 자료형 배열명[배열의 길이] = {요소1, 요소2, ...};
	/*
	for (int i = 0; i < 5; i++) {
		printf("array[%d]: %d  ", i, array[i]);
	}
	printf("\n");

	int two_array[2][3];
	int number = 1;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			two_array[i][j] = number++;
			printf("two_array[%d][%d] = %d  ", i, j, two_array[i][j]);
		}
		printf("\n");
	}
	*/

	int array3[3][3];

	int new_number = 1;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 1 || j == 1)
				printf("*");
			else
				printf("%d", new_number);
			new_number++;
		}
		printf("\n");
	}

	return 0;
}