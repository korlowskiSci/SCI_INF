#include <iostream>
#include "losuj.h" 

using namespace std;
int main()
{
	int a;
	cout << "Wylosowane liczby: \n";
	losuj los;
	los.losowanie();
	los.wyswietl();
	cout << endl;
	cout << "Wybierz algorytm sortujacy: \n 1.Babelkowy \n 2.Wstawienie\n Wybor: ";
	cin >> a;
	cout << "Posortowane liczby: \n";
	if (a == 1) {
	los.babelkowe();
	los.wyswietl();
	}
	else if (a == 2) {
	los.wstawianie();
	los.wyswietl();
	}

	
}
