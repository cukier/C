/*
 * expression.c
 *
 *  Created on: 10/09/2012
 *      Author: Cuki
 */

#include <stdio.h>

int sentido = 0;
int controle = 0;
int anguloFinal = 45;
int anguloAtual = 0;
int cont = 0;

void function(void);

int main(int argc, char **argv) {

	for (cont = -10; cont <= anguloFinal + 10; cont++) {
		sentido = 1;
		function();
	}
	puts("");
	for (; cont != -10; cont--) {
		sentido = 0;
		function();
	}

	return 0;
}

void function(void) {
	if (cont < 0)
		anguloAtual = 360 + cont;
	else
		anguloAtual = cont;
	if (controle && ((sentido && anguloAtual >= anguloFinal) || (!sentido && anguloAtual == 0)))
		controle = 0;
	else if (!controle && ( (sentido && anguloAtual == 0) || (!sentido && anguloAtual <= anguloFinal) ) )
		controle = 1;
	printf("%d:%d\n", anguloAtual, controle);
}
