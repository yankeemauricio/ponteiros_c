#include <stdio.h> //No código do arquivo estava faltando a biblioteca.

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco\n");
  for(i = 0 ; i <= 4 ; i++){
  printf("i = %d",i);
  printf(" vet[%d] = %.1f",i, vet[i]);
  printf(" *(f + %d) = %.1f",i, *(f+i));
  printf(" &vet[%d] = %X",i, &vet[i]);
  printf(" (f + %d) = %X",i, f+i);
  printf("\n");
  }
}
//Aparentemente as linhas de printf são diferentes, mas na verdade são equivalentes.
// Linhas 11 e 12 mostram o conteúdo do vetor
// Linhas 13 e 14 mostram o endereço do vetor
// 11 e 13 usando a sintaxe de vetor
// 12 e 14 usando a sintaxe de ponteiro
