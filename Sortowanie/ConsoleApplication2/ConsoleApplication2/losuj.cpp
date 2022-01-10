#include "losuj.h"
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int pom[1000];

void losuj::losowanie() {
	srand(time(NULL));

	for (int i = 0; i < 1000; i++) {
		vec.push_back(rand() % 1000);
	}
}

void losuj::babelkowe() {
	for (int i = 0; i < 999; i++) {
		for (int j = 0; j < 999; j++) {
			if (vec[j] > vec[j + 1]) {
				swap(vec[j], vec[j + 1]);
			}
		}
	}
}

void losuj::wstawianie() {
	int pom, j;
	for (int i = 1; i < 1000; i++)
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

void losuj::wybor() {
	for (int i = 0; i < 999; i++){
		int min = i;
		for (int j = i + 1; j < 1000; j++) {
			if (vec[j] < vec[min]) {
				min = j;
			}
		}
		swap(vec[i], vec[min]);
	}
}

void losuj::szybkie(int l, int p) {
	int i, j, piwot;
	
	i = (l + p) / 2;
	piwot = vec[i]; vec[i] = vec[p];
	for (j = i = l; i < p; i++)
		if (vec[i] < piwot)
		{
			swap(vec[i], vec[j]);
			j++;
		}
	vec[p] = vec[j]; vec[j] = piwot;

	if (l < j - 1) {
		szybkie(l, j - 1);
	}
	if (j + 1 < p) {
		szybkie(j + 1, p);
	}
}

void losuj::sortowanie() {
	sort(vec.begin(), vec.end());
}

void losuj::wyswietl(){
	for (int i = 0; i < 1000; i++) {
		cout << i + 1 << ". ";
		cout << vec[i] << endl;
	}
}

void losuj::scalanie(int lewy, int srodek, int prawy) //funkcja scalaj¹ca dwie tablice
{
	int i = lewy;
	int j = srodek + 1;
	for (int i = lewy; i <= prawy; i++) { //do dodatkowej tablicy kopiujemy podzielony na praw¹ i lew¹ czêœæ wektora
		pom[i] = vec[i];
	}
	for (int k = lewy; k <= prawy; k++) { //pêtla scalaj¹ca tablice w wektor
		if (i <= srodek)
			if (j <= prawy)
				if (pom[j] < pom[i])
					vec[k] = pom[j++];
				else
					vec[k] = pom[i++];
			else
				vec[k] = pom[i++];
		else
			vec[k] = pom[j++];
	}
}

void losuj::sortuj_scal(int lewy, int prawy)
{
	if (prawy <= lewy) return; //posortowany jeden element
	int srodek = (prawy + lewy) / 2; //wydzielanie œrodka
	sortuj_scal(lewy, srodek); //dzielenie wektora na dwie czêœci
	sortuj_scal(srodek + 1, prawy);
	scalanie(lewy, srodek, prawy); //scalanie posortownych tablic do wektora
}