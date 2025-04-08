/*Scrivere un programma in C che simuli il comportamento di un sistema di gestione di un parco giochi per bambini. 
Il parco giochi ha diverse strutture, ognuna delle quali può essere utilizzata solo da bambini di una certa fascia di età. 
Le strutture sono le seguenti:
    Altalena: accessibile solo ai bambini di età compresa tra 5 e 12 anni (inclusi).
    Scivolo: accessibile solo ai bambini di età compresa tra 4 e 8 anni (inclusi).
    Trampolino: accessibile solo ai bambini di età compresa tra 6 e 10 anni (inclusi).

Ogni bambino ha un'età e deve essere testato per ciascuna delle strutture. 
Se un bambino può usare una struttura, il programma deve stampare un messaggio indicante a quale/i strutture è abilitato a giocare.
Se il bambino non è abilitato a nessuna delle strutture, il programma deve stampare un messaggio appropriato.

Inoltre, il programma deve essere in grado di:
    Acquisire l’età del bambino (un intero) da input.
    Stabilire per ogni bambino a quali strutture può accedere.
    Fornire un messaggio di feedback sulla possibilità di accesso alle strutture.

Il programma deve implementare almeno una funzione per:
    Determinare se un bambino può accedere a una determinata struttura 
    (ad esempio, una funzione che prende l'età e restituisce un valore booleano per ciascuna struttura).
    Gestire il flusso principale, acquisendo l’età e stampando il risultato.

Dettagli richiesti:
    Il programma deve essere strutturato in funzioni (come minimo una per verificare l'accesso alle strutture).
    Il flusso di controllo deve utilizzare condizioni if-else per determinare a quali strutture il bambino può accedere.
    Il programma deve usare i cicli per permettere di inserire più bambini (almeno 3) e determinare per ognuno le strutture a cui può accedere.
    Deve essere implementata la gestione delle età con il controllo su valori validi 
    (il programma non deve permettere l'inserimento di età negative o eccessivamente alte).
    Considerare che il bambino potrebbe non essere abilitato ad accedere a nessuna struttura.*/

#include <stdio.h>

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

// Funzione che determina se il bambino può giocare su ogni struttura
void checkAccesso(int age) {
    if (age < 0 || age > 17) {
        printf("\nERRORE: l'età del bambino non è valida. Inserisci un valore tra 1 e 17 anni.\n");
        return;
    }

    // Controllo dell'accesso per ogni struttura
    int canPlaySeeSaw = (age >= 5 && age <= 12);  // Altalena
    int canPlaySlide = (age >= 4 && age <= 8);   // Scivolo
    int canPlayTrampoline = (age >= 6 && age <= 10); // Trampolino

    if (canPlaySeeSaw) {
        printf("Il bambino può giocare con: Altalena");
    }

    if (canPlaySlide) {
        if (canPlaySeeSaw) printf(", ");
        printf("Scivolo");
    }

    if (canPlayTrampoline) {
        if (canPlaySeeSaw || canPlaySlide) printf(", ");
        printf("Trampolino");
    }

    if (!canPlaySeeSaw && !canPlaySlide && !canPlayTrampoline) {
        printf("Il bambino non può accedere ad alcuna attrazione");
    }

    printf("\n");
}

int main() {
    int children = getIntInput("\nInserisci quanti bambini hai con te: ");
    
    for (int i = 0; i < children; i++) {
        int age = getIntInput("\nInserisci l'età del bambino: ");
        checkAccesso(age);
    }

    return 0;
}
