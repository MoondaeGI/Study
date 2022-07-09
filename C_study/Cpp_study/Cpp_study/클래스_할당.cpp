#include "Header.h"

class Player
{
private:
	string name;
	int money;
public:
	Player(string name, int money);
	~Player();  // �Ҹ���(Destructor) : ��ü�� �Ҹ�Ǵ� ������ ȣ��Ǵ� �޼ҵ�
	void display_info();
};

int main()
{
	// �Ϲ����� Ŭ���� ���� �Ҵ�
	// ��ǻ�Ͱ� ���� ���� �����͸� �ִ� ���
	Player player1("A", 1000000);
	player1.display_info();

	cout << endl;
	
	// Ŭ���� ���� �Ҵ�
	/* 
		����ڰ� ���� �뷮�� �������� �ݳ��Ͽ� �����͸� ����ϴ� ���
		c������ malloc()�� ���� �����͸� �������� free()�� �����͸� �ݳ���
		����ڰ� ���� �����ϱ� �������� �޸� �������� ������� ����
	*/
	Player* player2 = new Player("B", 1000);
	player2->display_info();
	
	delete player2;  // ����� ������ ��ü�� �ݳ��ؾ� ��

	// �Ϲ� ������ ���� �Ҵ�
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
// �Ű��������� �ɹ����������� �ʱ�ȭ��Ŵ
Player::Player(string name, int money) : name(name), money(money)
{}

Player::~Player()
{
	cout << name << "��ü�� �Ҹ��߽��ϴ�." << endl;
}

void Player::display_info()
{
	cout << "�̸�: " << name << endl;
	cout << "�ݾ�: " << money << "��" << endl;
}
