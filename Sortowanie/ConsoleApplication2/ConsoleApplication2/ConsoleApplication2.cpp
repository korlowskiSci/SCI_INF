#include <iostream>
#include "losuj.h"
#include <chrono>

using namespace std;
int main()
{
	int a;
	cout << "Wylosowane liczby: \n";
	losuj los;
	los.losowanie();
	
	cout << endl;
	cout << "Wybierz algorytm sortujacy: \n 1.Babelkowy \n 2.Wstawienie\n 3.Wybieranie \n 4.Szybkie \n 5.Standardowe sortowanie \n 6.Sortowanie przez scalanie \n Wybor: ";
	cin >> a;
	cout << "\n";
	if (a == 1) {
		auto start = std::chrono::steady_clock::now();
		los.babelkowe();
		auto end = std::chrono::steady_clock::now();
		std::chrono::duration<double> elapsed_second = end - start;
		los.wyswietl();
		cout << "---- Babelkowe ----\n Czas: " << elapsed_second.count() << "s\n";
	}
	else if (a == 2) {
		auto start = std::chrono::steady_clock::now();
		los.wstawianie();
		auto end = std::chrono::steady_clock::now();
		std::chrono::duration<double> elapsed_second = end - start;
		los.wyswietl();
		cout << "---- Wstawienie ----\n Czas: " << elapsed_second.count() << "s\n";
	}
	else if (a == 3) {
		auto start = std::chrono::steady_clock::now();
		los.wybor();
		auto end = std::chrono::steady_clock::now();
		std::chrono::duration<double> elapsed_second = end - start;
		los.wyswietl();
		cout << "---- Wybieranie ----\n Czas: " << elapsed_second.count() << "s\n";
	}
	else if (a == 4) {
		auto start = std::chrono::steady_clock::now();
		los.szybkie(0, 999);
		auto end = std::chrono::steady_clock::now();
		std::chrono::duration<double> elapsed_second = end - start;
		los.wyswietl();
		cout << "---- Szybkie ----\n Czas: " << elapsed_second.count() << "s\n";
	}
	else if (a == 5) {
		auto start = std::chrono::steady_clock::now();
		los.sortowanie();
		auto end = std::chrono::steady_clock::now();
		std::chrono::duration<double> elapsed_second = end - start;
		los.wyswietl();
		cout << "---- Standardowe sortowanie ----\n Czas: " << elapsed_second.count() << "s\n";
	}
	else if (a == 6) {
		auto start = std::chrono::steady_clock::now();
		los.sortuj_scal(0, 999);
		auto end = std::chrono::steady_clock::now();
		std::chrono::duration<double> elapsed_second = end - start;
		los.wyswietl();
		cout << "---- Sortowanie przez scalanie ----\n Czas: " << elapsed_second.count() << "s\n";
	}
}
