#include "manager.cpp"

int main() {
	Cinema cn1("Cat in boots 2" , 100, 9.90, 8.5);	
	Cinema cn2("Avatar: Path of Water", 192, 10.20, 8.6);
	
	List cn;
	cn.add(cn1);
	cn.add(cn2);

	cout << "best film: " << Manager::findBestFilm(cn).convert() << endl;

	system("pause");
	return 0;
}
