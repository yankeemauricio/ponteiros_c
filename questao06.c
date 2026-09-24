#include <stdio.h>
void funcao(char **p){
  char *t;
  t = (p += sizeof(int))[-1]; //Pula quatro bytes (tamanho de um int) e pega o valor do endereço anterior
  printf("%s\n", t);
}
int main(){
  char *a[] = { "ab", "cd", "ef", "gh", "ij", "kl"};
  funcao(a);//Chama a função passando o endereço do primeiro elemento do vetor a
  return 0;
}