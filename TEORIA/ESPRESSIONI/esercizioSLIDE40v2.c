//TODO: Estendere il problema ad un numero di 3, 4, 5, n cifre

#include <stdio.h>

int main (){

    int numero, decine, unita, invertito;

    printf("Inserisci un numero intero a due cifre \n");
    scanf("%d", &numero);

    if (numero < 10 || numero > 99)
    {
        printf("Errore: non hai inserito un numero a due cifre");
        return 1;
    }

    decine = numero / 10;
    unita = numero % 10;
    printf("Controllo. DECINA vale %d \n", decine);
    printf("Controllo. UNITA vale %d \n", unita);

    invertito = (unita * 10) + decine;

    printf("Il numero con cifre invertite è: %d \n", invertito);
    return 0;

}