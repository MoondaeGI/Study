#include "Header.h"

/*
	1. ĸ��ȭ: ��� ��ü �Ӽ��� ���� �� ���� ����� ������ ����
	2. ���: �θ��� Ŭ���� ����� �ڽĿ��� ������
	3. ������: Ÿ�Կ� ������� ��� ����
	4. �߻�ȭ
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