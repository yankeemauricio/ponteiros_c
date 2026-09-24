#include <stdio.h>
int main(){
  unsigned int x[4][3] = {{1, 2, 3}, {4, 5, 6},
  {7, 8, 9}, {10, 11, 12}};
  printf("%u, %u, %u", x+3, *(x+3), *(x+2)+3);
}

// será mostrado 3x o endereço do elemento x[3][0]
// x = a primeira linha da matriz, x+1 = a segunda linha da matriz, x+2 = a terceira linha da matriz, x+3 = a quarta linha da matriz
// *(x+3) = mostra o conteúdo de x+3, que é o endereço do elemento x[3][0]
// *(x+2)+3 => x+2 é o endereço do terceira linha, se pegarmos o conteúdo que é o endereço do elemento x[2][0] e somarmos 3, o compilador acaba pulando 3 endereços e parando na linha 3 - primeiro item.

// | 1 | 2 | 3 |
// | 4 | 5 | 6 |
// | 7 | 8 | 9 |
// | 10| 11| 12|