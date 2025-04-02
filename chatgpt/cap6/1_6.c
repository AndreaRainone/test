#include <stdio.h>
//6. Calcolare la somma dei primi N numeri naturali usando un ciclo.
int main(){
    int num;
    int somma = 0;

    do{
        printf("Inserisci un numero maggiore di 0: ");
        scanf("%d", &num);
        if (num <= 0){
            printf("Error: il numero è negativo o uguale a 0\n");
        }
    }while(num <= 0);

// alternativa senza for
//int somma = num * (num +1) / 2;
    for (int i = 1; i <= num; i++){
        somma += i;
    }

    printf("La somma dei primi %d numeri naturali è: %d\n", num, somma);

    return 0;
}