#include "Device.h"

void Device::display()
{
	cout << "============================" << endl;
	cout << "�̸�: " << name << endl;
	cout << "������: " << maker << endl;
	cout << "ȭ�� ũ��: " << wide << "��ġ" << endl;
	cout << "��(RAM): " << ram << "GB" << endl;
	cout << "�ü��: " << os << endl;
	cout << "�����" << date.year << "-" << date.month << "-" << date.day << endl;
	cout << "============================" << endl;

}
