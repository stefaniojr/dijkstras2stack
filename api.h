#ifndef API_H_
#define API_H_

#include <stdio.h>
#include <stdlib.h>

#define N 100

typedef struct pilha_generica Pilha;

Pilha *cria_pilha();
void push_operando(double operando, Pilha *p);
void push_operador(char operador, Pilha *p);
void *pop(Pilha *p);
void imprime_pilha_double(Pilha *pilha);
void imprime_pilha_char(Pilha *pilha);
void libera_pilha(Pilha *p);

#endif /* API_H_ */