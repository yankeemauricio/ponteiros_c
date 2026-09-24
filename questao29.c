#include <stdio.h>
#include <stdint.h>

// Verifiquei que essa seria a melhor de "imprimir" binário, já que não existe algo específico em C.
void send(unsigned long long estado) {
    printf("Variavel de 64 bits codificada (em binario):\n");

    // O laço começa no bit 63 (o mais significativo, à esquerda) e vai até o 0 (à direita)
    for (int i = 63; i >= 0; i--) {
        
        // Move o bit da posição 'i' para a posição 0 e mascara com 1 para isolá-lo
        int bit_atual = (estado >> i) & 1;
        
        printf("%d", bit_atual);
    }
    printf("\n");
}

int main() {
    // Matriz da questão
    unsigned char m[8][8] = {
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {1, 0, 1, 0, 1, 0, 1, 0}
    };

    // Em minhas pesquisas verifiquei que seria o melhor tipo para armazenar os dados da matriz m.
    unsigned long long estado = 0;

    //Compara cada elemento da matriz com o zero a direita adicionado utilizando "|", pois se o elemento de m[i][j]=1, será guardado o valor 1 no estado
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            // Desloca para a esquerda e insere o bit atual
            estado = (estado << 1) | m[i][j];
        }
    }

    send(estado);

    return 0;
}