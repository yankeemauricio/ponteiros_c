#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

void organizador(int vetor[], int tamanho, int (*comp)(int, int)) { 
    for (int i = 0; i < tamanho - 1; i++) { 
        for (int j = 0; j < tamanho - i - 1; j++) { 
            if (comp(vetor[j], vetor[j + 1]) > 0) { 
                int temp = vetor[j]; 
                vetor[j] = vetor[j + 1]; 
                vetor[j + 1] = temp; 
            }
        }
    }
}

int comparar(int a, int b) { 
    return a - b; 
}

// O qsort precisa que a função de comparar seja assim
int comparar_qsort(const void *a, const void *b) {
    int valorA = *(int*)a;
    int valorB = *(int*)b;
    return valorA - valorB;
}

int main() { 
    int tamanho = 50000;
    
    int *vetor_para_organizador = (int*) malloc(tamanho * sizeof(int));
    int *vetor_para_qsort = (int*) malloc(tamanho * sizeof(int));
    
    // Vi que é a melhor forma de preencer os vetores
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        int numero_aleatorio = rand() % 100000;
        vetor_para_organizador[i] = numero_aleatorio;
        vetor_para_qsort[i] = numero_aleatorio;
    }

    clock_t inicio, fim;
    double tempo_gasto;

    
    printf("Minha função de organização\n");
    inicio = clock();
    
    organizador(vetor_para_organizador, tamanho, comparar); 
    
    fim = clock();
    tempo_gasto = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("Tempo do organizador: %f segundos\n\n", tempo_gasto);

   
    printf("Com qsort()\n");
    inicio = clock();
    
    qsort(vetor_para_qsort, tamanho, sizeof(int), comparar_qsort);
    
    fim = clock();
    tempo_gasto = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("Tempo do qsort: %f segundos\n\n", tempo_gasto);

    free(vetor_para_organizador);
    free(vetor_para_qsort);
    
    return 0; 
}

// CONCLUSÃO: O qsort é mais rápido que a minha função.
// Na minha máquina a minha função ficou em 6 segundo e a qsort ficou menor que 1 segundo.