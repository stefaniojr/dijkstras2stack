#include "api.h"

int main()
{
    Pilha *p1 = cria_pilha();
    Pilha *p2 = cria_pilha();

    push_operando(2, p1);
    push_operando(5, p1);
    push_operando(9, p1);
    // push_operador('+', p2);
    // push_operador('-', p2);

    imprime_pilha_double(p1);
    // imprime_pilha_char(p2);

    return 0;
}