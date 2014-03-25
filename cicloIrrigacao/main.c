/*
 * main.c
 *
 *  Created on: 04/09/2013
 *      Author: cuki
 */

#include<stdio.h>

#define true 	1
#define false 	0

typedef unsigned char bool;

typedef struct faseStr {
	int lamina;
	int nrDias;
	int turnoRega;
	bool bInjetora;
	bool faseAtiva;
} faseType;

typedef struct setorStr {
	faseType fase[7];
	int angulo;
	int faseAtual;
	bool fimPrograma;
} setorType;

bool temQirrigar(int diaAtual, int nrSetores, int diasIrrigado, struct setorStr *setor) {
	int cont;

	for (cont = 1; cont <= nrSetores; ++cont) {

		if(diaAtual * (setor->fase[setor->faseAtual].turnoRega + 1))

	}
}

int main(int argc, char **argv) {

	int anguloAtual;

	return 0;
}
