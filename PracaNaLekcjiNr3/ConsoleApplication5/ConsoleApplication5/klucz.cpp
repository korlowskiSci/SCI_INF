#include "klucz.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int klucz::generuj() {
	int p, q, n, euler;
	int d = 0;
	int e = 0;
	int ax, bx, temp;
	int tab[10] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
	srand(time(NULL));


	p = tab[rand() % 9 + 0];
	q = tab[rand() % 9 + 0];

	n = p * q;
	euler = (p - 1) * (q - 1);
	
	for (int i = 2; i <= euler; i++)
	{
		ax = i; bx = euler;
		while (bx)
		{
			temp = bx;
			bx = ax % bx;
			ax = temp;
		}
		if (ax == 1) e = i;
	}

	while((d * e) % euler != 1) {
		d = d + 1;
	}


	std::cout << euler << std::endl;
	std::cout << e << std::endl;
	std::cout << d << std::endl;
	return 0;
}