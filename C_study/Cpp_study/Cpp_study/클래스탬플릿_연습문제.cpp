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
		cout << "이름: " << name << endl;
		cout << "키: " << height << "cm\t" << "몸무게: " << weight << "kg" << endl;
		cout << "================================================" << endl;
	}
};

int main()
{
	// 클래스 탬플릿으로 설계된 클래스 생성시, 클래스명<T> 참조변수명 으로 호출해야 함
	// 클래스 탬플릿은 .h와 .cpp로 나뉘는 해더 분리로 만들지 않음 >> .h에 모든 함수를 구현함

	Person<int> int_person("IntPerson", 171.4, 81);
	int_person.info();

	cout << endl;

	Person<double> double_person("DoublePerson", 190.4, 101);
	double_person.info();

	return 0;
}