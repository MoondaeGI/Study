#include "Header.h"


// file 구조체
int main()
{
	FILE* file;  // 외부에서 가져오는 것이기 때문에 포인터
	file = fopen("Sample.txt", "r");  // 폴더 내의 Sample.txt를 읽기 모드로 가져옴

	// 파일 읽기를 진행하기 위해 필요한 것
	// 1. 버퍼
	char buffer[100] = {0, }; // 시작 부분에 0을 넣어서 이상한 값이 들어오는 걸 막아준다
	// 2. 파일 전체 읽어오기
	fread(buffer, 1, 100, file);
	// 3. 파일에 대한 포인터로 읽기
	printf("%s", buffer);
	fclose(file);

	// 파일 쓰기
	FILE* fp = fopen("Sample2.txt", "w");
	fputs("여러분모두다안녕하세요안녕하세요안녕하세요오요오요나나나나난사나나나(안녕하세요오)", fp);
	fclose(fp);

	return 0;
}