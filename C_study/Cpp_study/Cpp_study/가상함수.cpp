#include "Header.h"

class Animal
{
public:
	void crying()
	{
		cout << "ũ�ѾƾƾƤ��ƾ�!!" << endl;
	}
};

class Dog : public Animal
{
public:
	void crying()
	{
		cout << "�۸�!" << endl;
	}
};

int main()
{
	Animal* animal = new Animal();
	Dog* dog = new Dog();

	animal->crying();
	dog->crying();

	animal = dog;
	animal->crying();

	delete animal, dog;

	return 0;
}