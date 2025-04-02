#include <stdio.h>
//3. Determinare il maggiore tra tre numeri interi dati in input.

int main(){

    int num1, num2, num3;
    int temp;
    printf("Inserisci 3 numeri: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if ((num1>num2) && (num1>num3)){
        temp = num1;
    }
    else if((num2 > num1) && (num2 > num3)){
        temp = num2;
    }
    else{ 
        temp = num3;
    }
    printf("\n\n");
    printf("Il numero maggiore è: %d", temp);
}