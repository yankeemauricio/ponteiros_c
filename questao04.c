#include <stdio.h>
int main() {
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;
    /* (a) */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("%d \n", valor);
    //R: valor = 20, pois o conteúdo do endereço de memória apontado por p1 foi alterado para 20.

    /* (b) */
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("%.1f \n", temp);
    //R: temp = 29.0, pois o conteúdo do endereço de memória apontado por p2 foi alterado para 29.0.

    /* (c) */
    p3 = &nome[0];
    aux = *p3;
    printf("%c \n", aux);
    //R: aux = 'P', pois o conteúdo do endereço de memória apontado por p3 foi atribuído a aux.

    /* (d) */
    p3 = &nome[4];
    aux = *p3;
    printf("%c \n", aux);
    //R: aux = 'e', pois o conteúdo do endereço de memória apontado por p3 foi atribuído a aux.

    /* (e) */
    p3 = nome;
    printf("%c \n", *p3);
    //R: *p3 = 'P', pois p3 aponta para o primeiro caractere da string "Ponteiros" é o mesmo que fazer p3 = &nome[0].

    /* (f) */
    p3 = p3 + 4;
    printf("%c \n", *p3);
    //R: *p3 = 'e', pois p3 foi incrementado em 4 posições e aponta para o caractere 'e'.

    /* (g) */
    p3--;
    printf("%c \n", *p3);
    //R: *p3 = 't', pois p3 foi decrementado em 1 posição e aponta para o caractere 't'.

    /* (h) */
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("%d \n", idade);
    //R: idade = 31, pois p4 aponta para o primeiro elemento do vetor.

    /* (i) */
    p5 = p4+1;
    idade = *p5;
    printf("%d \n", idade);
    //R: idade = 45, pois p5 aponta para o segundo elemento do vetor.

    /* (j) */
    p4 = p5+1;
    idade = *p4;
    printf("%d \n", idade);
    //R: idade = 27, pois p4 aponta para o terceiro elemento do vetor.

    /* (l) */
    p4 = p4-2;
    idade = *p4;
    printf("%d \n", idade);
    //R: idade = 31, pois p4 foi decrementado em 2 posições e aponta para o primeiro elemento do vetor.

    /* (m) */
    p5= &vetor[2]-1;
    printf("%d \n", *p5);
    //R: *p5 = 45, pois p5 aponta para o segundo elemento do vetor.

    /* (n) */
    p5++;
    printf("%d \n", *p5);
    //R: *p5 = 27, pois p5 foi incrementado em 1 posição e aponta para o terceiro elemento do vetor.
    return(0);
}