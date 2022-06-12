#include "Header.h"
// 길이가 5인 int형 배열 nArray를 선언하고, 배열 안에 1부터 순서대로 값을 초기화
// 그 후, nArray의 첫 번째 요소를 가리키는 포인터 변수 ptr을 선언
// ptr에 저장된 값을 2씩 증가시키는 프로그램 코드를 작성

int main()
{
	int nArray[5] = { 1, 2, 3, 4, 5 };
	int* ptr = nArray;
	for (int i = 0; i < 5; i++) {
		printf("%d ", *(ptr + i));
	}

	printf("\n");
	for (int i = 0; i < 5; i++) {
		// 포인터 배열의 값을 가리키고 있는 경우, 포인터 연산을 통해 나머지 부분에 접근 가능
		*(ptr + i) += 2;
		printf("%d ", *(ptr + i));
	}


	return 0;
}