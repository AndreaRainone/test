#include <stdio.h>

// 4. Chiedere all'utente una base e un esponente, poi calcolare la potenza senza usare pow().

int main(){

    int base, esponente, risultato = 1;

    printf("Inserisci una base: ");
    scanf("%d", &base);
    printf("\nInserisci un esponente");
    scanf("%d", &esponente);

    for(int i=1; i < esponente; i++){
        risultato *= base;
    }
    printf("La potenza %d elevato alla %d è uguale a %d ", base, esponente, risultato);
    printf("\n \n");

}