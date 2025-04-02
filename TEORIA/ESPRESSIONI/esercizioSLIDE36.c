#include <stdio.h>

int main()
{
    int a = 1, b = 1, c = 2, d = 2, e = 3;
    
    int esp1 = a * b - c * d + e;
    int esp2 = a / b % c / d;
    int esp3 = - a - b + c - + d;
    int esp4 = a * - b / c - d;

    int esp11 = (a * b) - (c * d) + e;
    int esp22 = (a / b) % (c / d);
    int esp33 = (-a) - (b) + (c) - (+d);
    int esp44 = (a)*(-b)/(c)-d;

    printf("Il valore di espressione1 è %d. Invece con le parentesi è: %d\n", esp1, esp11);
    printf("Il valore di espressione2 è %d. Invece con le parentesi è: %d\n", esp2, esp22);
    printf("Il valore di espressione3 è %d. Invece con le parentesi è: %d\n", esp3, esp33);
    printf("Il valore di espressione4 è %d. Invece con le parentesi è: %d", esp4, esp44);

    printf("\n \n");
    return 0;
}