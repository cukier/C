/* 
 * File:   main.c
 * Author: cuki
 *
 * Created on 21 de Junho de 2011, 18:20
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

typedef struct noh {
    int info;
    struct noh *prox;
}novo_noh;

struct noh *prim = NULL;
struct noh *ultm = NULL;

struct noh cria (int novo_info);
void add_noh (struct noh *novo, struct noh **p_prim, struct noh **p_ultimo);

int main(int argc, char** argv) {
    
    

    return (EXIT_SUCCESS);
}


struct noh cria (int novo_info) {

    novo_noh.info = novo_info;
    
    return novo_noh;
}

/*
 Cria uma lista em ordem crescente
 */
void add_noh (struct noh *novo, struct noh **p_prim, struct noh **p_ultimo) {
    
    struct noh *aux = NULL;
    
    if (*p_prim == NULL) {
        novo->prox = NULL;
        *p_prim = novo;
        *p_ultimo = novo;
    }
    else {
        if (*p_prim->prox == NULL) {
            if (novo->info < *p_prim->info) {
                novo->prox = *p_prim;
                *p_prim = novo;
            }
            else {
                *p_ultimo = novo;
                *p_prim->prox = novo;
                *p_ultimo->prox = NULL;
            }
        }
        else {
            for (aux = *p_prim; novo->info >= aux->info && aux->prox != NULL; aux++) ;
            novo->prox = aux->prox;
            aux->prox = novo;
        }
    }
}