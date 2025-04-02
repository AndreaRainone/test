#include <stdio.h>

int main(){

    int numero;

    while (1){

        printf("Inserire un numero intero: (inserisci 0 per uscire)");
        scanf("%d", &numero);
        
        if (numero == 0) {
            printf("Fine esecuzione");
            break;
        }

        if ((numero % 2) == 0) {
            printf("Il numero %d è pari! \n", numero);
        }
        else {
            printf("Il numero %d è dispari! \n", numero);
        }
    }
   
    return 0;
}