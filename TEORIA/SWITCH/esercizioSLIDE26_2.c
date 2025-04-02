#include <stdio.h>

int main()
{
    int numero[5];
    int i, j, temp;

    //BLOCCO CONTROLLO MAGGIORE UGUALE 0
    do{
        printf("Scrivi 5 numeri interi maggiori di 0: ");
        scanf("%d%d%d%d%d", &numero[0], &numero[1], &numero[2], &numero[3], &numero[4]);

    }while((numero[0] < 0)|| (numero[1] < 0)||(numero[2] < 0)||(numero[3] < 0)||(numero[4] < 0));
    //
    
    for (i=1; i<5;i++){
        temp = numero[0];
        j = i - 1;

        while(j>=0 && numero[j] > temp){
            numero[j+1] = numero[j];
            j--;
        }
        numero[j+1] = temp;
    }

    printf("\n Il numero maggiore è: %d", temp);
    return 0;
    
}