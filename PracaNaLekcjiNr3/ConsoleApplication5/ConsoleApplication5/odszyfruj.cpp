#include "odszyfruj.h"

void odszyfruj::odszyfrowanie(string a) {

	for (int i = 0; i <= 25; i++) {
		for (int j = 0; j < a.length(); j++) {
			if ((unsigned char)a[j] >= 97 && (unsigned char)a[j] <= 122) {
				a[j] = (unsigned char)a[j] - i;
				if ((unsigned char)a[j] < 97) {
					a[j] = (unsigned char)a[j] + 26;
				}
			}
		}
		cout << a << endl;
	}
}

