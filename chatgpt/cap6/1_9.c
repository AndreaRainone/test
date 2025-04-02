#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//9. Simulare il gioco del numero segreto: l'utente deve indovinare un numero casuale.

int main(){
	srand(time(NULL));
    int r = (rand() % 10) +1;
    int test;

    do{
        printf("Inserisci un numero tra 1 e 10: ");
        scanf("%d", &test);
        if (r == test){
            printf("SUCCESSO, hai indovinato il numero");
        }else{
            printf("RITENTA\n");
        }
    }while(r != test);
    
    return 0;
}