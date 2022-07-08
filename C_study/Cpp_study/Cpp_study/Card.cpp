#include "Card.h"

Card::Card(int card_number, string card_shape)
{	
	Card::card_number = card_number;
	Card::card_shape = card_shape;

	cout << "ī�带 �̾ҽ��ϴ�!" << endl;
}

string Card::get_card_color()
{
	if (card_shape == "spade" || card_shape == "club")
		return "BLACK";
	else
		return "RED";
}

string Card::get_card_number()
{
	if (card_number == 1) {
		return "A";
	}
	else if (card_number == 11) {
		return "J";
	}
	else if (card_number == 12) {
		return "Q";
	}
	else if (card_number == 13) {
		return "K";
	}
	else {
		return to_string(card_number);
	}
}

string Card::get_card_shape() {
	if (card_shape == "spade") {
		return "��";
	}
	else if (card_shape == "club") {
		return "��";
	}
	else if (card_shape == "heart") {
		return "��";
	}
	else {
		return "��";
	}
}

void Card::open() {
	cout << "���� ī�� [ " << get_card_shape() << " " << get_card_number() << " " << get_card_color() << " ]" << endl;
}
