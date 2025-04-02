#include <stdio.h>
//1. Somma e Media: Scrivi un programma che chieda all'utente 5 numeri interi, calcoli la loro somma e media.

int main(){

    int a, b, c, d, e;

    printf("Inserisci 5 numeri interi: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    int somma = a + b + c + d + e;
    int media = somma / 5;

    printf("\nLa somma è: %d", somma);
    printf("\nLa media è: %d", media);

    return 0;

}