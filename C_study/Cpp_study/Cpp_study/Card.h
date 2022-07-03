#pragma once
#include "Header.h"
#include <string>

class Card
{
private:
	int card_number;
	string card_shape;
	string card_color;
public:
	Card(int card_number, string card_shape);
	string get_card_number();
	string get_card_color();
	string get_card_shape();
	void open();
};

