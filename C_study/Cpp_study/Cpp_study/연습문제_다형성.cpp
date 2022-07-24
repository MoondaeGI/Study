#include "Header.h"
#include <vector>

// vector 사용법
// push_back: vector 삽입
// pop_back: vector 삭제
// at(index): vector 탐색
// clear, size, empty 다 있는 것들

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

// Drink를 이용해 자식 클래스 생성
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
		cout << "종류: 콜라" << endl;
		cout << "이름: " << name << "\t" << "가격: " << price << endl;
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
		cout << "종류: 커피" << endl;
		cout << "이름: " << name << "\t" << "가격: " << price << endl;
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
		cout << "종류: 소주" << endl;
		cout << "이름: " << name << "\t" << "가격: " << price << endl;
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
		cout << "종류: 맥주" << endl;
		cout << "이름: " << name << "\t" << "가격: " << price << endl;
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
		// 음료수를 전체 출력
		for (Drink* drink : drinks) {
			drink->info();
			cout << endl;
		}
	}

	void sell(int index)
	{
		// 선택한 음료 가격을 넣어 구매합니다.
		int price = drinks.at(index)->get_price();
		string name = drinks.at(index)->get_name();

		cout << name << "를 구매합니다." << endl;
		cout << "가격은 " << price << "원입니다." << endl;

		if (money < price) {
			cout << "상품을 구매할 수 없습니다." << endl;
			return;
		}

		money -= price;
		cout << name << "을(를) 구매하셨습니다." << endl;
		cout << "남은 잔액은 " << money << "원 입니다." << endl;
		
		cout << endl;
	}
};

int main()
{
	// 콜라 생성
	Cola* soft_cola = new Cola("소프트 콜라", 1500);
	Cola* coca_cola = new Cola("코카콜라", 1200);
	Cola* expensive_cola = new Cola("비싼 콜라", 3000);
	// 커피 생성
	Coffee* georgia = new Coffee("조지아 커피", 1000);
	Coffee* lets_be = new Coffee("레쓰비 커피", 650);
	Coffee* maxim = new Coffee("맥심 커피", 300);
	// 소주 생성
	Soju* like_first = new Soju("처음처럼", 1950);
	Soju* frash = new Soju("참이슬 후레쉬", 1850);
	Soju* red_cap = new Soju("참이슬 오리지날", 2000);
	Soju* flog = new Soju("진로", 2000);
	// 맥주 생성
	Beer* cass = new Beer("카스", 1700);
	Beer* hite = new Beer("하이트", 1900);
	Beer* kloud = new Beer("클라우드", 1800);

	// 샐러 생성
	Seller* seller = new Seller(13, 100000);
	
	seller->drinks.push_back(new Cola("소프트 콜라", 1500));
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

	// 메뉴 출력
	seller->menu();

	seller->sell(10);
	seller->sell(2);
	seller->sell(8);
	seller->sell(12);

	delete seller;

	return 0;
}