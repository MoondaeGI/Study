#include "Header.h"
#include <Windows.h>  // �ý��� �Լ��� ����� �� �ִ� ���
#include <conio.h>    // �ܼ�â�� ���� ����� �۾� ���� ���
// ���� ���α׷��ֿ��� ���� ����ϴ� ���

// switch 

// gotoxy �Լ� ����
void gotoxy(int x, int y)  // x, y���� �־ gotoxy�� ���
{
	COORD pos;  // HTML�� �̹����ʰ��� ��
	pos.X = x;  // pos�� x��ǥ�� ���� x������ ����
	pos.Y = y;  // pos�� y��ǥ�� ���� y������ ����

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);  
	// ��°��� ��ǥ�� �̵���ų �� ����ϴ� ��� >> ���ϴ� ��ǥ�� Ŀ���� �̵���Ŵ
}


int main()
{
	char choice = 0;  // ���� �Է�
	int x = 0;  // x, y�� �⺻�� 0
	int y = 0;

	// ���α׷� ����
	while (1) {
		gotoxy(x, y);
		printf("*");

		if (_kbhit()) {  // Ű���带 �Է��ϰ� ���� ���� ����
			choice = _getch();  // ���ڸ� �Է¹���

			// if���� �ſ� ������ ���¸� ������ ����
			/*
				������: if���� else if�� ���ؼ� {}�� ������ �� �� ����
						switch�� case�� ������ ǥ���ϴ� ������ ǥ���� (������ �� ����)
			*/
			switch (choice) {
				case 'w':
					y--;
					break; // �۾� ����
				case 'a':
					x--;
					break;
				case 's':
					y++;
					break;
				case 'd':
					x++;
					break;
				default:
					break;
			}
		}
		Sleep(100);
		system("cls");
	}

	return 0;
}