#include <stdio.h>
#include <stdlib.h>

void ordenar_vetor(float *vetor, int n) {
    float temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main(){
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float *valores = (float *)malloc(n * sizeof(float));

    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &valores[i]);
    }
    ordenar_vetor(valores, n);
    for (int i = 0; i < n; i++) {
        printf("%.2f ", valores[i]);
    }
    free(valores);
    return 0;
}
