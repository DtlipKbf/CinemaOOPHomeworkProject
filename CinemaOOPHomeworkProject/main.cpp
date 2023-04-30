#include "main.h"
#include "cinema.h"

int main() {
	Cinema cn1("Cat in boots 2" , 100, 9.90, 7, 12);	
	Cinema cn2("Avatar: Path of Water", 192, 10.20, 8, 11);
	
	cout << cn1.convert() << endl;

	system("pause");
	return 0;
}
