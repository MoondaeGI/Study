#include "Header.h"
#include <vector>

// vector ����
// push_back: vector ����
// pop_back: vector ����
// at(index): vector Ž��
// clear, size, empty �� �ִ� �͵�

class Drink
{
protected:
	string name;
	int price;
public:
	virtual void info() = 0;

	string get_name() { return name; }
	int get_price() { return price; }
};

// Drink�� �̿��� �ڽ� Ŭ���� ����
class Cola : public Drink
{
public:
	Cola(string name, int price)
	{
		this->name = name;
		this->price = price;
	}

	virtual void info()
	{
		cout << "����: �ݶ�" << endl;
		cout << "�̸�: " << name << "\t" << "����: " << price << endl;
	}
};

class Coffee : public Drink
{
public:
	Coffee(string name, int price)
	{
		this->name = name;
		this->price = price;
	}

	virtual void info()
	{
		cout << "����: Ŀ��" << endl;
		cout << "�̸�: " << name << "\t" << "����: " << price << endl;
	}
};

class Soju : public Drink
{
public:
	Soju(string name, int price)
	{
		this->name = name;
		this->price = price;
	}

	virtual void info()
	{
		cout << "����: ����" << endl;
		cout << "�̸�: " << name << "\t" << "����: " << price << endl;
	}
};

class Beer : public Drink
{
public:
	Beer(string name, int price)
	{
		this->name = name;
		this->price = price;
	}

	virtual void info()
	{
		cout << "����: ����" << endl;
		cout << "�̸�: " << name << "\t" << "����: " << price << endl;
	}
};


class Seller
{
public:
	vector<Drink*> drinks;
	int max_count;
	int money;

	Seller(int max_count, int money)
	{
		this->max_count = max_count;
		this->money = money;
	}

	void menu()
	{
		// ������� ��ü ���
		for (Drink* drink : drinks) {
			drink->info();
			cout << endl;
		}
	}

	void sell(int index)
	{
		// ������ ���� ������ �־� �����մϴ�.
		int price = drinks.at(index)->get_price();
		string name = drinks.at(index)->get_name();

		cout << name << "�� �����մϴ�." << endl;
		cout << "������ " << price << "���Դϴ�." << endl;

		if (money < price) {
			cout << "��ǰ�� ������ �� �����ϴ�." << endl;
			return;
		}

		money -= price;
		cout << name << "��(��) �����ϼ̽��ϴ�." << endl;
		cout << "���� �ܾ��� " << money << "�� �Դϴ�." << endl;
		
		cout << endl;
	}
};

int main()
{
	// �ݶ� ����
	Cola* soft_cola = new Cola("����Ʈ �ݶ�", 1500);
	Cola* coca_cola = new Cola("��ī�ݶ�", 1200);
	Cola* expensive_cola = new Cola("��� �ݶ�", 3000);
	// Ŀ�� ����
	Coffee* georgia = new Coffee("������ Ŀ��", 1000);
	Coffee* lets_be = new Coffee("������ Ŀ��", 650);
	Coffee* maxim = new Coffee("�ƽ� Ŀ��", 300);
	// ���� ����
	Soju* like_first = new Soju("ó��ó��", 1950);
	Soju* frash = new Soju("���̽� �ķ���", 1850);
	Soju* red_cap = new Soju("���̽� ��������", 2000);
	Soju* flog = new Soju("����", 2000);
	// ���� ����
	Beer* cass = new Beer("ī��", 1700);
	Beer* hite = new Beer("����Ʈ", 1900);
	Beer* kloud = new Beer("Ŭ����", 1800);

	// ���� ����
	Seller* seller = new Seller(13, 100000);
	
	seller->drinks.push_back(new Cola("����Ʈ �ݶ�", 1500));
	seller->drinks.push_back(coca_cola);
	seller->drinks.push_back(expensive_cola);

	seller->drinks.push_back(georgia);
	seller->drinks.push_back(lets_be);
	seller->drinks.push_back(maxim);

	seller->drinks.push_back(like_first);
	seller->drinks.push_back(frash);
	seller->drinks.push_back(red_cap);
	seller->drinks.push_back(flog);

	seller->drinks.push_back(cass);
	seller->drinks.push_back(hite);
	seller->drinks.push_back(kloud);

	// �޴� ���
	seller->menu();

	seller->sell(10);
	seller->sell(2);
	seller->sell(8);
	seller->sell(12);

	delete seller;

	return 0;
}