#include "Header.h"
#include <fstream>
#include <string>


struct LogDate {
	int year;
	int month;
	int day;
};
string talk(string talker);

int main()
{
	LogDate log_date = {2022, 6, 26};
	string A, B;
	A = "A";
	B = "B";

	ofstream ofs;
	ofs.open("Dialog.txt");
	cout << "메신저 실행" << endl;

	ofs << "대화 시작  ";
	ofs << log_date.year << "-" << log_date.month << "-" << log_date.day << endl;

	string log, talker;
	string select;
	int talk_counter = 1;

	while (true) {
		cout << "대화를 진행하시겠습니까? 입력 / 종료: ";
		cin >> select;
		cin.ignore();

		if (select == "입력") {
			if (talk_counter % 2 == 1) {
				talker = A;
			}
			else {
				talker = B;
			}
			
			log = talk(talker);
			ofs << talk_counter++ << " " << log << endl;
		}
		
		else if (select == "종료") {
			cout << "대화가 종료되었습니다." << endl;
			break;
		}

		else {
			cout << "다시 입력해 주십시오." << endl;
		}
	}

	ofs.close();

	return 0;
}


string talk(string talker)
{
	string message;
	cout << talker << ": ";

	getline(cin, message);

	return talker + ": " + message;
}