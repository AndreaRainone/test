//Dato un numero reale in input:
// Se il numero è negativo trasformarlo in positivo
// Stampare in output se il numero è pari o dispari
//Utilizzare le opzioni 1 per questo programma

#include <stdio.h>

int main(){

    int num;
    printf("Inserisci un numero reale: ");
    scanf("%d", &num);

    if (num < 0){

        num *= -1;

    }

    if ((num % 2) == 0){
        printf(" \n Il numero %d è pari", num);
    }
    else {
        printf(" \n Il numero %d è dispari", num);
    }

    return 0;
}