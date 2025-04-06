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

/*Titolo: Simulazione di un Bancomat Semplificato
Obiettivo: Scrivere un programma in linguaggio C che simula un bancomat semplificato. Il programma deve offrire all’utente un menù con le seguenti opzioni:
Visualizza saldo, Deposita denaro, Preleva denaro, Esci
Requisiti:
Il saldo iniziale è 0.
Per ogni operazione di deposito o prelievo, l’utente inserisce un importo positivo.
Il prelievo non può superare il saldo disponibile: in tal caso, stampare un messaggio di errore.
Il menù deve essere mostrato ripetutamente finché l’utente non sceglie l’opzione 4.
Ogni operazione deve essere implementata come una funzione separata (es: visualizza_saldo, deposita, preleva, ecc.)
Utilizzare strutture di controllo come if, switch, while o do-while.
Bonus (opzionale, per un punteggio massimo):
Gestione dell’inserimento di importi non validi (es. negativi o nulli).
Stampa di un breve riepilogo delle operazioni al termine (numero di depositi e prelievi effettuati, saldo finale).*/


// Switch function - TODO
int menu(float balance){
    int menuBar;
    printf("\nBenvenuto nel tuo bancomat.\nEcco le operazioni che puoi svolgere:\n1.Visualizza Saldo\n2.Deposita Denaro\n3.Preleva Denaro\n4.Esci");
    menuBar = getIntInput("\nInserisci l'operazione da svolgere");

    if (menuBar == 4){
        printf("\nBuona giornata.");
        return 0;
    }else{
        switch(menuBar){
            case 1:
                displayBalance(balance);
                break;
            case 2:
                deposit(balance);
                break;
            case 3:
                withdrawal(balance);
                break;
        }
    }
    return menuBar;
}



// Final balance function
float displayBalance(float balance){
    printf("\nIl tuo saldo attuale è: %0.2f", balance);
    return balance;
}

//Deposit function
float deposit (float balance){

    float actualDeposit = 0.0;
    do{
        actualDeposit = getFloatInput("\nInserisci quanto depositare: ");
        if (actualDeposit <= 0){
            printf("\nERRORE: non puoi depositare valori inferiori a 1.");
        }
    }while(actualDeposit <= 0);

    balance += actualDeposit;

    return balance;
}

//Withdrawal function
float withdrawal (float balance){

    float withdraw = 0.0;
    do{

        withdraw = getFloatInput("\nInserisci quanto vuoi depositare: ");
        if (withdraw <= 0){
            printf("\nERRORE: non puoi prelevare valori minori di 1.");
        }else if (withdraw > balance){
            printf("\nERRORE: non puoi prelevare somme maggiori del tuo attuale saldo.");
            printf("\nAttualmente sul tuo conto ci sono: %0.2f", balance);
        }

        balance -= withdraw;

    }while(withdraw <= 0);

    return balance;

}

int main(){
    menu(balance);
}