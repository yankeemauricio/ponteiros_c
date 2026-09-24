#include <stdio.h>
#include <stdlib.h>

int main() {
    int prof, alt, larg;
    int z, y, x;

    // O usuário fornece o tamanho da matriz tridimensional
    printf("Digite profundidade (Z), altura (Y) e largura (X): ");
    scanf("%d %d %d", &prof, &alt, &larg);

    // Alocação dinâmica básica (Ponteiro Triplo)
    int ***matriz = (int ***)malloc(prof * sizeof(int **));
    
    for (z = 0; z < prof; z++) {
        matriz[z] = (int **)malloc(alt * sizeof(int *));
        for (y = 0; y < alt; y++) {
            matriz[z][y] = (int *)malloc(larg * sizeof(int));
            
            // Preenchendo com 0 (espaço vazio)
            for (x = 0; x < larg; x++) {
                matriz[z][y][x] = 0; 
            }
        }
    }

    // O usuário solicita a impressão de um dos planos
    int plano_z;
    printf("Qual plano de profundidade deseja ver? (0 a %d): ", prof - 1);
    scanf("%d", &plano_z);

    printf("Plano %d:\n", plano_z);
    for (y = 0; y < alt; y++) {
        for (x = 0; x < larg; x++) {
            printf("%d ", matriz[plano_z][y][x]);
        }
        printf("\n");
    }

    // O usuário modifica o estado de um dos elementos
    int pos_z, pos_y, pos_x, novo_valor;
    printf("\nDigite Z, Y, X e o novo valor (1 ou 0) para alterar um bloco: ");
    scanf("%d %d %d %d", &pos_z, &pos_y, &pos_x, &novo_valor);

    //Verifica se o primeiro valor informado é 0 ou 1.
    if(novo_valor ==0 || novo_valor ==1){
        matriz[pos_z][pos_y][pos_x] = novo_valor;
    }
    else{
        printf("Valor diferente de 0 e 1. Digite novamente X, Y, Z e o novo valor:");
        scanf("%d %d %d %d", &pos_z, &pos_y, &pos_x, &novo_valor);
    }
    
    printf("Posicao [%d][%d][%d] alterada para %d!\n", pos_z, pos_y, pos_x, matriz[pos_z][pos_y][pos_x]);

    // Libertando a memória rigorosamente na ordem inversa
    for (z = 0; z < prof; z++) {
        for (y = 0; y < alt; y++) {
            free(matriz[z][y]);
        }
        free(matriz[z]);
    }
    free(matriz);

    return 0;
}