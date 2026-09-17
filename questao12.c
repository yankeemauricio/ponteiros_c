#include <stdio.h>
void main(){
  int const *x = 3;
  printf("%d", ++(*x));
}

// Há um erro de inicialização do ponteiro x que está recebendo o endereço .....003, mas o correto seria receber o endereço de uma variável do tipo int.
// Além disso, o printf tem uma tentativa de incrementar um valor constante, o que não é permitido.
// O void main() também não é o padrão seguido em C, o correto seria int main() e return 0 no final do main.
// Mas se o código funcionasse em algum universo paralelo, o printf imprimiria 4. :)
