#include "api.h"

int main()
{
    Pilha *p1 = cria_pilha();
    Pilha *p2 = cria_pilha();

    push_operando(2, p1);
    push_operando(5, p1);
    push_operando(9, p1);
    push_operando(11, p1);
    pop(p1);
    pop(p1);
    push_operador('+', p2);
    push_operador('-', p2);
    pop(p2);

    imprime_pilha_double(p1);
    imprime_pilha_char(p2);
    libera_pilha(p1);
    libera_pilha(p2);
    free(p1);
    free(p2);

    return 0;
}