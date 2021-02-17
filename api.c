#include "api.h"

struct pilha_generica
{
    void *item[N];
    int topo;
};

Pilha *cria_pilha()
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->topo = 0;

    return p;
}

void push_operando(int operando, Pilha *p)
{
    if (p->topo == 100)
        return;

    p->item[p->topo] = &operando;

    p->topo++;
}

// void push_operador(char operador, Pilha *p)
// {
//     if (p->topo == 100)
//         return;

//     p->item[p->topo] = (char*)operador;

//     p->topo++;
// }

void *pop(Pilha *p)
{
    if (p->topo == 0)
        return NULL;

    void *a = p->item[p->topo - 1];

    p->topo--;

    return a;
}

void imprime_pilha_double(Pilha *pilha)
{

    printf("Pilha int:\n");
    for (int i = 0; i < pilha->topo; i++)
    {

        int *temp = pilha->item[i];
        printf("%d ", *temp);
    }

    printf("\n");
}

// void imprime_pilha_char(Pilha *pilha)
// {
//     printf("Pilha char:/n");
//     for (int i = 0; i < pilha->topo; i++)
//         printf("%c ", *(char*)pilha->item[i]);
//     printf("/n");
// }