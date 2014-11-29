/*
 * aloca.c
 *
 *  Created on: 07/04/2014
 *      Author: cuki
 */

#include <stdio.h>
#include <stdlib.h>

#define size 5

int **aloca(int y, int x);

int main() {
	int i, j;
	int **m;

	m = aloca(size, size);

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			m[i][j] = 1;
		}
	}

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

	return 0;
}

int **aloca(int y, int x) {
	int i;
	int **matriz;

//	matriz = (int **) malloc(y * sizeof(int*)); //isso
	matriz = (int **) malloc(y * sizeof(int)); //ou isso
	for (i = 0; i < y; i++)
		matriz[i] = (int *) malloc(x * sizeof(int));
	if (matriz == NULL) {
		printf("Erro ao alocar!\n");
		getchar();
		exit(1);
	}

	for (i = 0; i < y; i++) {
		matriz[i] = (int *) malloc(x * sizeof(int));
		if (matriz[i] == NULL) {
			printf("Erro ao alocar!\n");
			getchar();
			exit(1);
		}
	}

	return matriz;
}

