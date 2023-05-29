#pragma once
#include "cinema.cpp"

class List {
private:
	Cinema* list;
	static int size;
	string name;
public:
	List();
	List(string nm, Cinema* lst, int size);
	~List();

	void add(Cinema cn);
	void delite(int index);
	int getSize();
	Cinema getCinema(int index);
	string convert();
};