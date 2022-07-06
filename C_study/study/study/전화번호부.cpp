#include "Header.h"
#include <string.h>

struct Phonebook 
{
	char name[20];
	char phone_number[50];
};


// 5개의 전화번호부 명단을 만들고 이름을 검색하면 해당 이름에 맞는 전화번호를 출력하는 프로그램
int main()
{
	Phonebook book[5];  // 5명의 이름과 전화번호를 받을 배열 선언

	for (int i = 0; i < 5; i++) {  // 배열에 이름, 전화번호를 받는 루프
		printf("이름 전화번호를 입력하십시오: ");
		scanf("%s %s", book[i].name, book[i].phone_number);
		printf("\n");
	}

	char match[20];  // 원하는 사람을 받을 문자열 선언
	printf("전화번호를 원하는 사람의 이름을 입력하십시오: ");
	scanf("%s", match);
	printf("\n");

	for (int i = 0; i < 5; i++) {  // 조건이 맞는 이름이 있는지 확인
		if (strcmp(book[i].name, match) == 0) {  // 조건이 맞는 사람이 있다면,
			printf("전화번호: %s\n", book[i].phone_number);  // 그 사람의 전화번호 출력
			return 0;  // 프로그램 종료
		}
	}
	// 조건이 맞는 이름이 없다면 루프 통과
	printf("존재하지 않는 인물의 전화번호입니다.");
	return 0;
}