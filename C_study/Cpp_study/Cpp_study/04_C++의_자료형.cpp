#include <iostream>
using namespace std;

// C����� �ڷ����� �״�� ������
/*
	�̸�			ũ��(Byte)		����
	char		1				����
	short		2				
	int			4				����
	long		4(java: 8)
	long long	8
	float		4				�Ǽ�
	double		8
	long double	8	
*/

int main() 
{
	// Visual C++ �ڷ���
	__int8 alpha = 'a';  // char
	__int16 s = 1;  // short
	__int32 Integer = 21234;  // int
	__int64 None = 92341212312422433;  // ���� ����ϴ� �̸� ����
	wchar_t wide = L'o';  // ���̵� ĳ����: �����ڵ忡 ���� ���� ������

	cout << alpha << endl;
	cout << s << endl;
	cout << Integer << endl;
	cout << None << endl;
	cout << wide << endl;

	return 0;
}
