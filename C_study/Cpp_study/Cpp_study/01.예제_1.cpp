#include "Header.h"
#include <iomanip>  // input/out Mnipulator: ��/��°��� ������ ���
/*
	setw(): �ش� ĭ��ŭ ����
	setfill(): ������ ä��� ����
	setbase(): ������ ���� ǥ��
	setprecision(): �Ҽ��� �ڸ��� ǥ��
*/

string name;
int level;
int atk;

int main()
{
	int select;

	while (true) {

		cin >> select;
		switch (select) {
			case 1:
				cout << "1. ����" << endl;
				cin >> name;
				cin >> level;
				cin >> atk;
				cout << "�ɷ�ġ�� �����Ǿ����ϴ�." << endl;
				cout << "=============================" << endl;
				cout << "�̸�: " << setw(4) << name << endl;
				cout << "����: " << setw(4) << level << endl;
				cout << "atk: " << setw(4) << atk << endl;
				cout << "=============================" << endl;
				break;
			case 2:
				cout << "2. ����" << endl;
				exit(0);
			default:
				cout << "���Է�" << endl;
		}
	}

	return 0;
}