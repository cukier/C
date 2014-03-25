/*
 * main.c
 *
 *  Created on: 30/01/2014
 *      Author: cuki
 */

#include <stdio.h>

int nrSetores = 3;
int anguloTotal = 360;
int cont = 0;
int anguloSetor[6] = { 120, 120, 120, 360, 360, 360 };

struct setorStr {
	int anguloFinal;
};
typedef struct setorStr setorType;

setorType setor[6];

int somaAngulos(int *angulos) {

	int cont = 0, acumulo = 0;

	for (cont = 0; cont < nrSetores; cont++) {
		acumulo += angulos[cont];
	}

	return acumulo;
}

int main(int argc, char **argv) {

	int acumulo, setorAux;

	acumulo = somaAngulos(anguloSetor);
	if (acumulo != anguloTotal) {
		setorAux = nrSetores;
		if (acumulo != anguloTotal) {
			while (somaAngulos(anguloSetor) != anguloTotal) {
				anguloSetor[setorAux]--;
				if (anguloSetor[setorAux] == 1) {
					setorAux--;
					if (setorAux == 1) {
						for (cont = 0; cont < nrSetores; cont++) {
							anguloSetor[cont] = anguloTotal / nrSetores;
						}
					}
				}
			}
		} else if (acumulo < anguloTotal) {
			while (somaAngulos(anguloSetor) < anguloTotal) {
				anguloSetor[setorAux]++;
			}
		}
		acumulo = 0;
		for (cont = 0; cont < 6; cont++) {
			acumulo += anguloSetor[cont];
			if (cont <= nrSetores)
				setor[cont].anguloFinal = acumulo;
			else
				setor[cont].anguloFinal = anguloTotal;
		}
	}
	return 0;
}
