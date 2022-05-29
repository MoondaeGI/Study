#include "Header.h"
#include <Windows.h>  // 시스템 함수를 사용할 수 있는 헤더
#include <conio.h>    // 콘솔창에 대한 입출력 작업 진행 헤더
// 게임 프로그래밍에서 자주 사용하는 헤더

// switch 

// gotoxy 함수 설계
void gotoxy(int x, int y)  // x, y값을 넣어서 gotoxy를 사용
{
	COORD pos;  // HTML의 이미지맵같은 것
	pos.X = x;  // pos의 x좌표를 넣은 x값으로 설정
	pos.Y = y;  // pos의 y좌표를 넣은 y값으로 설정

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);  
	// 출력값을 좌표로 이동시킬 때 사용하는 기능 >> 원하는 좌표로 커서를 이동시킴
}


int main()
{
	char choice = 0;  // 문자 입력
	int x = 0;  // x, y축 기본값 0
	int y = 0;

	// 프로그램 진행
	while (1) {
		gotoxy(x, y);
		printf("*");

		if (_kbhit()) {  // 키보드를 입력하고 있을 때를 조건
			choice = _getch();  // 문자를 입력받음

			// if문과 매우 유사한 형태를 가지고 있음
			/*
				차이점: if문은 else if를 통해서 {}의 선택을 할 수 있음
						switch는 case를 여러개 표현하는 것으로 표현됨 (가독성 더 좋음)
			*/
			switch (choice) {
				case 'w':
					y--;
					break; // 작업 종료
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