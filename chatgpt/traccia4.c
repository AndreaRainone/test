/*Si desidera implementare un programma che simuli il funzionamento di una cassa automatica per un negozio di elettronica.
Il programma dovrà permettere all'utente di effettuare un acquisto, inserendo il prezzo di ciascun prodotto acquistato, e calcolare l'importo totale da pagare.
Inoltre, il programma dovrà gestire alcuni casi particolari come sconto su acquisti superiori a 500 euro e arrotondamento finale.
Il programma dovrà presentare le seguenti funzionalità:
Acquisto Prodotti:
Il programma deve permettere all'utente di inserire il prezzo di ciascun prodotto acquistato.
Il programma continua a ricevere i prezzi finché l'utente non decide di terminare l'inserimento dei prodotti.
Il programma deve tenere traccia del numero di prodotti acquistati.

Calcolo del Totale:
Il programma deve calcolare il totale dell'acquisto (la somma dei prezzi inseriti).
Se il totale supera i 500 euro, deve essere applicato uno sconto del 10% sull'importo totale.

Verifica di un Importo Valido:
Ogni prezzo inserito deve essere un numero positivo. Se l'utente inserisce un prezzo non valido (es. negativo o zero), il programma deve richiedere nuovamente l'inserimento del prezzo fino a quando non viene inserito un valore valido.

Arrotondamento:
Dopo l'applicazione di uno sconto, il totale deve essere arrotondato al numero intero più vicino.

Messaggi di uscita:
Alla fine del programma, deve essere mostrato un riepilogo che includa:
Numero di prodotti acquistati.
Totale originale.
Totale con eventuale sconto.
Totale finale (con arrotondamento).

Indicazioni:
Utilizza i cicli while o for dove necessario.
Gestisci le condizioni con if e else.
Fai attenzione ai tipi di dati e alle espressioni per il calcolo e l’arrotondamento del totale.
Assicurati che il programma si comporti correttamente anche in caso di input errati. */

#include <stdio.h>
#include <math.h> // round(x)

float getFloatInput(char *message) {
    float valore;
    int controllo;
    
    do {
        printf("%s", message);
        controllo = scanf("%f", &valore);

        if (controllo != 1) {  
            printf("Errore: inserisci un numero valido!\n");
            while (getchar() != '\n');  // Pulisce il buffer dell’input
        }

    } while (controllo != 1);
    
    return valore;
}

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


// funzione calcolo prezzo finale
// Ciclo per sommare i prezzi tra loro e, assegnati ad una variabile temporanea, ne controlla se applicare o no lo sconto.
float finalPrice (float temp, float check, int products){

    float tempPrice = 0.0;
    for (int i=1; i<=products; i++){
        tempPrice += temp;
    }
    if (tempPrice > 500){
        check = tempPrice * 0.90;
    }else{
        check = tempPrice;
    }

    return check;
}

int main(){

    float prices, check, temp;
    int k = 1;
    int products = getIntInput("Inserisci quanti prodotti hai acquistato: ");

    while((products > 0)){

        if (products == 0){
            printf("ERRORE: Hai inserito un valore non valido.\nIl numero di prodotti deve essere maggiore di 0\n");
        }


        for (int j = 1; j<=products; j++){
            printf("\nPrezzo %d° prodotto: ", j);
            prices = getFloatInput("");
            temp += prices;
        }

        
    }

        printf("\nNumero di prodotti acquistato: %d", products);
        printf("\nTotale originale: %0.2f", finalPrice(temp, check, products));
        printf("\nTotale eventuale scontato: %0.2f", finalPrice(temp, check, products));
        printf("\nTotale finale con arrotondamento: %d", round(finalPrice(temp, check, products)));


    return 0;
}