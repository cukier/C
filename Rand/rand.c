/*
 * rand.c
 *
 *  Created on: 24/10/2011
 *      Author: cuki
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int is_prime_number(int n) {
	long c;

	if (n < 2)
		return 0;

	for (c = 2; c < n; c++) {
		if ((n % c) == 0)
			return 0;
	}
	return 1;
}

int main() {
	short nrPrimo = 0;
//	int var;

	srand(time(NULL));

	nrPrimo = rand();
	while (!is_prime_number(nrPrimo)) {
		nrPrimo = rand();
	}

	printf("%d", nrPrimo);
//	for (var = nrPrimo; !var; --var) {
//		printf("%f", (float) nrPrimo / var);
//	}

	return 0;
}
