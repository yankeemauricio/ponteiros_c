// 1. char x[0] = 4092 -> x+1 = 4093, x+2 = 4094, x+3 = 4095;
// 2. int x[0] = 4092 -> x+1 = 4094, x+2 = 4096, x+3 = 4098;
// 3. float x[0] = 4092 -> x+1 = 4096, x+2 = 4100, x+3 = 4104;
// 4. double x[0] = 4092 -> x+1 = 4100, x+2 = 4108, x+3 = 4116;

#include <stdio.h>

int main() {
    char x_char[4];
    short int x_int[4]; //Forcei int ser 2 bytes
    float x_float[4];
    double x_double[4];
    
    printf("CHAR:\n");
    printf("x   = %d\n", x_char);
    printf("x+1 = %d\n", (x_char + 1));
    printf("x+2 = %d\n", (x_char + 2));
    printf("x+3 = %d\n\n", (x_char + 3));

    printf("INT (2 bytes):\n");
    printf("x   = %d\n", x_int);
    printf("x+1 = %d\n", (x_int + 1));
    printf("x+2 = %d\n", (x_int + 2));
    printf("x+3 = %d\n\n", (x_int + 3));

    printf("FLOAT:\n");
    printf("x   = %d\n", x_float);
    printf("x+1 = %d\n", (x_float + 1));
    printf("x+2 = %d\n", (x_float + 2));
    printf("x+3 = %d\n\n", (x_float + 3));

    printf("DOUBLE:\n");
    printf("x   = %d\n", x_double);
    printf("x+1 = %d\n", (x_double + 1));
    printf("x+2 = %d\n", (x_double + 2));
    printf("x+3 = %d\n", (x_double + 3));

    return 0;
}
