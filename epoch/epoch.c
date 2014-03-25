/*
 * epoch.c
 *
 *  Created on: 21/09/2012
 *      Author: cuki
 */
#include <stdio.h>
#include <stdlib.h>

char dia, hora, minuto, segundo;
float tempo;
unsigned int hora2;
unsigned char hora3;

int main(int argc, char **argv) {
	if (argc > 1) {
		tempo = atof(argv[1]);
		dia = (char) (tempo);
		hora = (char) ((tempo - dia) * 24);
		minuto = (char) ((((tempo - dia) * 24) - hora) * 60);
		segundo = (char) ((((((tempo - dia) * 24) - hora) * 60) - minuto) * 60);
		hora2 = -1;
		hora3 = -1;
		puts("");
		printf("Entrada: %.3f dias:\n", tempo);
		printf("%d dias, %d horas, %d minutos, %d segundos\n%d %d", dia, hora,
				minuto, segundo, hora2, hora3);
	} else {
		puts("");
		printf("Not enough arguments!\n");
	}
	return 0;
}

