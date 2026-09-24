#include <stdio.h>

int main(){
  int a = 10, b = 1;
  // 10 = 1010 (binário)
  // 1 = 0001 (binário)
  int x, y, z;
  
  // scanf("%d %d", &a, &b); não estava rodando  definir o valor em cima.
  
  x = a; 
  y = b; 
  z = a + b; // 11 = 1011 (binário)
  
  while (a) {
    x = x | b; // Compara em binário; se em um dos dois o bit for 1, o novo será 1
    // 1ª Iteração: 1010 (10) | 0001 (1) = 1011 (11)
    // 2ª Iteração: 1011 (11) | 0010 (2) = 1011 (11)
    // 3ª Iteração: 1011 (11) | 0100 (4) = 1111 (15)
    // 4ª Iteração: 1111 (15) | 1000 (8) = 1111 (15)

    y = y ^ a; // Compara em binário; se os bits forem diferentes será 1
    // 1ª Iteração: 0001 (1)  ^ 1010 (10) = 1011 (11)
    // 2ª Iteração: 1011 (11) ^ 0101 (5)  = 1110 (14)
    // 3ª Iteração: 1110 (14) ^ 0010 (2)  = 1100 (12)
    // 4ª Iteração: 1100 (12) ^ 0001 (1)  = 1101 (13)

    z = z & (a+b); // Compara em binário; será 1 apenas se nos dois for 1
    // 1ª Iteração: 1011 (11) & 1011 (11) = 1011 (11)
    // 2ª Iteração: 1011 (11) & 0111 (7)  = 0011 (3)
    // 3ª Iteração: 0011 (3)  & 0110 (6)  = 0010 (2)
    // 4ª Iteração: 0010 (2)  & 1001 (9)  = 0000 (0)

    a = a >> 1; // Move os bits para a direita (divide por 2)
    // 1ª Iteração: 1010 (10) >> 1 = 0101 (5)
    // 2ª Iteração: 0101 (5)  >> 1 = 0010 (2)
    // 3ª Iteração: 0010 (2)  >> 1 = 0001 (1)
    // 4ª Iteração: 0001 (1)  >> 1 = 0000 (0) acaba

    b = b << 1; // Move os bits para a esquerda (multiplica por 2)
    // 1ª Iteração: 0001 (1) << 1 = 0010 (2)
    // 2ª Iteração: 0010 (2) << 1 = 0100 (4)
    // 3ª Iteração: 0100 (4) << 1 = 1000 (8)
    // 4ª Iteração: 1000 (8) << 1 = 10000 (16)
  }
  
  // Como 'a' chegou a 0 na 4ª iteração, o ciclo é quebrado.
  // Os valores armazenados em memória neste momento são os resultados da 4ª iteração.
  printf ("%d %d %d\n", x, y, z); // x=15, y=13 ,z=0  
  return 0;
}