#include "main.h"

class Cinema {
private:
	string name;
	int time;
	float ticket_price;
	int row;
	int place;


public:
	Cinema() {
		name = "no name";
		time = 0;
		ticket_price = 0.0;
		row = 1;
		place = 1;
	}

	Cinema(string nm, int t) {
		name = nm;
		time = t;
	}

	Cinema(string nm, int t, float tp, int r, int p) {
		name = nm;
		time = t;
		ticket_price = tp;
		row = r;
		place = p;
	}

	Cinema(const Cinema &cn) {
		name = cn.name;
		time = cn.time;
		ticket_price = cn.ticket_price;
		row = cn.row;
		place = cn.place;
	}

	~Cinema() {
	}

	string convert() {
		string msg = name + " " + to_string(time) + " ";
		msg += to_string(ticket_price) + " " + to_string(row) + " " + to_string(place);
		return msg;
	}

	void cancel() {
		name = "no name";
		time = 0;
		ticket_price = 0;
		row = 0;
		place = 0;
	}
};

int main() {
	Cinema cn1("Cat in boots 2" , 100, 9.90, 7, 12);	
	Cinema cn2("Avatar: Path of Water", 192, 10.20, 8, 11);
	
	cout << cn1.convert() << endl;

	system("pause");
	return 0;
}
