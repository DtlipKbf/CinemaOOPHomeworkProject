#pragma once
#include"main.h"

class Cinema {
private:
	string name;
	int time;
	float ticket_price;
	int row;
	int place;


public:
	Cinema();
	Cinema(string nm, int t);
	Cinema(string nm, int t, float tp, int r, int p);
	Cinema(const Cinema& cn);
	~Cinema();

	string convert();
	void cancel();
};