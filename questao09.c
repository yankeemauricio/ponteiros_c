//Considerando a declaração
int mat[4], *p, x;
//quais das seguintes expressões são válidas? Justifique.
// p = mat + 1; RESPOSTA: VALIDA - Recebe o endereço do segundo elemento do vetor mat. 
// p = mat++; RESPOSTA: INVALIDA - Tenta incrementar o endereço do vetor mat, mas não é possível alterar o endereço do próprio vetor.
// p = ++mat; RESPOSTA: INVALIDA - Tenta incrementar o endereço do vetor mat, mas não é possível alterar o endereço do próprio vetor.
// x = (*mat); RESPOSTA: VALIDA - Atribui o valor do primeiro elemento do vetor mat a x.
