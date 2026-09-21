#include <stdio.h> 

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

int main() { 
    int vetor[] = {5, 2, 9, 1, 5, 6}; 
    int tamanho = sizeof(vetor) / sizeof(vetor[0]); 

    printf("Vetor original: "); 
    for (int i = 0; i < tamanho; i++) { 
        printf("%d ", vetor[i]); 
    } 
    printf("\n");
    
    organizador(vetor, tamanho, comparar); 
    
    printf("Vetor ordenado: "); 
    for (int i = 0; i < tamanho; i++) { 
        printf("%d ", vetor[i]); 
    } 
    printf("\n"); 
    
    return 0; 
}


