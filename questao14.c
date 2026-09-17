#include <stdio.h>

int f(int a, int *pb, int **ppc) {
  int b, c;
  **ppc += 1; // aponta pra c da main, então c += 1 = 6
  c = **ppc; // c = 6
  *pb += 2; // aponta pra c da main, então c += 2 = 8
  b = *pb; // b = 8
  a += 3; // a ainda é 5, então a += 3 = 8
  return a + b + c; // 8 + 8 + 6 = 22
}
void main() {
  int c, *b, **a;
  c = 5;
  b = &c; // apontador para c
  a = &b; // apontador para b que aponta para c
  printf("%d\n", f(c, b, a)); // retornar o valor da função
  getchar();
}
