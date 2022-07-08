#include "Device.h"

void Device::display()
{
	cout << "============================" << endl;
	cout << "이름: " << name << endl;
	cout << "제조사: " << maker << endl;
	cout << "화면 크기: " << wide << "인치" << endl;
	cout << "램(RAM): " << ram << "GB" << endl;
	cout << "운영체제: " << os << endl;
	cout << "등록일" << date.year << "-" << date.month << "-" << date.day << endl;
	cout << "============================" << endl;

}
