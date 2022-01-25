#include <iostream>
#include <stdlib.h>  
#include <algorithm>
#include <vector>

using namespace std;
vector<int> vec;
int liczenie = 0;
int losuj;
int iteracyjny(int liczba) {
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i] == liczba)
		{
			return i;
		}
		liczenie++;
	}
	return -1;
}

int rekurencyjny(int left, int right, int liczba) {
	
	liczenie++;
	int srodek = (left + right) / 2;
	if (vec[srodek] == liczba)
	{
		return srodek;
	}
	else if (right <= left)
	{
		return -1;
	}
	else if (vec[srodek] > liczba)
	{
		return rekurencyjny(left, srodek - 1, liczba);
	}
	else if (vec[srodek] < liczba)
	{
		return rekurencyjny(srodek + 1, right, liczba);
	}
}

int main()
{
	int liczba;
	int wybor1, wybor2;

	for (int i = 0; i < 99; i++)
	{
		losuj = rand() % 100;
		vec.push_back(losuj);
	}

	cout << "Czy uzyc posortowanego zbioru?\n1.tak 2.nie\n";
	cin >> wybor1;
	if (wybor1 == 1) {
		sort(vec.begin(), vec.end());
	}

	for (int i = 0; i < 99; i++) {
		cout << vec[i] << " ";
	}

	cout << "\nWybierz liczbe: ";
	cin >> liczba;
	cout << "1.iteracyjny algorytm\n";
	cout << "2.rekurencyjmny algorytm\n";
	cin >> wybor2;
	if (wybor2 == 1) {
		cout << "Miejsce w vectorze: " << iteracyjny(liczba) << endl;
		cout << "Ilosc wykonanych petli: " << liczenie;
	}
	if (wybor2 == 2) {
		cout << "Miejsce w vectorze: " << rekurencyjny(0, vec.size(), liczba) << endl;
		cout << "Ilosc wykonanych petli: " << liczenie;
	}

}
