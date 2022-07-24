#include "Header.h"

class Animal
{
public:
	void crying()
	{
		cout << "Å©¤Ñ¾Æ¾Æ¾Æ¤¿¾Æ¾Ó!!" << endl;
	}
};

class Dog : public Animal
{
public:
	void crying()
	{
		cout << "¸Û¸Û!" << endl;
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