#include "Area.h"


int main()
{
	Area circle;

	while (true) {
		cout << "���Ͻô� ���� ������ ���̸� �Է��Ͻʽÿ�: ";
		cin >> circle.radius;

		cout << circle.radius << "�� �������� ���� ���� ���̴� " << circle.getArea() << "�Դϴ�." << endl;
		cout << endl;
	}

	return 0;
}