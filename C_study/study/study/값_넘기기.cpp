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
	// x, y, z의 주소를 가리키는 포인터 변수 px, py, pz
	int* px = &x;
	int* py = &y;
	int* pz = &z;
	// px, py, pz에 있는 주소를 py, pz, px 순으로 이동
	int* temp = px;
	px = py;
	py = pz;
	pz = temp;

	// x, y, z 순서대로 출력
	printf("x: %d y: %d z: %d\n", x, y, z);
	printf("x: %d y: %d z: %d\n", *px, *py, *pz);

	return 0;
}