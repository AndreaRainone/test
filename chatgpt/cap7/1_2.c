#include <stdio.h>
//2. Creare una variabile long e short e stamparne il valore e la dimensione in byte.
int main() {
    long a = 1000;
    short b = 10;

    printf("Valore di a: %ld, Dimensione: %zu byte\n", a, sizeof(a));
    printf("Valore di b: %hd, Dimensione: %zu byte\n", b, sizeof(b));

    return 0;
}