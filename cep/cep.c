/*
 * cep.c
 *
 *  Created on: 27/05/2011
 *      Author: cuki
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 10
#define true 1

struct addr {
	char name[30];
	char rua[30];
	unsigned long int cep;
} addr_info[MAX];

void init_list (void), enter (void);
void delete (void);
void list (void);
int menu_select (void);
int find_free (void);

int main (void) {
	char choice;

	init_list ();

	while (true) {
		choice = menu_select ();
		switch (choice) {
			case 1: enter ();
				break;
			case 2: delete ();
				break;
			case 3: list ();
				break;
			case 4: exit (0);
		}
	}
	return 0;
}

void init_list (void) {
	register int t;

	for (t = 0; t < MAX; ++t)
		addr_info[t].name[0] = '\0';
}

int menu_select (void) {
	char s[80];
	int c;

	printf ("1. Inserir Nome\n");
	printf ("2. Excluir Nome\n");
	printf ("3. Listar o arquivo\n");
	printf ("4. Sair\n");

	do {
		printf ("\nDigite sua escolha: ");
		gets (s);
		c = atoi (s);
	} while (c < 0 || c > 4);
	return c;
}

void enter (void) {
	int slot;
	char s[80];

	slot = find_free ();
	if (slot == -1) {
		printf ("\nLista cheia");
		return;
	}

	printf ("Digite o nome: ");
	gets (addr_info[slot].name);

	printf ("Digite a rua: ");
	gets (addr_info[slot].rua);

	printf ("Digite o cep: ");
	gets (s);
	addr_info[slot].cep = strtoul (s, '\0', 10);
}

int find_free (void) {
	register int t;
	for (t = 0; addr_info[t].name[0] && t < MAX; ++t);
	if (t == MAX)
		return -1;
	return t;
}

void delete (void) {
	register int slot;
	char s[80];

	printf ("Digite o registro #: ");
	gets (s);
	slot = atoi (s);
	if (slot >= 0 && slot < MAX)
		addr_info[slot].name[0] = '\0';
}

void list (void) {
	register int t;

	for (t = 0; t < MAX; ++t) {
		if (addr_info[t].name[0]) {
			printf ("%s\n", addr_info[t].name);
			printf ("%s\n", addr_info[t].rua);
			printf ("%Lu\n", addr_info[t].cep);
		}
	}
}
