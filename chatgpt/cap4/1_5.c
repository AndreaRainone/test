#include <stdio.h>
//5. Usare gli operatori di incremento e decremento per manipolare una variabile intera.

int main(){

    int num1, num2, num3;

    printf("Inserisci 3 numeri in modo consecutivo: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    printf("\n \n");
    printf("I tuoi numeri ora valgono: %d %d %d", num1, num2, num3);
    num1/=3;
    num2++;
    num3*=2;
    printf("\n \n");
    printf("I tuoi numeri ora valgono: %d %d %d", num1, num2, num3);
    printf("\n\n");

    return 0;

}