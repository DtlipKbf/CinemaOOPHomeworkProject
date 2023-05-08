#include "cinema.h"

Cinema::Cinema() {
	name = "no name";
	time = 0;
	ticket_price = 0.0;
	mark = 0.0;
}

Cinema::Cinema(string nm, int t) {
	name = nm;
	time = t;
}

Cinema::Cinema(string nm, int t, float tp, float m) {
	name = nm;
	time = t;
	ticket_price = tp;
	mark = m;
}

Cinema::Cinema(const Cinema& cn) {
	name = cn.name;
	time = cn.time;
	ticket_price = cn.ticket_price;
	mark = cn.mark;
}

Cinema::~Cinema() {
}

string Cinema::getName() {
	return name;
}
void Cinema::setName(string nm) {
	name = nm;
}
int Cinema::getTime() {
	return time;
}
void Cinema::setTime(int t) {
	if (t >= 0) {
		time = t;
	}
}
float Cinema::getTicketPrice() {
	return ticket_price;
}
void Cinema::setTicketPrice(float tp) {
	if (tp > 0) {
		ticket_price = tp;
	}
}
float Cinema::getMark() {
	return mark;
}
void Cinema::setMark(float m) {
	if (m > 0 && m <= 10) {
		mark = m;
	}
}

string Cinema::convert() {
	string msg = name + " " + to_string(time) + " ";
	msg += to_string(ticket_price) + " " + to_string(mark);
	return msg;
}
void Cinema::cancel() {
	name = "no name";
	time = 0;
	ticket_price = 0.0;
	mark = 0.0;
}