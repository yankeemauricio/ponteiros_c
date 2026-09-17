#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void funcao(char** str){
    str++; //A sintaxe da forma que está incrementa o ponteiro str e não alterada nada globamente.
           // CORRETO: (*str)++; assim soma 1 ao endereço de memória apontado por str, alterando o valor globalmente.
}

int main(){
    char *str = (void *)malloc(50*sizeof(char));
    strcpy(str, "Agostinho");
    funcao(&str);
    puts(str);
    free(str);
    return 0;
}