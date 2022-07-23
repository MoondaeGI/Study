#include "Header.h"

template <typename T>
class Person {
private:
	string name;
	T height;
	T weight;

public:
	Person(string name, T height, T weight) : name(name), height(height), weight(weight) {}
	void info() 
	{
		cout << "================================================" << endl;
		cout << "�̸�: " << name << endl;
		cout << "Ű: " << height << "cm\t" << "������: " << weight << "kg" << endl;
		cout << "================================================" << endl;
	}
};

int main()
{
	// Ŭ���� ���ø����� ����� Ŭ���� ������, Ŭ������<T> ���������� ���� ȣ���ؾ� ��
	// Ŭ���� ���ø��� .h�� .cpp�� ������ �ش� �и��� ������ ���� >> .h�� ��� �Լ��� ������

	Person<int> int_person("IntPerson", 171.4, 81);
	int_person.info();

	cout << endl;

	Person<double> double_person("DoublePerson", 190.4, 101);
	double_person.info();

	return 0;
}