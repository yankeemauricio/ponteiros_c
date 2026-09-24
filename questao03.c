#include <stdio.h>

int main()
{
    int i=3, j=5, *p, *q;
    p = &i;
    *q = &j; // Erro: q não consegue guardar o endereço de j, pois q é um ponteiro para inteiro, e &j é um ponteiro para inteiro. A atribuição correta seria q = &j; 
    p = &*&i;
    i = (*&)j; // Erro: sintaxe inválida. O operador *& dentro dos parênteses não ficam válidos. A atribuição correta seria i = *&j;
    i = *&j;
    i = *&*&j;
    q = *p; // Erro: q é um ponteiro para inteiro, e *p é um inteiro. A atribuição correta seria q = p;
    i = (*p)++ + *q;
    return 0;
}