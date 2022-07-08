#pragma once
#include "Header.h"

class Device
{
public:
	struct Date{
		int year;
		int month;
		int day;
	};

	string name;
	string maker;
	double wide;
	int ram;
	string os;
	Date date;

	void display();
};