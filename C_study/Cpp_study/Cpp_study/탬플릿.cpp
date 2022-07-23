#pragma once
#include "Header.h"

// ���ø�: �Ϲ�ȭ ���α׷��� ����� Ʋ
// �Ϲ�ȭ ���α׷���: ����� ������ ã�� �����ִ� ����� ���α׷���

// ���ø��� �ֿ� ���
/*
	1. �Լ� ���ø�: �ڷ����� ���� �Ϲ�ȭ�� �۾�
	2. Ŭ���� ���ø�: Ŭ���� ������ �ɹ� ���� Ÿ�Կ� ���� �Ϲ�ȭ�� �۾�
*/

/*
���ø��� Ȱ������ ���� �Լ� ����
int sum(int a, int b) { return a + b; }
double sum(double a, double b) { return a + b; }
string sum(string a, string b) { return a + b; }
*/

// ���ø����� �������� ������ ���
template <typename T>
T sum(T a, T b) { return a + b; }


int main()
{
	cout << sum(10, 5) << endl;
	cout << sum(10.5, 5.5) << endl;
	cout << sum("10", "5") << endl;

	return 0;
}