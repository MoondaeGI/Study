#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Math.h>

struct answer
{
	int answer1;
	int answer2;
};

answer quad(int array[]);


int main()
{
	int quad_array[3];

	struct answer x;

	for (int i = 0; i < 3; i++) {
		scanf("%d", &quad_array[i]);
	}

	x = quad(quad_array);
	printf("%d %d", x.answer1, x.answer2);

	return 0;
}

answer quad(int array[])
{
	answer x;

	int a = array[0];
	int b = array[1];
	int c = array[2];

	x.answer1 = ((-1) * b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
	x.answer2 = ((-1) * b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;

	return x;
}
