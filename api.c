#include "api.h"

struct pilha_generica
{
    void *item[100];
    int topo;
};

Pilha *cria_pilha()
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->topo = 0;

    return p;
}

void push_operando(double operando, Pilha *p)
{
    if (p->topo == 100)
        return;

    void *a = malloc(sizeof(double));
    *(double *)a = operando;
    p->item[p->topo] = a;

    p->topo++;
}

void push_operador(char operador, Pilha *p)
{
    if (p->topo == 100)
        return;

    void *a = malloc(sizeof(char));
    *(char *)a = operador;
    p->item[p->topo] = a;

    p->topo++;
}

void *pop(Pilha *p)
{
    if (p->topo == 0)
        return NULL;

    void *a = p->item[p->topo - 1];
    free(a);
    p->topo--;
}

void libera_pilha(Pilha *p)
{
    while (p->topo != 0)
        pop(p);
}

void imprime_pilha_double(Pilha *pilha)
{

    for (int i = 0; i < pilha->topo; i++)
        printf("%lf ", *(double *)pilha->item[i]);
    printf("\n");
}

void imprime_pilha_char(Pilha *pilha)
{
    printf("Pilha char:\n");
    for (int i = 0; i < pilha->topo; i++)
        printf("%c ", *(char *)pilha->item[i]);
    printf("\n");
}