#include <stdio.h>
char *a[] = {"AGOSTINHO", "MEDEIROS", "BRITO", "JUNIOR"}; 
// Cria um vetor de ponteiros que guarda o endereço das strings
char **b[] = {a + 3, a + 2, a + 1, a};
// Guarda os endereço em b de forma invertida, b guarda ponteiro pra ponteiro
char ***c = b;
// Guarda o endereço de b e c, c é ponteito para ponteiro de ponteiro.


int main() {
  
  printf("%s ", **++c); 
  // c avança para b[1]. b[1] aponta para a[2] ("BRITO").
  printf("%s ", *--*++c + 3); 
  // c avança para b[2]. O -- altera b[2] para apontar para a[0] ("AGOSTINHO"). O + 3 pula 3 letras.
  printf("%s ", *c[-2] + 3); 
  // lê b[0] (sem mover c). b[0] aponta para a[3] ("JUNIOR"). O + 3 pula 3 letras.
  printf("%s ", c[-1][-1] + 1); 
  //c[-1] lê b[1] (que é a+2). O segundo [-1] recua 1 posição, caindo em a+1 ("MEDEIROS"). O + 1 pula 1 letra.

  return 0;
}