#include <stdio.h>
float getFloatInput(char *message) {
    float valore;
    int controllo;
    
    do {
        printf("%s", message);
        controllo = scanf("%f", &valore);

        if (controllo != 1 || valore < 0.0f) {  
            printf("Errore: inserisci un numero valido!\n");
            while (getchar() != '\n');  // Pulisce il buffer dell’input
        }

    } while (controllo != 1 || valore < 0.0f);
    
    return valore;
}

int getIntInput(char *message) {
    int valore;
    int controllo;
    
    do {
        printf("%s", message);
        controllo = scanf("%d", &valore);

        if (controllo != 1) {
            printf("Errore: inserisci un numero valido!\n");
            while (getchar() != '\n');
        }

    } while (controllo != 1);
    
    return valore;
}

/*Scrivi un programma in linguaggio C che simuli un semplice sistema di calcolo per la gestione di una carta fedeltà di un cliente.
Requisiti:
All’avvio, il programma chiede all’utente:
Il nome del cliente (usa scanf per una parola sola).
Il numero totale di acquisti effettuati (intero positivo).

Per ogni acquisto, il programma deve chiedere:
L’importo dell’acquisto.
Il giorno della settimana in cui è stato fatto (1 = lunedì, ..., 7 = domenica).

Per ogni acquisto, deve essere calcolato un bonus punti secondo queste regole:
Se l’acquisto è superiore a 100 euro, si guadagnano 10 punti.
Se è un giorno infrasettimanale (1-5), si guadagnano 2 punti extra.
Se è nel weekend (6-7), si guadagnano 5 punti extra.
Se l’acquisto è minore o uguale a 100, si guadagnano solo i punti extra (niente 10 punti).

Al termine degli acquisti, il programma deve:
Mostrare il totale dei punti accumulati.
Dire se il cliente ha diritto ad uno sconto del 10% sul prossimo acquisto (se i punti sono almeno 50).
Salutare il cliente per nome.

Vincoli tecnici:
Deve esserci almeno una funzione che calcola i punti per ogni acquisto.
Usa if / else, switch, e almeno un ciclo while o for.
Niente array, strutture, puntatori, file*/

int countPoints (int purchase, int day){

    int points = 0;
    
    if (purchase >= 100){
        if (day > 0 && day <= 5) return (points + 2);
        else if (( day == 6) || (day == 7)) return (points+5);
        return (points += 10);
    }else return (points+10);
}

int main (){ // DA RIVEDERE

    float amount = 0;
    int day = 0;
    int purchase = 0;
    int totalPoints = 0;
    char name;

    printf("\nBenvenuto nel sistema di fedeltà");
        printf("\nInserisci il tuo nome: ");
        name = scanf(" %c", &name);

    purchase = getIntInput("\nInserisci quanti acquisti hai effettuato: ");

    for(int i = purchase; i<=1; i--){
        amount = getFloatInput("\nInserisci l'importo dell'acquisto: ");
        day = getIntInput("\nInserisci il giorno della settimana (1 = Lunedì ... 7 = Domenica): ");

        printf("Hai guadagnato %d punti per questo acquisto", countPoints(purchase, day));
        totalPoints += countPoints(purchase, day);
    }

    if (totalPoints >= 50){
        printf("\nHai diritto ad uno sconto del 10 per cento sul prossimo acquisto");
    }else{
        printf("\nMi dispiace, non hai ancora diritto allo sconto del 10 per cento");
    }
    printf("\nGrazie per aver utilizzato il programma, %c", name);

    return 0;
}