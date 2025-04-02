#include <stdio.h>
//7. Chiedere all'utente numeri finché non inserisce 0 (break).

int main(){

    int num;

    do{
        printf("Inserisci un numero: ");
        scanf("%d", &num);
    }while(num != 0);

    return 0;
}