#include "Header.h"

// 자판기를 설치하는 프로그램

/*

	1. 자판기에 추가할 메뉴의 이름을 입력 (3번)

	2. 자판기에 추가한 메뉴에 대한 가격을 입력 (3번)

	3. 추가가 완료되면 메뉴판이 화면에 출력되고 입력을 통해 구매를 진행

	4. 프로그램 종료

*/

 

 

int main() 

{

	// 문장에 대한 입력 표현

	/*

		1. printf()에서 사용되고 있는 ""에 대한 자료형인 const char*를 이용한다.

		2. 문자를 여러개 사용한다는 의미의 문자열 (char[])를 이용한다.

	*/

 

	char menu1[LIMIT];

	char menu2[LIMIT];

	char menu3[LIMIT];

	// 영어 기준 20단어, 한글 기준 10단어까지 작성이 가능 (한글은 영문자와 다르게 2칸을 차지함)

	// 딱 맞춰서 적을 경우 약간의 오차로 인해 프로그램이 오류가 생겨 실질적으로는 19단어, 9단어라고 생각함

	const char* menu4 = "감자튀김";

	// const char*은 문자열을 표현하는 자료형이지만, const에 의해서 형태가 고정되기 때문에 입력을 진행할 수는 없음

	// 직접적으로 initialize할때 사용

 

	printf("메뉴 1번의 이름: ");

	scanf("%[^\n]%*c", menu1);  

	// 문자열을 입력할 경우, 변수 앞의 &를 사용하지 않음 (배열 자체가 주소값을 기준으로 묶여서 표현한 것이기 때문)

	// 띄어쓰기는 포함하지 못함 (문장 자체가 끝을 공백으로 구분하고 있기 때문) -> 문장 입력 중에 포함된 공백까지는 입력을 받게 고침

	// 수정이 불가능함

	printf("메뉴 2번의 이름: ");

	scanf("%[^\n]%*c", menu2);  // 띄어 쓰기 포함

	// [^\n]: 엔터가 진행되기 전까지 입력을 진행해라

	// [^'특정 문자']: 특정 문자가 진행되기 전까지 입력을 진행한다

	

	printf("메뉴 3번의 이름: ");

	scanf("%[^\n]%*c", menu3);  // 띄어 쓰기 포함

	// 해당 코드의 문제점: 하나를 입력하고 난 다음에 이상한 값이 처리된다. -> 개행문자(enter)에 대한 문제

	// 개행문자: 줄을 바꾸는 문자

 

	printf("메뉴1 이름: %s\n", menu1);

	printf("메뉴2 이름: %s\n", menu2);

	printf("메뉴3 이름: %s\n", menu3);

 

	//선택을 위해 선택용 변수 select

	int select;

	printf("메뉴의 번호를 작성해주세요: ");

	scanf("%d", &select);

 

	const char* menu = NULL;

 

	if (select == 1) {

		menu = menu1;

	}

	else if (select == 2) {

		menu = menu2;

	}

	else if (select == 3) {

		menu = menu3;

	}

	else {

		printf("1, 2, 3번으로 선택하십시오.\n");

		return 0;

	}

	

	printf("메뉴%d번 %s를 선택했습니다.\n", select, menu);

 

 

	return 0;

}

 

// scanf("%['\n]%*c", manu);

/* 

	%[]: charset character : 문장을 읽어오는 코드

	%*c는 문자 하나를 읽어온 후 버리는 코드(enter)

 

	-> %[]으로 문자열을 읽은 후 %*c로 enter값을 버리는 구현이 됨 

*/