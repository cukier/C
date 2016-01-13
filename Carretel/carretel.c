#include <stdio.h>
#define PI 3.1415926535897932
//#define debug(X, Y) fprintf(fd, X, Y)
#define debug(X,Y,..) printf(X,Y,..)

int main(void) {

	float alt_mang, amassamento, comprimento_camada, comprimento_espira, diam, diam_mang, diam_tambor;
	int epc, cont;
	FILE *fd;

	fd = fopen("carretel.txt", "w+");
	diam_mang = 90;
	amassamento = 0.080555;
	diam_tambor = 1359;
	epc = 13;
	alt_mang = (float) (1 - amassamento) * diam_mang;
	debug("Altura da mangueira   : %.2f\n", alt_mang);
	debug("Diametro da mangueira : %.2f\n", diam_mang);
	debug("Diametro do tambor    : %.2f\n", diam_tambor);
	
	for (diam = 0, cont = 0; cont < 5; ++cont) {
		if (cont == 0)
			diam = (float) (diam_tambor + alt_mang);
		else
			diam += (float) (2 * alt_mang);
		comprimento_espira = (float) diam * PI;
		comprimento_camada = (float) comprimento_espira * epc;
		debug("Camada %u\n", cont + 1);
		debug("  Diam                : %.2f\n", diam);
		debug("  Comprimento Espira  : %.2f\n", comprimento_espira);
		debug("  Comprimento Camada  : %.2f\n", comprimento_camada);
	}

	return 0;
}

