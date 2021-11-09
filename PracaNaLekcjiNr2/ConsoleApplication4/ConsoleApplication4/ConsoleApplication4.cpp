#include <iostream>
#include <string>
#include "odszyfruj.h"
#include "podstawieniowy.h"
#include "przestawieniowy.h"

using namespace std;

int main()
{
	string a;
	int b = 0;

	cout << "Podaj ciag malych liter: ";
	getline(cin, a);

	cout << "1. Szyfr podstawieniowy(szyfr cezara).\n";
	cout << "2. Szyfr przestawieniowy.\n";
	cout << "3. Szyfr podstawieniowy i szyfr przestawieniowy.\n";
	cout << "4. Odszyfruj tekst.\n";
	cout << "Wybor: ";
	cin >> b;

	if (b == 1) {
		podstawieniowy pod;
		cout << pod.podstawienie(a);
	}
	if (b == 2) {
		przestawieniowy prze;
		cout << prze.przestawienie(a);
	}
	if (b == 3) {
		przestawieniowy prze;
		podstawieniowy pod;
		cout << pod.podstawienie(a);
		cout << prze.przestawienie(a);
	}
	if (b == 4) {
		odszyfruj od;
	    od.odszyfrowanie(a);
	}

}
