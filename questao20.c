#include <stdio.h> // biblioteca padrão de entrada e saída
#include <stdlib.h> // biblioteca padrão de alocação de memória e qsort


int comparar(const void *a, const void *b) { // Função de comparação para qsort
    float num1 = *(const float *)a; // Converte o ponteiro para float e desreferencia
    float num2 = *(const float *)b; // Converte o ponteiro para float e desreferencia
    if (num1 < num2) return -1; // Retorna -1 se num1 for menor que num2
    if (num1 > num2) return 1; // Retorna 1 se num1 for maior que num2
    return 0; // Retorna 0 se forem iguais
}

int main(){
    int n; // Declaração da variável para o tamanho do vetor

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n); // Lê o tamanho do vetor do usuário

    float *valores = (float *)malloc(n * sizeof(float)); // Aloca dinamicamente memória para o vetor de floats

    for (int i = 0; i < n; i++) { // Loop para ler os valores do vetor
        printf("Digite o valor %d: ", i + 1); 
        scanf("%f", &valores[i]);
    }
    //qsort(vetor, tamanho, tamanho de cada elemento, função de comparação)
    qsort(valores, n, sizeof(float), comparar);// Chama a função qsort para ordenar o vetor usando a função de comparação definida anteriormente
    for (int i = 0; i < n; i++) { // Loop para imprimir os valores ordenados do vetor
        printf("%.2f ", valores[i]);
    }
    free(valores); // Libera a memória alocada para o vetor
    return 0;
}
