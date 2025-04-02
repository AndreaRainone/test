#include <stdio.h>
//1. Chiedere all'utente un numero e dire se è positivo o negativo.
int main(){

    int num;

    printf("Inserisci un numero: ");
    scanf("%d", &num);

    if (num>=0){
        printf("\n\n");
        printf("Il numero è positivo");
    } else {
        printf("\n\n");
        printf("Il numero è negativo");
    }
    return 0;
}