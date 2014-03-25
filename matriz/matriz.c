/*
 * matriz.c
 *
 *  Created on: 30/08/2012
 *      Author: Cuki
 */
#include<stdio.h>

int main() {
	int A[4][4], i, j, soma;

	soma = 0;

	printf("Insira os valores a serem armazenados na matriz.");
	printf("\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &A[i][j]);
			if (A[i][j] = 0) {
				soma = soma + 1;
			}
		}
	}
	printf("O total de elementos nulos existentes dentro da matriz é%d", soma);
	return 0;
}
