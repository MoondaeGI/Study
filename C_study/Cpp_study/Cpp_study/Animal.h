#pragma once
#include "Header.h"
class Animal
{
public :
	string name;
	void cry();
	void info();
};

// 구조체와 클래스의 차이
/*
	구조체의 경우 안에 만들어진 값을 자유롭게 사용할 수 있음. (public)
	클래스의 경우 따로 설정을 하지 않으면 클래스 내부가 아닌 곳에서는 사용 불가능 (private)

	접근 제어자 public 선언으로 외부에서 사용 할 수 있음
*/

