#include <iostream>
using namespace std;

// C언어의 자료형을 그대로 가져감
/*
	이름			크기(Byte)		형태
	char		1				문자
	short		2				
	int			4				정수
	long		4(java: 8)
	long long	8
	float		4				실수
	double		8
	long double	8	
*/

int main() 
{
	// Visual C++ 자료형
	__int8 alpha = 'a';  // char
	__int16 s = 1;  // short
	__int32 Integer = 21234;  // int
	__int64 None = 92341212312422433;  // 따로 대신하는 이름 없음
	wchar_t wide = L'o';  // 와이드 캐릭터: 유니코드에 대한 저장 데이터

	cout << alpha << endl;
	cout << s << endl;
	cout << Integer << endl;
	cout << None << endl;
	cout << wide << endl;

	return 0;
}
