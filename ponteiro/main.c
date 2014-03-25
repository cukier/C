/*
 * main.c
 *
 *  Created on: 30/05/2011
 *      Author: cuki
 */
#include <stdio.h>

#define tam 5

void ache (int *n_ptr) {
	int col[tam] = {0xB0, 0xB1, 1, 0xB3, 1};
	int j = 0;
	int i = 0;

	for (i = 0; i < tam; i++) {
		if (col[i] == 1) {
			*(n_ptr + j) = i;
			*(n_ptr + (j+1)) = '\0';
			j++;
		}
	}
}


int main (void) {
	int end[tam];
	int i = 0;
	end[0] = '\0';

	ache (end);

	for (i = 0; i < tam; i++) {
		printf ("\n%d", end[i]);
	}
	return 0;
}
