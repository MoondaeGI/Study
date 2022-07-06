#include "Header.h"
// 포인터와 배열
// 포인터: 주소값을 가리킴, 배열: 같은 타입의 데이터를 묶어서 표현함 > 주소값을 사용하는 개념


int main()
{
	int array[5] = {1, 2, 3, 4, 5};
	
	// 포인터 만들기
	// 배열을 가리킬 경우 &를 붙이지 않아도 됨
	int* ptr_array = array;

	printf("%d\n", *ptr_array);  // *ptr_array = array[0]

	// 포인터로 배열의 요소 출력
	for (int i = 0; i < 5; i++) {
		printf("%d ", ptr_array[i]);
	}
	printf("\n");
	// 배열을 포인터의 형태로 요소 출력
	for (int i = 0; i < 5; i++) {
		printf("%d ", *(array + i));
	}

	return 0;
}