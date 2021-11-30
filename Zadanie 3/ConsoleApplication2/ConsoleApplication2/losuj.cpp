#include "losuj.h"
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
void losuj::losowanie() {
	srand(time(NULL));

	for (int i = 0; i < 100; i++) {
		vec.push_back(rand() % 1000);
	}
}

void losuj::babelkowe() {
	for (int i = 0; i < 99; i++) {
		for (int j = 0; j < 99; j++) {
			if (vec[j] > vec[j + 1]) {
				swap(vec[j], vec[j + 1]);
			}
		}
	}
}

void losuj::wstawianie() {
	int pom, j;
	for (int i = 1; i < 100; i++)
	{
		pom = vec[i];
		j = i - 1;
		while (j >= 0 && vec[j] > pom)
		{
			vec[j + 1] = vec[j];
			j--;
		}
		vec[j + 1] = pom;
	}
}

void losuj::wyswietl(){
	for (int i = 0; i < 100; i++) {
		cout << i + 1 << ". ";
		cout << vec[i] << endl;
	}
}