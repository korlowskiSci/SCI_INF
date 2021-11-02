#include <iostream>
#include <algorithm>
#include <string>


using namespace std;
string podstawieniowy(string a) {
	int c;
	cout << "O ile znakow przesunac litery: ";
	cin >> c;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] >= 97 && a[1] <= 122) {
			a[i] = a[i] + c;
			if (a[i] > 122) {
				a[i] = a[i] % 123 + 97;
			}
		}
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

string cofnij1(string a) {

	for (int i = 0; i < a.length(); i++) {
		a[i] = a[i] + c;
		if (a[i] < 97) {
			a[i] = a[i] % 123 + 97;
		}
	}
	return a;
}

int main()
{
	string tekst;
	int b = 0;
	char c;

	cout << "Podaj ciag malych liter: ";
	getline(cin, tekst);

		cout << "\n1. Szyfr podstawieniowy(szyfr cezara).\n";
		cout << "2. Szyfr przestawieniowy.\n";
		cout << "3. Szyfr podstawieniowy i szyfr przestawieniowy.\n";
		cout << "4. Odszyfruj teskt.\n";
		cout << "Wybor: ";
		cin >> b;

		if (b == 1) {
			cout << podstawieniowy(tekst);
			cout << "Czy chcesz cofnac szyfr(t/n): ";
			cin >> c;
			if (c = 't') {
				cout << cofnij1(tekst);
			}
		}
		if (b == 2) {
			cout << przestawieniowy(tekst);
			cout << "Czy chcesz cofnac szyfr(t/n): ";
			cin >> c;
			if (c = 't') {
				cout << cofnij2(tekst);
			}
		}
		if (b == 3) {
			cout << podstawieniowy(tekst);
			cout << przestawieniowy(tekst);
			cout << "Czy chcesz cofnac szyfr(t/n): ";
			cin >> c;
			if (c = 't') {
				cout << cofnij3(tekst);
			}
		}
	
}