/*
 * teste.c
 *
 *  Created on: 04/06/2013
 *      Author: cuki
 */
#include <stdio.h>

typedef struct faseStr {
	unsigned faseAtiva :1;
	unsigned char nrDias;
} faseType;

typedef struct setorStr {
	faseType fase[6];
	unsigned char faseAtual;
	unsigned char diasIrrigado;
	unsigned fimPrograma :1;
} setorType;

int main(void) {

	setorType setor[6];
	unsigned char cont = 0, cont2 = 0, nrSetores = 3, contaSetor = 0,
			setorFaseAux = 0, contaDia;

	for (cont = 0; cont <= 5; ++cont) {
		if (cont < nrSetores) {
			setor[cont].fimPrograma = 0;
			setor[cont].faseAtual = 0;
		} else {
			setor[cont].fimPrograma = 1;
			setor[cont].faseAtual = 255;
		}
		setor[cont].diasIrrigado = 0;
		for (cont2 = 0; cont2 <= 5; ++cont2) {
			if (!setor[cont].fimPrograma) {
				setor[cont].fase[cont2].faseAtiva = (cont2 == 0) ? 1 : 0;
				setor[cont].fase[cont2].nrDias = (cont2 == 0) ? cont + 1 : 0;
			} else {
				setor[cont].fase[cont2].faseAtiva = 0;
				setor[cont].fase[cont2].nrDias = 255;
			}
		}
	}

	for (contaDia = 0; contaDia < 4; ++contaDia) {
		for (contaSetor = 0; contaSetor < nrSetores; ++contaSetor) {
			if (contaSetor != setorFaseAux) {
				if (!setor[setorFaseAux].fimPrograma) {
					if ((setorFaseAux - contaSetor == 1)
							|| (contaSetor - setorFaseAux == 1)
							|| setorFaseAux == 1
							|| setorFaseAux == nrSetores - 1) {
						setor[setorFaseAux].diasIrrigado++;
					}
					if (setor[setorFaseAux].diasIrrigado
							>= setor[setorFaseAux].fase[setor[setorFaseAux].faseAtual].nrDias) {
						setor[setorFaseAux].diasIrrigado = 0;
						setor[setorFaseAux].fase[setor[setorFaseAux].faseAtual].faseAtiva =
								0;
						while (!(setor[setorFaseAux].fase[setor[setorFaseAux].faseAtual].faseAtiva)
								&& !setor[setorFaseAux].fimPrograma) {
							setor[setorFaseAux].faseAtual++;
							if (setor[setorFaseAux].faseAtual > 5) {
								setor[setorFaseAux].faseAtual = 1;
								setor[setorFaseAux].fimPrograma = 1;
							}
						}
					}
				}
				setorFaseAux = contaSetor;
			}
		}
	}
	return 0;
}

/*#include<stdio.h>

 typedef struct setorStr {
 short anguloInicial;
 short anguloFinal;
 } setorType;

 int main(void) {

 short angulo, saida, setorCont, logica;
 setorType setor[2];

 setor[0].anguloInicial = 10;
 setor[0].anguloFinal = 80;
 setor[1].anguloInicial = 50;
 setor[1].anguloFinal = 100;

 for (angulo = 0; angulo < 360; ++angulo) {
 saida = 1;
 for (setorCont = 0; setorCont < 2; setorCont++) {
 saida &= !((angulo >= setor[setorCont].anguloInicial)
 & (angulo <= setor[setorCont].anguloFinal));
 logica = !((angulo >= setor[setorCont].anguloInicial)
 & (angulo <= setor[setorCont].anguloFinal));
 saida &= logica;
 }
 printf("%03d° %1d\n", angulo, saida);
 }

 return 0;
 }*/

/*int main(void) {
 printf("hjklhjkhjklhkjl");
 return 0;
 }*/

/* *#include<stdio.h>

 int *func(void) {
 int i = 45, *ptr;

 ptr = &i;

 return ptr;
 }

 int main(void) {
 int *nr;

 nr = func();

 printf("%d", *nr);

 return 0;
 }*/

