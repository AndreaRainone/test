#include <stdio.h>

float getIntInput(char *message) {
    int valore;
    int controllo;
    
    do {
        printf("%s", message);
        controllo = scanf("%d", &valore);

        if (controllo != 1) {  
            printf("Errore: inserisci un numero valido!\n");
            while (getchar() != '\n');  // Pulisce il buffer dell’input
        }

    } while (controllo != 1);
    
    return valore;
}

/*Scrivi un programma in C che calcoli il fattoriale di un numero intero positivo fornito dall'utente e 
che calcoli la somma di tutti i numeri interi da 1 a quel numero. Il programma deve seguire i seguenti passi:
Richiesta dell'input: Chiedi all'utente di inserire un numero intero positivo. 
Se l'utente inserisce un numero non valido (minore di 1), il programma deve stampare un messaggio di errore e richiedere nuovamente l'input.
Calcolo del fattoriale: Crea una funzione chiamata fattoriale che prenda come parametro un intero positivo e restituisca il suo fattoriale.
Utilizza un ciclo for per calcolare il fattoriale.
Calcolo della somma: Crea una funzione chiamata somma che prenda come parametro un intero positivo e 
restituisca la somma di tutti i numeri interi da 1 a quel numero. Utilizza un ciclo while per calcolare la somma.
Output dei risultati: Dopo aver calcolato il fattoriale e la somma, il programma deve stampare entrambi i risultati in un formato leggibile.*/

// Factorial function
int factorial(int numero){
    int totale = 1;
    for (int i = numero; i >= 1; i--) {
        totale *= i;
    }
    return totale;
}


//Sum function
int sum (int numero){

    int j = numero;
    int somma = 0;
    while (j >= 1){
        somma += j;
        j--;
    }

    return somma;
}

int main(){
    
    int numero = getIntInput("Inserisci un numero intero positivo: ");
    while(numero > 0){

        if (numero > 0 ){
            printf("\nIl risultato di %d! è: %d", numero, factorial(numero) );
            printf("\nLa somma dei numeri da 1 a %d è: %d", numero, sum(numero));
        }else{
            printf("ERRORE: hai inserito un input non valido.");
        }

        numero = 0;
    }

    return 0;
}