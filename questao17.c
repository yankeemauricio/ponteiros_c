// Memory Leak:
// Em português Vazamento de Memória, é um problema que ocorre quando um programa não libera a memória alocada dinamicamente
// resultando em consumo excessivo de memória e possível falha do sistema.

//SEM CORREÇÃO
#include <stdio.h>
int main() {
    int *a = (int *)malloc(sizeof(int)); // Aloca memória para um inteiro
    *a = 10; // Atribui o valor 10 à memória alocada
    printf("%d\n", *a); // Imprime o valor armazenado na memória alocada
    // Aqui, a memória alocada não é liberada, resultando memory leak.
}

//COM CORREÇÃO
#include <stdio.h>
int main() {
    int *a = (int *)malloc(sizeof(int));
    *a = 10;
    printf("%d\n", *a);
    free(a); // Libera a memória alocada
    return 0;
}