/*
 #include<stdio.h>
 #include<string.h>

 unsigned char decToBcd(unsigned char val) {
 return ((val / 10 * 16) + (val % 10));
 }

 unsigned char bcdToDec(unsigned char val) {
 return ((val / 16 * 10) + (val % 16));
 }

 char *toBin(unsigned char val) {
 unsigned char cont = 0, aux = 0;
 char *s;

 for (aux = 1, cont = 0; cont < 8; aux <<= 1, cont++) {
 // s[cont] = (val && aux) ? '1' : '0';
 printf("%x %x  ", cont, aux);
 }

 return s;
 }

 int main(void) {

 unsigned char valor = 12;
 char *str;

 str = (char *) toBin(valor);

 printf("%s", str);

 return 0;


 }*/

/* #include <stdio.h>
 // Curso C Progressivo: www.cprogessivo.net
 // O melhor curso de C! Online e gratuito !
 // Artigos, apostilas, tutoriais e vídeo-aulas sobre
 // a linguagem de programação C !

 int main(void)


 {
 char caractere;
 int inteiro;
 float Float;
 double Double;

 printf("Caractere: %d bytes \t em %d\n", sizeof(caractere), &caractere);
 printf("Inteiro: %d bytes \t em %d\n", sizeof(inteiro), &inteiro);
 printf("Float: %d bytes \t em %d\n", sizeof(Float), &Float);
 printf("Double: %d bytes \t em %d\n", sizeof(Double), &Double);

 return 0;


 } */

/* #include <stdio.h>
 // Curso C Progressivo: www.cprogessivo.net
 // O melhor curso de C! Online e gratuito !
 // Artigos, apostilas, tutoriais e vídeo-aulas sobre
 // a linguagem de programação C !


 int main(void)


 {
 printf("Char: %d bytes\n", sizeof(char));
 printf("Int: %d bytes\n", sizeof(int));
 printf("Float: %d bytes\n", sizeof(float));
 printf("Double: %d bytes\n", sizeof(double));

 return 0;


 } */

/* #include <stdio.h>

 // const int tabela [] = {
 int const tabela [] = {
 10,
 13,
 45
 };

 int main(void) {
 int cont;

 printf("%d\n", sizeof(tabela));

 for(cont = 0; cont < sizeof(tabela)>>2; cont++) {
 printf(" %d", tabela[cont]);
 }

 return 0;
 } */

/* #include <stdio.h>

 int main(int argv, char **argc) {
 printf("%d\n\r", argv);
 int turnoRega = atoi(argc[1]);
 int dia = 0;
 if (argv > 1) {
 for (dia = 0; dia < 10; dia++) {
 if (!(dia % (turnoRega + 1)))
 printf("%d ", dia);
 }
 } else {
 printf("erro");
 return 1;
 }
 return 0;
 } */

// #define resol 1024
/* int main(void) {
 int cont = 0;
 for(cont = 0; cont < 20; cont++){
 printf("%-2d\n", cont);
 }
 return 0;
 } */

/* int main(void) {
 int cont = 0;
 for (cont = 0; cont <= resol; cont++) {
 if (!(cont % (resol >> 2)))
 printf(" %d", cont);
 }
 return 0;
 }
 */

/*#include<stdio.h>
 #include<stdlib.h>

 int main(int argc, char **argv) {

 char str[10] = "-45.9";
 float nr;

 nr = atof(str);
 printf("\n%s : %f", str, nr);
 return 0;
 }*/

//#include <stdio.h>      /* printf, NULL */
//#include <stdlib.h>     /* strtof */
//
//int main ()
//{
//  char szOrbits[15] = "686.97 365.24";
//  char *pEnd;
//  float f1, f2;
//  f1 = strtof (szOrbits, &pEnd);
//  f2 = strtof (pEnd, NULL);
//  printf ("One martian year takes %.2f Earth years.\n%f %f", f1/f2, f1, f2);
//  return 0;
//}
