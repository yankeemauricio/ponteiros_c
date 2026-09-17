float aloha[10], coisas[10][5], *pf, value = 2.2;
int i = 3;

aloha[2] = value; // OK
scanf("%f", &aloha); // ERRO: está tentando mostrar o endereço do vetor no formato %f.
aloha = "value"; // ERRO: está tentando atribuir um endereço de string para um vetor.
printf("%f", aloha); // ERRO: está tentando imprimir o endereço do vetor em formato float.
coisas[4][4] = aloha[3]; // OK
coisas[5] = aloha; // ERRO: está tentando atribuir um vetor em outro vetor.
pf = value; // ERRO: está tentando atribuir um valor float para um ponteiro.
pf = aloha; // OK  