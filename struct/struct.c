/*
 * struct.c
 *
 *  Created on: 14/06/2011
 *      Author: cuki
 */
#include <stdio.h>

#define MAX 16;

struct elev {
	int endereco;
	short estado;
	long altura;
}elevador[MAX];

int main (void) {
	int i;
	for (i = 0; i < MAX; i++){
		elevador.endereco[i] = 0xB0 + (2 * i);
	}
	return 0;
}
