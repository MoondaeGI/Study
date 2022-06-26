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
	cout << "�޽��� ����" << endl;

	ofs << "��ȭ ����  ";
	ofs << log_date.year << "-" << log_date.month << "-" << log_date.day << endl;

	string log, talker;
	string select;
	int talk_counter = 1;

	while (true) {
		cout << "��ȭ�� �����Ͻðڽ��ϱ�? �Է� / ����: ";
		cin >> select;
		cin.ignore();

		if (select == "�Է�") {
			if (talk_counter % 2 == 1) {
				talker = A;
			}
			else {
				talker = B;
			}
			
			log = talk(talker);
			ofs << talk_counter++ << " " << log << endl;
		}
		
		else if (select == "����") {
			cout << "��ȭ�� ����Ǿ����ϴ�." << endl;
			break;
		}

		else {
			cout << "�ٽ� �Է��� �ֽʽÿ�." << endl;
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