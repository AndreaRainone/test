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
/*Scrivi un programma in C che aiuti a simulare un distributore automatico di bevande.

Scelta dell’utente:
Chiedi all'utente di scegliere una bevanda tra le seguenti:
1: Acqua (€1.00)
2: Tè (€1.50)
3: Caffè (€1.20)
Inserimento credito:
Chiedi all'utente di inserire un importo di denaro (float).
Se l’importo è minore del costo della bevanda selezionata, stampa un messaggio di errore e richiedi nuovamente l’importo.

Calcolo resto:
Se il credito è sufficiente, stampa:
La bevanda erogata
Il resto da dare all’utente (se presente)

Ripetizione:
Dopo ogni acquisto, chiedi all’utente se vuole fare un altro acquisto (s per sì, qualsiasi altra lettera per uscire).

Vincoli:
Non usare array, né strutture complesse
Usa almeno una funzione per il calcolo del resto o per gestire il menu
Gestisci eventuali input errati (tipo di bevanda non valido, credito negativo, ecc.)*/

float calcoloResto(float credito, int item){

    float resto;
    if (item == 1){
        resto = credito - 1.00;
    }else if(item == 2){
        resto = credito - 1.50;
    }else if(item == 3){
        resto = credito - 1.20;
    }

    return resto;
}


int main(){

    float credito = 0.00;
    char sino;

    do{
        printf("\nBenvenuto nel distributore automatico.");
        printf("\nAcqua: € 1.00\nTè: € 1.50\nCaffè: € 1.20");
        int item = getIntInput("\n\nSeleziona una bevanda (1-3): ");
        do{
            if ((item > 0) && (item < 4)){
                switch(item){

                    case 1:
                        do{
                            credito = getFloatInput("\nInserisci il credito: ");
                            if (credito < 1.00){
                                printf("\nErrore: credito insufficiente");
                            }
                        }while(credito < 1.00);
                        printf("\nBevanda selezionata: Acqua");
                        printf("\nResto: %0.2f", calcoloResto(credito, item));
                        break;
                    
                    case 2:
                        do{
                            credito = getFloatInput("\nInserisci il credito: ");
                            if (credito < 1.50){
                                printf("\nErrore: credito insufficiente");
                            }
                        }while(credito < 1.50);
                        printf("\nBevanda selezionata: Tè");
                        printf("\nResto: %0.2f", calcoloResto(credito, item));
                        break;

                    case 3:
                        do{
                            credito = getFloatInput("\nInserisci il credito: ");
                            if (credito < 1.20){
                                printf("\nErrore: credito insufficiente");
                            }
                        }while(credito < 1.20);
                        printf("\nBevanda selezionata: Caffè");
                        printf("\nResto: %0.2f", calcoloResto(credito, item));
                        break;

                }
            }else{
                printf("Errore: Bevanda non valida.");
            }
        }while(((item < 1) && (item > 3)));
        printf("\nVuoi fare un altro acquisto? s/n: ");
        sino = getchar();

        if (sino=='n'){
            printf("\nBuona giornata dal tuo distributore automatico");
            return 0;
        }
    }while(sino == 's');

    return 0;
}
// DA FINIRE, NON POSSO SCRIVERE 's/n'