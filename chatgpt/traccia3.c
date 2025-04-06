/*Scrivere un programma in linguaggio C che permetta di gestire il pagamento del pedaggio autostradale in base alla categoria del veicolo e alla distanza percorsa.
Input:
Il programma deve chiedere all'utente di inserire la distanza percorsa in chilometri (intero positivo). Se l’input non è valido, il programma deve richiedere nuovamente il valore.
L'utente deve scegliere la categoria del veicolo tra le seguenti:
1: Auto (€0.10 per km)
2: Camion (€0.20 per km)
3: Moto (€0.07 per km)
4: Autobus (€0.15 per km)
Se l'utente inserisce un valore non valido, il programma deve richiedere nuovamente l'input.
Elaborazione:
Il programma deve calcolare il costo del pedaggio in base alla distanza percorsa e alla tariffa della categoria scelta.
Sconti:
Se la distanza percorsa è superiore a 100 km, viene applicato uno sconto del 10% sul totale.
Se la distanza percorsa è superiore a 200 km, lo sconto diventa 20%.
Output:
Il programma deve stampare il costo finale del pedaggio con due cifre decimali.
Vincoli:
Non è consentito l’uso di array, puntatori o file.
Il programma deve utilizzare cicli e strutture condizionali per la gestione degli input e delle condizioni di sconto.
Devono essere presenti almeno una funzione oltre al main(), per modularizzare il codice.*/

#include <stdio.h>

/* Funzione per ottenere un input float valido */
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

/*Funzione scontistica*/
float sconto (float distanza, float pedaggio, float scontistica, float contoScontato){
    
    if ((distanza >= 100) && (distanza <= 199)){
        scontistica = 0.9; //10% sconto
        contoScontato = pedaggio * scontistica;
    }else if(distanza >= 200){
        scontistica = 0.8; //20% sconto
        contoScontato = pedaggio * scontistica;
    }

    return contoScontato;
}

int main(){

    int tipoVeicolo = 0;
    float distanza, costoFinale;
    float pedaggio, scontistica, contoScontato;

        do{
            distanza = getFloatInput("\nInserisci la distanza percorsa: ");
            if (distanza <= 0){
                printf("\nERRORE: la distanza inserita non è valida.");
                printf("\nIl valore inserito deve essere maggiore di 0\n");
            }
        }while(distanza<0);

        do{ 
            printf("\n1. Auto");
            printf("\n2. Camion");
            printf("\n3. Moto");
            printf("\n4. Autobus\n");
            
            tipoVeicolo = getIntInput("\nInserisci il tipo di veicolo che stai usando: ");

        }while((tipoVeicolo>4) || (tipoVeicolo < 1));

        switch(tipoVeicolo){
            
            case 1: //auto
                printf("\nIl costo al km è di 10 centesimi di euro");
                costoFinale = ((distanza <= 100) ? (distanza*0.10) : sconto(distanza, pedaggio, scontistica, contoScontato));
                printf("\nIl costo totale del pedaggio è di euro: %0.2f\n", costoFinale);
                break;
            
            case 2: //camion
                printf("\nIl costo al km è di 20 centesimi di euro");
                costoFinale = ((distanza <=100) ? (distanza*0.20) : sconto(distanza, pedaggio, scontistica, contoScontato));
                printf("\nIl costo totale del pedaggio è di euro: %0.2f\n", costoFinale);
                break;
            
            case 3: //moto
                printf("\nIl costo al km è di 7 centesimi di euro");
                costoFinale = ((distanza<=100) ? (distanza*0.07) : sconto(distanza, pedaggio, scontistica, contoScontato));
                printf("\nIl costo totale del pedaggio è di euro: %0.20f\n", costoFinale);
                break;

            case 4: //autobus
                printf("\nIl costo al km è di 15 centesimi di euro");
                costoFinale = ((distanza<=100) ? (distanza*0.15) : sconto(distanza, pedaggio, scontistica, contoScontato));
                printf("\nIl costo totale del pedaggio è di euro: %0.2f\n", costoFinale);
                break;
        }
    
    return 0;
}