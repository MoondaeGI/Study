#include "Device.h"


int main()
{
	Device smartPhone;
	cout << "��� �̸�: ";
	cin >> smartPhone.name;
	cout << "������: ";
	cin >> smartPhone.maker;
	cout << "ȭ�� ũ��: ";
	cin >> smartPhone.wide;
	cout << "RAM ũ��: ";
	cin >> smartPhone.ram;
	cout << "�ü��: ";
	cin >> smartPhone.os;
	cout << "��� ����: ";
	cin >> smartPhone.date.year >> smartPhone.date.month >> smartPhone.date.day;

	smartPhone.display();

	return 0;
}