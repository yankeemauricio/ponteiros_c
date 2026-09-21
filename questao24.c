#include <stdio.h>
#include <stdlib.h>


void multiplica_mat(int **A, int **B, int **C, int linhas_a, int colunas_a, int colunas_b) {
    for (int i = 0; i < linhas_a; i++) {
        for (int j = 0; j < colunas_b; j++) {
            C[i][j] = 0;

            for (int k = 0; k < colunas_a; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int** alocar_matriz(int linhas, int colunas) {
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }
    return matriz;
}

// Para não repetir código
void libertar_matriz(int **matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

void imprimir_matriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int linhas_a = 2;
    int colunas_a = 3;
    int colunas_b = 4;

    int **A = alocar_matriz(linhas_a, colunas_a);
    int **B = alocar_matriz(colunas_a, colunas_b);
    int **C = alocar_matriz(linhas_a, colunas_b);


    int valoresA[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < linhas_a; i++) {
        for (int j = 0; j < colunas_a; j++) {
            A[i][j] = valoresA[i][j];
        }
    }

    int valoresB[3][4] = {{7, 8, 9, 1}, {2, 3, 4, 5}, {6, 7, 8, 9}};
    for (int i = 0; i < colunas_a; i++) {
        for (int j = 0; j < colunas_b; j++) {
            B[i][j] = valoresB[i][j];
        }
    }

    multiplica_mat(A, B, C, linhas_a, colunas_a, colunas_b);

    printf("Matriz A: \n");
    imprimir_matriz(A, linhas_a, colunas_a);
    printf("Matriz B: \n");
    imprimir_matriz(B, colunas_a, colunas_b);
    printf("Matriz C: \n");
    imprimir_matriz(C, linhas_a, colunas_b);

    libertar_matriz(A, linhas_a);
    libertar_matriz(B, colunas_a);
    libertar_matriz(C, linhas_a);

    return 0;
}