#include "Header.h"
#include <math.h>

// math.h를 통해 사용할 수 있는 abs와 동일한 기능을 가지는 myAbs함수


// 함수 오버로딩: 함수 이름은 같으면서 자료형이나 매개변수가 다르게 설계되는 기법
double myAbs(double x) 
{
	if (x < 0)
		return -x;
	return x;
}

int myAbs(int x)
{
	if (x < 0)
		return -x;
	return x;
}


int main()
{
	// 절댓값을 뽑는 함수 abs(double);
	printf("%d\n", myAbs(-1));
	printf("%d\n", myAbs(1));
	return 0;
}