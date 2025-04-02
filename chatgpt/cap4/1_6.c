#include <stdio.h>
// 6. Calcolare il valore assoluto di un numero senza usare funzioni predefinite.

int main(){
    int numero;
    int val;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    if (numero > 0){
        printf("Il valore assoluto di %d è: %d", numero, numero);
    } else if(numero == 0){
        printf("Il valore assoluto di %d è: %d", numero, numero);
    } else {
        val = numero * -1;
        printf("Il valore assoluto di %d è: %d",numero, val);
    }
    printf("\n\n");
    return 0;
}