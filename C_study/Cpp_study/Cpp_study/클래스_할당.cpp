#include "Header.h"

class Player
{
private:
	string name;
	int money;
public:
	Player(string name, int money);
	~Player();  // 소멸자(Destructor) : 객체가 소멸되는 시점에 호출되는 메소드
	void display_info();
};

int main()
{
	// 일반적인 클래스 정적 할당
	// 컴퓨터가 값을 보고 데이터를 주는 방법
	Player player1("A", 1000000);
	player1.display_info();

	cout << endl;
	
	// 클래스 동적 할당
	/* 
		사용자가 직접 용량을 빌려오고 반납하여 데이터를 사용하는 방법
		c언어에서는 malloc()을 통해 데이터를 빌려오고 free()로 데이터를 반납함
		사용자가 직접 제거하기 전까지는 메모리 영역에서 사라지지 않음
	*/
	Player* player2 = new Player("B", 1000);
	player2->display_info();
	
	delete player2;  // 사용을 끝내고 객체를 반납해야 함

	// 일반 변수의 동적 할당
	int* a = new int[4];

	for (int i = 0; i < 4; i++) {
		a[i] = i;
		cout << a[i] << " ";
	}
	cout << endl;

	delete a;


	return 0;
}

// Member initializer
// 매개변수값을 맴버변수값으로 초기화시킴
Player::Player(string name, int money) : name(name), money(money)
{}

Player::~Player()
{
	cout << name << "객체가 소멸했습니다." << endl;
}

void Player::display_info()
{
	cout << "이름: " << name << endl;
	cout << "금액: " << money << "원" << endl;
}
