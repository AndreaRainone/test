#include <stdio.h>
//4. Chiedere all'utente un carattere e stamparne il codice ASCII.

int main(){

    char a;

    printf("Inserisci un carattere: ");
    scanf("%c", &a);

    printf("\n Il carattere %c convertito in ASCII è: %d",a,a);

    return 0;

}