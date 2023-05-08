#include "List.h"

List::List() { 
	list = NULL;
	size = 0;
	name = "no name";
}
List::List(string nm, Cinema* lst, int sz) {
	name = nm;
	list = lst;
	size = sz;
}
List::~List() {
	if (list != NULL) {
		delete[] list;
	}
}

void List::add(Cinema cn) {
	if (list == NULL) {
		list = new Cinema[1];
		list[0] = cn;
		size = 1;
	}
	else {
		Cinema* temp = new Cinema[size + 1];
		for (int i = 0; i < size; i++) {
			temp[i] = list[i];
		}
		temp[size] = cn;
		delete[] list;
		list = temp;
		size++;
	}
}
void List::delite(int index) {
	if (list != NULL && index >= 0 && index < size) {
		Cinema* temp = new Cinema[size - 1];
		int j = 0;
		for (int i = 0; i < size; i++) {
			if (i != index) {
				temp[j] = list[i];
				j++;
			}
		}

		delete[] list;
		list = temp;
		size--;
	}
}
int List::getSize() {
	return size;
}
Cinema List::getCinema(int index) {
	return list[index];
}
string List::convert() {
	string msg = "\t" + name + ":";

	for (int i = 0; i < size; i++) {
		msg += "\n" + list[i].convert();
	}

	return msg;
}