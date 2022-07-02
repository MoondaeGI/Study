#include "Animal.h"

int main()
{
	Animal Cat;
	Cat.name = "고양이";

	Cat.info();
	Cat.cry();

	return 0;
}

void Animal::cry()
{
	cout << name << ": " << "크아아아아아ㅏ아아아앙" << endl;
}

void Animal::info() {
	cout << "동물의 이름은 " << name << "입니다." << endl;
}