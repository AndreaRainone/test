#include <stdio.h>
//2. Numero Palindromo: Chiedi un numero di 3 cifre e verifica se è palindromo.

int main(){

    int numero;
    int condizione_non_valida;

    do{
        printf("Inserisci un numero a tre cifre: ");
        scanf("%d", &numero);
        condizione_non_valida = (numero < 100 || numero > 999);
        if (condizione_non_valida){
            printf("Errore: Inserisci un valore tra 100 e 999\n");
        }

    }while(condizione_non_valida);
    
    int a = numero / 100;
    int c = numero % 10;
    if (((char)a == (char)c)){
        printf("Il numero è palindromo");
    }else{
        printf("Il numero non è palindromo");
    }
    return 0;
}