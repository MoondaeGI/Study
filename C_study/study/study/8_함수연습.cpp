#include "Header.h"
#include <math.h>

// math.h�� ���� ����� �� �ִ� abs�� ������ ����� ������ myAbs�Լ�


// �Լ� �����ε�: �Լ� �̸��� �����鼭 �ڷ����̳� �Ű������� �ٸ��� ����Ǵ� ���
double myAbs(double x) 
{
	if (x < 0)
		return -x;
	return x;
}

int myAbs(int x)
{
	if (x < 0)
		return -x;
	return x;
}


int main()
{
	// ������ �̴� �Լ� abs(double);
	printf("%d\n", myAbs(-1));
	printf("%d\n", myAbs(1));
	return 0;
}