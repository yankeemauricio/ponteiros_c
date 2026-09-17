#include <stdio.h>

int main()
{
    // short int para o int ter apenas 2 bytes
    short int i=5, *p; 
    p = &i;
    printf("%p %p %d %d %d %d\n", p, p+1, *p+2, **&p, 3**p, **&p+4);
    return 0;
}
// supondo que o endereço de i seja 4094:
// p = 4094
// p+1 = 4096
// *p+2 = 5+2 = 7
// **&p = 5
// 3**p = 3*5 = 15
// **&p+4 = 5+4 = 9