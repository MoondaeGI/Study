#include "Header.h"

void chage(int* x, int* y, int* z)
{
	int* temp = x;
	x = y;
	y = z;
	z = temp;
}

int main()
{
	int x = 1;
	int y = 2;
	int z = 3;
	// x, y, z�� �ּҸ� ����Ű�� ������ ���� px, py, pz
	int* px = &x;
	int* py = &y;
	int* pz = &z;
	// px, py, pz�� �ִ� �ּҸ� py, pz, px ������ �̵�
	int* temp = px;
	px = py;
	py = pz;
	pz = temp;

	// x, y, z ������� ���
	printf("x: %d y: %d z: %d\n", x, y, z);
	printf("x: %d y: %d z: %d\n", *px, *py, *pz);

	return 0;
}