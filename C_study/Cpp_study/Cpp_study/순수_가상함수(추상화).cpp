#include "Header.h"

// ���� ���� �Լ�
// virtual = 0 �� ���·� �̷���� �������� �ʰ� ���� �ϴ� �Լ�
// ���� �����Լ��� ������ �ִٸ� �߻��Լ��� ����

// �߻� Ŭ������ �Լ��� ������ �ȵǾ� �ֱ� ������ ���ο��� ��ü�� ������ �Ұ�����
class A
{
public:
	virtual void Funciton() = 0;
};

class B : public A
{
public:
	virtual void Fuciont()
	{
		cout << 1 << endl;
	}
};

int main()
{

	return 0;
}