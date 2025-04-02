#include <stdio.h>
//3. Usare sizeof per determinare le dimensioni dei tipi di dati primitivi.

int main() {
    printf("int: %zu byte\n", sizeof(int));
    printf("long int: %zu byte\n", sizeof(long int));
    printf("long long: %zu byte\n", sizeof(long long));
    printf("unsigned int: %zu byte\n", sizeof(unsigned int));
    printf("short: %zu byte\n", sizeof(short));
    printf("unsigned short: %zu byte\n", sizeof(unsigned short));
    printf("unsigned long int: %zu byte\n", sizeof(unsigned long int));
    printf("float: %zu byte\n", sizeof(float));
    printf("double: %zu byte\n", sizeof(double));
    printf("char: %zu byte\n", sizeof(char));
    printf("unsigned char: %zu byte\n", sizeof(unsigned char));

    return 0;
}