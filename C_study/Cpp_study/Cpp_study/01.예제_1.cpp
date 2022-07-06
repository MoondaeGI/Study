#include "Header.h"
#include <iomanip>  // input/out Mnipulator: 입/출력간의 조정을 담당
/*
	setw(): 해당 칸만큼 유지
	setfill(): 공백을 채우는 문법
	setbase(): 진법에 대한 표현
	setprecision(): 소숫점 자릿수 표현
*/

string name;
int level;
int atk;

int main()
{
	int select;

	while (true) {

		cin >> select;
		switch (select) {
			case 1:
				cout << "1. 시작" << endl;
				cin >> name;
				cin >> level;
				cin >> atk;
				cout << "능력치가 설정되었습니다." << endl;
				cout << "=============================" << endl;
				cout << "이름: " << setw(4) << name << endl;
				cout << "레벨: " << setw(4) << level << endl;
				cout << "atk: " << setw(4) << atk << endl;
				cout << "=============================" << endl;
				break;
			case 2:
				cout << "2. 종료" << endl;
				exit(0);
			default:
				cout << "재입력" << endl;
		}
	}

	return 0;
}