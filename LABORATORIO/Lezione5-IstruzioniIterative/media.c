#include <stdio.h>
// Calcola la media di N numeri scelti dall'utente
int main(void){

    float num, temp = 0.0;
    int qnt;
    int exit;
    float media;
    
    while(1){
        printf("Inserisci N numeri a tua scelta: ");
        scanf("%f", &num);
        if (num == 0){
                goto avanti;
        }
        else 
        {
            temp += num;
            qnt += 1;
            media = temp / qnt;
        }
       
    }
    avanti:
    printf("Hai inserito %d numeri. La media è: %.02f", qnt, media);

    return 0;
}