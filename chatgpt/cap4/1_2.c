#include <stdio.h>

//2. Chiedere all'utente due numeri e calcolarne la somma.
int main(){

    int uno, due;

    printf("Inserisci il primo numero: ");
    scanf("%d", &uno);
    printf("\n Inserisci il secondo numero: ");
    scanf("%d", &due);
    int somma = uno + due;
    printf("\n La somma dei due numeri è: %d", somma);
    printf("\n \n");

}