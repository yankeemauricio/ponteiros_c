// Cria um vetor vet de inteiros com três elementos e imprime os três primeiros elementos do vetor.
#include <stdio.h>
int main(){
  int vet[] = {4, 9, 13};
  int i;
  for(i=0;i<3;i++){
  printf("%d ", *(vet+i));
  }
}
// Cria um vetor vet de inteiros com três elementos e imprime os endereços dos três primeiros elementos
#include <stdio.h>
int main(){
  int vet[] = {4, 9, 13};
  int i;
  for(i=0;i<3;i++){
  printf("%X ",vet+i);
  }
}