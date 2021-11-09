#include "przestawieniowy.h"

string przestawieniowy::przestawienie(string a) {
	for (int i = 0; i < a.length(); i++) {
		if (i % 2 == 0) {
			swap(a[i], a[i + 1]);
		}
	}
	return a;
}