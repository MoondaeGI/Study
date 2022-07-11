#include "Header.h"
#include <windows.h>

class Gamer
{
protected:
	string name;
public:
	virtual void display() = 0;
};

class Player : public Gamer
{
public:
	Player(string name);
	virtual void display();
};

class NonePlayer : public Gamer
{
public: 
	NonePlayer(string name);
	virtual void display();
};


int main()
{
	Gamer* gamers[4];

	for (int i = 0; i < 4; i++) {
		string name;

		cout << "�̸�: ";
		cin >> name;

		if (i == 0) {
			gamers[i] = new Player(name);
		}
		else {
			gamers[i] = new NonePlayer(name);
		}
		gamers[i]->display();
	}

	for (int i = 0; i < 4; i++) {
		cout << i << endl;
		delete gamers[i];

		if (gamers[i] == nullptr) {
			cout << "ǥ���� �� �����ϴ�." << endl;
		}
		else {
			gamers[i]->display();
		}
		Sleep(1000);
	}

	return 0;
}

Player::Player(string name)
{
	this->name = name;
}

NonePlayer::NonePlayer(string name)
{
	this->name = name;
}

void Player::display()
{
	cout << "�÷��̾� " << name << "�Դϴ�." << endl;
}

void NonePlayer::display()
{
	cout << "�÷��̾� " << name << "�Դϴ�." << endl;
}