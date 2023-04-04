#include "main.h"

class Cinema {
public:
	string name;
	int time;
	float ticket_price;	
	int row;
	int place;

	string convert() {
		string msg = name + " " + to_string(time) + " ";
		msg += to_string(ticket_price) + " " + to_string(row) + " " + to_string(place);
		return msg;
	}
};

int main() {
	Cinema cn1;
	cn1.name = "Cat in boots 2";
	cn1.time = 100;
	cn1.ticket_price = 9.90;
	cn1.row = 7;
	cn1.place = 12;

	Cinema cn2;
	cn2.name = "Avatar: Path of Water";
	cn2.time = 192;
	cn2.ticket_price = 10.20;
	cn2.row = 8;
	cn2.place = 11;
	
	system("pause");
	return 0;
}
