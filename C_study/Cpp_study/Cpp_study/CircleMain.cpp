#include "Area.h"


int main()
{
	Area circle;

	while (true) {
		cout << "원하시는 원의 반지름 길이를 입력하십시오: ";
		cin >> circle.radius;

		cout << circle.radius << "의 반지름을 가진 원의 넓이는 " << circle.getArea() << "입니다." << endl;
		cout << endl;
	}

	return 0;
}