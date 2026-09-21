#include <stdio.h>
#include <stdlib.h>

void soma_vet(int *vet1, int *vet2, int *resultado, int n){
    for(int i = 0; i<n; i++){
        resultado[i] = vet1[i] + vet2[i];
    };
}

int main(){
    int n = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int *vet1 = (int*)malloc(n * sizeof(int));
    int *vet2 = (int*)malloc(n * sizeof(int));
    int *resultado = (int*)malloc(n * sizeof(int));

    printf("\nDigite os %d elementos do primeiro vetor:\n", n);
    for (int i = 0; i < n; i++) {
        printf("vet1[%d]: ", i);
        scanf("%d", &vet1[i]);
    };

    printf("\nDigite os %d elementos do segundo vetor:\n", n);
    for (int i = 0; i < n; i++) {
        printf("vet2[%d]: ", i);
        scanf("%d", &vet2[i]);
    };

    soma_vet(vet1, vet2, resultado, n);

    printf("\nVetor resultante da soma:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", resultado[i]);
    };
    printf("\n");


    free(vet1);
    free(vet2);
    free(resultado);

    return 0;
}
