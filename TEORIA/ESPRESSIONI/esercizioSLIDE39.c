#include <stdio.h>

int main(){

    int a, b, c, d;

    printf("Inserisci il valore intero di a \n");
    scanf("%d", &a);

    printf("Inserisci il valore intero di b \n");
    scanf("%d", &b);

    printf("Inserisci il valore intero di c \n");
    scanf("%d", &c);

    printf("Inserisci il valore intero di d \n");
    scanf("%d", &d);

    int numeroIntero = (a * 1000) + (b * 100) + (c * 10) + d;
    float numeroFloat = (c*10) + d + (a * 10 + b) / 100.0;

    printf("\n \n Concatenazione cifre inserite: %d \n \n", numeroIntero);
    printf("Il numero float è: %.2f", numeroFloat);

    return 0;
}