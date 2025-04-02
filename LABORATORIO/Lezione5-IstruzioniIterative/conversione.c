#include <stdio.h>
#include <limits.h>

int main(){

    unsigned int carattere;

    do{
        printf("Inserisci un carattere: ");
        carattere = getchar();
        printf("Il valore ASCII del carattere '%c' è %u\n", carattere, carattere);
    }while(carattere != ' ');
    

}