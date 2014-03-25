/*
 * main.c
 *
 *  Created on: 04/06/2013
 *      Author: cuki
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	FILE *in;
	char *mode = "r", str[10], cont = 0, c, nrAchados = 0;
	float nrs[10];

	in = fopen("capture.txt", mode);

	if (in == NULL ) {
		printf("Erro ao abrir o arquivo");
		return (1);
	} else {
		while (!feof(in)) {
			c = fgetc(in);
			if ((c == '-') || (c >= 48 && c <= 57) || (c == '.')) {
				str[cont++] = c;
			} else if (cont) {
				str[cont] = '\0';
				nrs[nrAchados++] = atof(str);
				cont = 0;
			}
		}
		printf("O total de nrs achados foi %d:\n", nrAchados);
		for (cont = 0; cont < nrAchados; cont++) {
			printf("%.2f ", nrs[cont]);
		}
	}
	return (0);
}

