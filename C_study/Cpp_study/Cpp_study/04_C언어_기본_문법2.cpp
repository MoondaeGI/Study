#include "Header.h"

struct Car {
	string name;
	double price;
	int year;
	int month;
};


int main()
{
	// 구조체 선언 (C버전) >> struct 명시 필요
	struct Car CoronaMP = { "Corona Morder Plus", 4.1, 2021, 10 };
	// 구조체 선언 (C++버전) >> struct 명시 필요 없음 
	Car G250dx = { "Cort G250dx", 2.8, 2011, 2 };

	Car CarGroup[2] = { CoronaMP, G250dx };
	//반복문 for
	for (int i = 0; i < 2; i++) {
		cout << "상품 이름: " << CarGroup[i].name << endl; 
		cout << "가격: " << int(CarGroup[i].price * 10000) << "원" << endl;
		cout << endl;
	}

	// C++에서의 printf
	// string 출력은 c_str()을 사용
	for (int i = 0; i < 2; i++) {
		printf("이름: %20s \t가격: %10d\n", CarGroup[i].name.c_str(), int(CarGroup[i].price * 10000));
	}

	int question = 10 > 7;  // true인 경우 1, false인 경우 0 반환
	cout << question << endl;
	cout << boolalpha << bool(question) << endl;  // boolalpha: 1, 0 값에 따라 true, false로 반환해줌

	return 0;
}