#include "Header.h"

// 함수(function): 특정 하나의 명령을 수행하기 위해서 명령문들을 놓아놓은 집합체

/*
	일반적인 함수의 종류
	1. printf()처럼 프로그램에서 미리 만들어진 함수: 내장 함수
	2. 사용자가 직접 정의해서 만드는 사용자 정의 함수
	
	만들어진 함수는 main 등에서 호출해서 사용한다
	호출 순서에 따른 프로그램의 진행 순서를 파악하는 것이 중요함
*/

int add(int a, int b)  // 함수 ()안에 들어있는 변수: 매개변수(parameter), 호출할 때 넣어주는 값(argument)의 형태를 표현하는 기능
{
	return a + b;
}

int main() 
{
	int a = 1;
	int b = 2;
	float sum = add(a, b);
	// add(a, b)에 의해 a와 b값을 함수 add에 전달 >> parameter a, b에 값이 복사됨
	// add 함수에 작성한 return 문에 의해 sum에 값이 전달됨 >> 함수 호출

	printf("%d + %d = %f", a, b, sum);
	return 0;
}