#include "podstawieniowy.h"

string podstawieniowy::podstawienie(string a) {
	int c;
	cout << "O ile znakow przesunac litery: ";
	cin >> c;
	if (c > 0 && c <= 26) {
		for (int i = 0; i < a.length(); i++) {
			if ((unsigned char)a[i] >= 97 && (unsigned char)a[i] <= 122) {
				a[i] = (unsigned char)a[i] + c;
				if ((unsigned char)a[i] > 122) {
					a[i] = (unsigned char)a[i] % 123 + 97;
				}
			}
		}
	}
	else {
		cout << "Wprowadziles niepoprawna liczbe.\n";
	}
	return a;
}