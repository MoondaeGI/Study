#include "Header.h"
#include <string.h>

//문자열 >  문자형 데이터 char를 배열 형태로 작성한 것, ""묶음으로 표현할 수 있고 문장처럼 사용할 수 있음(string.h 사용)

void change(char data[]);

int main()
{
	char data[30] = "MoondaeGI";  // 문자열을 생성 후 초기화 하는 것은 가능
	// 만들고 난 다음에는 초기화 불가능

	// 문자열 길이 strlen()
	printf("현재 %s의 길이는 %d이다.\n", data, strlen(data));  // 길이 9
	printf("현재 \"\"의 길이는 %d이다.\n", strlen(""));  // 길이 0

	char data2[10] = "";
	if (strlen(data2) == 0)
		printf("현재 작성된 내용이 없습니다.\n");

	// 문자열 복사 strcpy() >  문자열 값을 코드 상에서 변경해주기 위해 사용됨
	change(data2);  // 문자열 복사
	printf("현재 %s의 길이는 %d이다.\n", data2, strlen(data2));  // 길이 9

	// 문자열 결합 strcat()
	char data3[30] = "Daddy";
	char data4[30] = "Mommy";

	printf("%s + %s = %s\n", data3, data4, strcat(data3, data4));

	// 문자열 비교 strcmp() >  두 문자를 비교해서 사전 순서대로 그 차이만큼을 표현해주는 기능
	char data5[30] = "Compare";
	char data6[30] = "compare";
	char data7[30] = "Compare";

	// 문자열을 비교해 같은지 다른지를 판단하는데 사용됨
	printf("strcmp(data5, data6): %d ", strcmp(data5, data6));  // -1 (더 앞에 있음)
	printf("strcmp(data6, data5): %d ", strcmp(data6, data5));  // 1 (더 뒤에 있음)
	printf("strcmp(data5, data7): %d ", strcmp(data5, data7));  // 0 (둘이 서로 같다)


	return 0;
}


void change(char data[])
{
	char change_data[30];
	printf("변경할 내용을 입력하십시오: ");
	scanf("%s", change_data);
	strcpy(data, change_data);
	printf("변경이 완료되었습니다.\n");
}