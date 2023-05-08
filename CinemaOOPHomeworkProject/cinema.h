#pragma once
#include"main.h"

class Cinema {
private:
	string name;
	int time;
	float ticket_price;
	float mark;

public:
	Cinema();
	Cinema(string nm, int t);
	Cinema(string nm, int t, float tp, float m);
	Cinema(const Cinema& cn);
	~Cinema();

	string getName();
	void setName(string nm);
	int getTime();
	void setTime(int t);
	float getTicketPrice();
	void setTicketPrice(float tp);
	float getMark();
	void setMark(float m);

	string convert();
	void cancel();
};