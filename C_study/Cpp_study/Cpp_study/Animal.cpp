#include "Animal.h"

int main()
{
	Animal Cat;
	Cat.name = "�����";

	Cat.info();
	Cat.cry();

	return 0;
}

void Animal::cry()
{
	cout << name << ": " << "ũ�ƾƾƾƾƤ��ƾƾƾ�" << endl;
}

void Animal::info() {
	cout << "������ �̸��� " << name << "�Դϴ�." << endl;
}