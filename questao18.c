// Um ponteiro para função é uma variável que armazena o endereço de uma função. Ele permite que você chame funções de forma indireta.
// É útil para implementar callbacks, tabelas de funções e outras técnicas de programação.

//No meu  programa vou utilizar callbacks com ponteiros para funções:
//Em um parametro específico da função você indica a ação a ser executada colocando a função que a realiza.
//No meu código colocarei no terceiro parametro e ele será definido inicialmente como um ponteiro para função.

#include <stdio.h> // biblioteca padrão de entrada e saída

void processar_vetor(int vetor[], int tamanho, void (*acao)(int)) { // Função que processa um vetor de inteiros e aplica uma ação a cada elemento
    for (int i = 0; i < tamanho; i++) {
        acao(vetor[i]); // Chama a função apontada pelo ponteiro de função
    }
    printf("|\n"); // Imprime uma nova linha após processar o vetor
}

void mostrar_vetor(int valor) { // Função que mostra os elementos de um vetor
        printf("|%d", valor);
}
void mostrar_dobro(int valor) { // Função que mostra o dobro de um elemento
    printf("|%d", valor * 2);
}
void mostrar_triplo(int valor) { // Função que mostra o triplo de um elemento
    printf("|%d", valor * 3);
}
void mostrar_quadrado(int valor) { // Função que mostra o quadrado de um elemento
    printf("|%d", valor * valor);
}


int main() {
    int vetor[] = {1, 2, 3, 4, 5}; // Declaração e inicialização de um vetor de inteiros
    int tamanho = sizeof(vetor) / sizeof(vetor[0]); // Calcula o tamanho do vetor

    printf("Vetor original: "); // Imprime uma mensagem indicando que o vetor original será mostrado
    processar_vetor(vetor, tamanho, mostrar_vetor); // Chama a função processar_vetor passando o vetor, seu tamanho e a função mostrar_vetor como callback
    printf("Vetor dobrado: "); // Imprime uma mensagem indicando que o vetor dobrado será mostrado
    processar_vetor(vetor, tamanho, mostrar_dobro); // Chama a função processar_vetor passando o vetor, seu tamanho e a função mostrar_dobro como callback
    printf("Vetor triplo: "); // Imprime uma mensagem indicando que o vetor triplo será mostrado
    processar_vetor(vetor, tamanho, mostrar_triplo); // Chama a função processar_vetor passando o vetor, seu tamanho e a função mostrar_triplo como callback
    printf("Vetor ao quadrado: "); // Imprime uma mensagem indicando que o vetor ao quadrado será mostrado
    processar_vetor(vetor, tamanho, mostrar_quadrado); // Chama a função processar_vetor passando o vetor, seu tamanho e a função mostrar_quadrado como callback

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}


