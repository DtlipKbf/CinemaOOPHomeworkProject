#include "cinema.h"

Cinema::Cinema() {
	name = "no name";
	time = 0;
	ticket_price = 0.0;
	row = 1;
	place = 1;
}

Cinema::Cinema(string nm, int t) {
	name = nm;
	time = t;
}

Cinema::Cinema(string nm, int t, float tp, int r, int p) {
	name = nm;
	time = t;
	ticket_price = tp;
	row = r;
	place = p;
}

Cinema::Cinema(const Cinema& cn) {
	name = cn.name;
	time = cn.time;
	ticket_price = cn.ticket_price;
	row = cn.row;
	place = cn.place;
}

Cinema::~Cinema() {
}

string Cinema::convert() {
	string msg = name + " " + to_string(time) + " ";
	msg += to_string(ticket_price) + " " + to_string(row) + " " + to_string(place);
	return msg;
}

void Cinema::cancel() {
	name = "no name";
	time = 0;
	ticket_price = 0;
	row = 0;
	place = 0;
}