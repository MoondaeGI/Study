#include "Device.h"


int main()
{
	Device smartPhone;
	cout << "기기 이름: ";
	cin >> smartPhone.name;
	cout << "제조사: ";
	cin >> smartPhone.maker;
	cout << "화면 크기: ";
	cin >> smartPhone.wide;
	cout << "RAM 크기: ";
	cin >> smartPhone.ram;
	cout << "운영체제: ";
	cin >> smartPhone.os;
	cout << "등록 일자: ";
	cin >> smartPhone.date.year >> smartPhone.date.month >> smartPhone.date.day;

	smartPhone.display();

	return 0;
}