/*
 * estrutura.c
 *
 *  Created on: 16/06/2011
 *      Author: cuki
 */
#include <stdio.h>

#define MAX 3
#define ENABLED 1;
#define DISABLED 0;

struct elev {
	int endereco;
	short estado;
	long altura;
}elevador[MAX];

void atribui (struct elev *p);
void imprime (struct elev *p);
int main (void) {

	atribui (&elevador[0]);
	imprime (&elevador[0]);

	return 0;
}

void atribui (struct elev *p){
	int i;

	for (i = 0; i < MAX; i++){
		p->altura = 0;
		p->endereco = 0xB0 + (2 * i);
		p->estado = ENABLED;
		p++;
	}
}

void imprime (struct elev *p){
	int i;
	for (i = 0; i < MAX; i++){
		printf ("\n");
		printf ("Elevador %d\n", i);
		printf ("|-Endereco: %d\n", p->endereco);
		printf ("|-Estado: ");

	}
}

//#define MAX 3
//#define ENABLED 1;
//#define DISABLED 0;
//
//struct elev {
//	int endereco;
//	short estado;
//	long altura;
//};
//
//void atribui (struct elev *p);
//int main (void) {
//	struct elev elevador[MAX];
//
//	atribui (&elevador[0]);
//
//	return 0;
//}
//
//void atribui (struct elev *p){
//	int i;
//
//	for (i = 0; i < MAX; i++){
//		p->altura = 0;
//		p->endereco = 0xB0 + (2 * i);
//		p->estado = ENABLED;
//		p++;
//	}
//}


//#define MAX 16
//
//struct elev {
//	int endereco;
//	short estado;
//	long altura;
//}elevador[MAX];
//
//int main (void) {
//	struct elev *p;
//	int i;
//
//	p = &elevador[0];
//
//	for (i = 0; i < MAX; i++) {
//		p->endereco = 10;
//		p++;
//	}
//
//	return 0;
//}
