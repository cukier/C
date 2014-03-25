/*
 * lista.c
 *
 *  Created on: 03/06/2011
 *      Author: cuki
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct address {
    int num;
    struct no *next;
}list_entry;

struct address nova (int num) {
	static struct address celula;
	celula = (struct address *) malloc (sizeof (struct address));
	printf ("Insira um numero inteiro");
	scanf ("%d", &celula.num);
	return celula;
}

void dls_store (struct address* i, struct address **start) {
	struct address *old, *p;

	if (*start == NULL) {
		i->next = NULL;
		*start = i;
		return;
	}

	old = NULL;
	p = *start;
	while (p) {
		if (strcmp(((char)p->num, (char)i->num) < 0)) {
			old = p;
			p = p->next;
		}
	}
}
void entra(void) {
	struct address *info;

	for (;;) {
		info = (struct address *)malloc(sizeof(list_entry));
		if (!info){
			return;
		}

		printf ("\nInfo: ");
		fflush (stdin);
		scanf ("%d", &info->num);

		dls_store (info, *start, *last);
	}
}
void insere_no_fim (struct noh *novo, struct noh **ult) {
	if (!*ult)
		*ult = novo;
	else
		(*ult) -> prox = novo;
	novo -> prox = NULL;
}

int main (void) {
	struct noh *prim = NULL;
	struct noh *A = NULL;
	struct noh *B = NULL;

	insere_no_fim (A, prim);
	insere_no_fim (B, prim);
}
