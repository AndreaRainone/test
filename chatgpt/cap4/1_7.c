#include <stdio.h>
//7. Determinare se un numero è pari o dispari usando l'operatore modulo.

int main(){

    int numero;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    printf("\n\n");

    if ((numero % 2) == 0){
        printf("Il numero è pari");
    } else{
        printf("Il numero è dispari");
    }

    printf("\n\n");
    return 0;
}