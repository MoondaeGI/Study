#include "Header.h"
#include "Card.h"
#include <cstdlib>  // stdlib.h �� cpp ����
#include <ctime>	// time.h�� cpp ����
// ���� ��� �߰�

/*
	Ʈ���� ī��� A(1), 2, 3, 4, 5, 6, 7, 8, 9, 10, J(11), Q(12), K(13)�� ���ڸ� ������ ����
	�׸��� ����/����, ���̾�/�����̵�/��Ʈ/Ŭ�ι��� ���絵 ������ ����

	Ŭ���� ���� ��, ī�带 �̾ҽ��ϴ� ��� �ȳ��� ���
	Ŭ���� ���� ��, ���ڿ� ����� ���ڰ����� ����. ������ ���, ��翡 ���� ����(�����̵�/Ŭ�ι�: black, ��Ʈ/���̾�: red)
	������ ���� open()�� ������ ���, �ش� Ʈ���� ī���� �ʵ尪 ���

	��� ����)
	ī�带 �̾ҽ��ϴ�.
	���� ī�� [�� 10 BLACK]
*/

string rand_card_shape();
enum Shape
{
	spade
	, club
	, heart
	, dia
};

int main()
{
	srand(time(NULL));  // seed���� ���� �ð��� ����

	Card card(rand() % 13 + 1, rand_card_shape());
	card.open();

	return 0;
}

string rand_card_shape()
{
	int rand_number = rand() % 4;

	if (rand_number == 0) {
		return "spade";
	}
	else if (rand_number == 1) {
		return "club";
	}
	else if (rand_number == 2) {
		return "heart";
	}
	else {
		return "dia";
	}
}

