#include "Header.h"

// 순수 가상 함수
// virtual = 0 의 형태로 이루어진 구현되지 않고 선언만 하는 함수
// 순수 가상함수를 가지고 있다면 추상함수로 구분

// 추상 클래스는 함수의 구현이 안되어 있기 때문에 메인에서 객체의 생성이 불가능함
class A
{
public:
	virtual void Funciton() = 0;
};

class B : public A
{
public:
	virtual void Fuciont()
	{
		cout << 1 << endl;
	}
};

int main()
{

	return 0;
}