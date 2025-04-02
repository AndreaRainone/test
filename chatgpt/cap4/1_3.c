#include <stdio.h>

//3. Verificare se un numero inserito dall'utente è positivo, negativo o zero.

int main(){

    int numero;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    if (numero > 0){
        printf("\nIl numero è positivo");
    }else if (numero == 0){
        printf("\nIl numero è pari a 0");
    }else {
        printf("Il numero è negativo");
    }
    printf("\n \n");

}