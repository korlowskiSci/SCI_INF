#pragma once
#include <vector>

using namespace std;
class losuj {
public:
	vector <int> vec;
	void losowanie();
	void babelkowe();
	void wstawianie();
	void szybkie(int prawy, int lewy);
	void wybor();
	void sortowanie();
	void wyswietl();
	void scalanie(int lewy, int srodek, int prawy);
	void sortuj_scal(int lewy, int prawy);
};