#include "Header.h"

/*
	1. 캡슐화: 몇개의 객체 속성을 묶은 후 접근 제어로 데이터 은닉
	2. 상속: 부모의 클래스 기능을 자식에게 물려줌
	3. 다형성: 타입에 관계없이 사용 가능
	4. 추상화
*/

class Member
{
private:
	string name;
	string pass;
	int id_code;
public:
	string getName();
	void setName(string name);
	string getPass();
	void setPass(string pass);
	int getIdCode();
	void setIdCode(int id_code);
};

string Member::getName()
{
	return name;
}

void Member::setName(string nane) {
	Member::name = name;
}

string Member::getPass() {
	return pass;
}

void Member::setPass(string pass) {
	Member::pass = pass;
}

int Member::getIdCode()
{
	return id_code;
}

void Member::setIdCode(int id_code)
{
	Member::id_code = id_code;
}