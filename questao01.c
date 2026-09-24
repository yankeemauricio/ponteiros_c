#include <stdio.h>

int main()
{
    int x, y, z, w;
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;

    x = p == &i; // 1 (true)
    y = *p - *q; // 3 - 5 = -2
    z = **&p; // 3
    w = 3-*p/(*q)+7; // 3 - 3/5 + 7 = 3 - 0 + 7 = 10

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    printf("w = %d\n", w);

    return 0;
}