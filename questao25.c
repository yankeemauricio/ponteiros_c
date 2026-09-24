//(C)
int f(char *data){
  void *s;
  s = malloc(50);
  int size = strlen(data);
  if (size > 50) //Se for maior de 50 vai entrar aqui
    return(-1); //Vai encerrar o código
  free(s); //Não vai chegar aqui para liberar a memória.
  return 0;
}
