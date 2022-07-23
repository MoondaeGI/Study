#pragma once
#include "Header.h"

// 탬플릿: 일반화 프로그래밍 기법의 틀
// 일반화 프로그래밍: 공통된 개념을 찾아 묶어주는 방식의 프로그래밍

// 탬플릿의 주요 기능
/*
	1. 함수 탬플릿: 자료형에 대해 일반화를 작업
	2. 클래스 탬플릿: 클래스 내부의 맴버 변수 타입에 대해 일반화를 작업
*/

/*
탬플릿을 활용하지 못한 함수 사용법
int sum(int a, int b) { return a + b; }
double sum(double a, double b) { return a + b; }
string sum(string a, string b) { return a + b; }
*/

// 탬플릿으로 다형성을 구현한 모습
template <typename T>
T sum(T a, T b) { return a + b; }


int main()
{
	cout << sum(10, 5) << endl;
	cout << sum(10.5, 5.5) << endl;
	cout << sum("10", "5") << endl;

	return 0;
}