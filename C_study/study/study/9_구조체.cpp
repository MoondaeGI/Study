#include "Header.h"
#include <string.h>  // 문자열에 대한 작업을 진행할 수 있는 헤더 파일
// 구조체(struct)
// 자료형들을 묶어서 하나의 자료형처럼 사용할 수 있는 c언어에서 가장 많이 활용되는 기능 중 하나

struct Person {  // 구조체 안에서 만들어진 변수는 member variable(맴버 변수)라고 부름
	char name[10];  // 숫자 넣는 기준: 영문자> 작성한 숫자 -1까지 작성 가능, 한글> 작성 숫자 -1 후 /2까지 가능
	int age;
	char address[100];
};

void Show(struct Person p);

int main()
{
	// 구조체를 main에서 사용
	struct Person p1;

	// struct_name.member_variable = value
	strcpy(p1.name, "이문혁");  
	// strcpy: 해당 문자열 변수에 값을 넣어줄 수 있는 함수(string.h에 존재)
	// 배열의 경우, 한번 만들어지면 형태를 바꿀 수 없기 때문에 만들어진 기능
	p1.age = 26;
	strcpy(p1.address, "경기도 부천시 장말로71, 1503동 501호");

	struct Person p2 = {"이채민", 25, "경기도 부천시 어쩌구"};

	Show(p1);
	Show(p2);

	return 0;
}


void Show(struct Person p)
{
	printf("이름: %s\n나이: %d\n주소: %s\n\n", p.name, p.age, p.address);
}