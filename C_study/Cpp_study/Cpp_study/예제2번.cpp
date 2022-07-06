#include "Header.h"

void display_calendar();

int main()
{
	display_calendar();

	return 0;
}


void display_calendar()
{
	
	int days[5][7];  // ��¥ ���� �迭 ����
	int count = 1;

	cout << "------------------------------" << endl;
	cout << "          2022�� 6��" << endl;
	cout << endl;
	cout << "  ��  ��  ȭ  ��  ��  ��  ��" << endl;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 7; j++) {
			if ((i == 0 && j < 3) || (i == 4 && j > 4)) {
				printf("    ");
			}
			else {
				days[i][j] = count++;
				printf("  %2d", days[i][j]);
			}
		}
		cout << endl;
	}

	cout << "-----------------------------" << endl;
}