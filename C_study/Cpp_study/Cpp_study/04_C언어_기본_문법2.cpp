#include "Header.h"

struct Car {
	string name;
	double price;
	int year;
	int month;
};


int main()
{
	// ����ü ���� (C����) >> struct ��� �ʿ�
	struct Car CoronaMP = { "Corona Morder Plus", 4.1, 2021, 10 };
	// ����ü ���� (C++����) >> struct ��� �ʿ� ���� 
	Car G250dx = { "Cort G250dx", 2.8, 2011, 2 };

	Car CarGroup[2] = { CoronaMP, G250dx };
	//�ݺ��� for
	for (int i = 0; i < 2; i++) {
		cout << "��ǰ �̸�: " << CarGroup[i].name << endl; 
		cout << "����: " << int(CarGroup[i].price * 10000) << "��" << endl;
		cout << endl;
	}

	// C++������ printf
	// string ����� c_str()�� ���
	for (int i = 0; i < 2; i++) {
		printf("�̸�: %20s \t����: %10d\n", CarGroup[i].name.c_str(), int(CarGroup[i].price * 10000));
	}

	int question = 10 > 7;  // true�� ��� 1, false�� ��� 0 ��ȯ
	cout << question << endl;
	cout << boolalpha << bool(question) << endl;  // boolalpha: 1, 0 ���� ���� true, false�� ��ȯ����

	return 0;
}