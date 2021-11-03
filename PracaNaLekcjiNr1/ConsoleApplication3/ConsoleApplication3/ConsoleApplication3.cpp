#include <iostream>
#include <algorithm>
#include <string>


using namespace std;
string podstawieniowy(string a) {
	int c;
	cout << "O ile znakow przesunac litery: ";
	cin >> c;
	if(c > 0 && c <= 26){
		for (int i = 0; i < a.length(); i++) {
				a[i] = a[i] + c;
				if (a[i] > 122) {
					a[i] = a[i] % 123 + 97;
				}
		}
	}else{
		cout << "Wprowadziles niepoprawna liczbe.\n";
	}
	return a;
}

string przestawieniowy(string a) {
	for (int i = 0; i < a.length(); i++) {
		if (i % 2 == 0) {
			swap(a[i], a[i+1]);
		}
	}
	return a;
}

string odszyfruj(string a) {
	string wynik;
	string q = " ";
	for(int i = 0; i <= 26; i++){
		for (int j = 0; j < a.length(); j++) {
			a[j] = a[j] - i;
			if (a[j] < 97) {
				a[j] = a[j] % 71 + 97;
			}
		}
		wynik = wynik + a + q;
	}
	return wynik;
}

int main()
{
	string tekst;
	int b = 0;

	cout << "Podaj ciag malych liter: ";
	getline(cin, tekst);

		cout << "1. Szyfr podstawieniowy(szyfr cezara).\n";
		cout << "2. Szyfr przestawieniowy.\n";
		cout << "3. Szyfr podstawieniowy i szyfr przestawieniowy.\n";
		cout << "4. Odszyfruj tekst.\n";
		cout << "Wybor: ";
		cin >> b;

		if (b == 1) {
			cout << podstawieniowy(tekst);
		}
		if (b == 2) {
			cout << przestawieniowy(tekst);
		}
		if (b == 3) {
			cout << podstawieniowy(tekst);
			cout << przestawieniowy(tekst);
		}
		if (b == 4) {
			cout << odszyfruj(tekst);
		}
	
}
