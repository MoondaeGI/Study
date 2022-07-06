#include "Header.h"


// 2차원 배열을 이용한 패턴 만들기

int main()
{
	int array[4][4];
	int number = 1;

	for (int i = 0; i < 4; i++) {
		if (i % 2 == 0) {  // 짝수행(0, 2번째)라면
			for (int j = 0; j < 4; j++) {  // 정방향 루프
				array[j][i] = number++;
			}
		}
		else {  // 홀수행(1, 3번째)라면,
			for (int j = 3; j >= 0; j--) {  // 역방향 루프
				array[j][i] = number++;
			}
		}
	}

	// 아직 만들어지지 않은 값에 대한 출력이 요구되어서 설정과 출력을 따로 진행해야 함
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%02d ", array[i][j]);
		}
		printf("\n");
	}

	return 0;
}