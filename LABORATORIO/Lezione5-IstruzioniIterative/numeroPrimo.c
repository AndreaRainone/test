#include <stdio.h>
#include <math.h>

int main(void){

    int num, divisore;

        printf("Inserisci un valore intero positivo: ");
        scanf("%d", &num);

        if (num <= 0 ){
            printf("SONO NELL'IF MINORE UGUALE 0\n");
            printf("Hai inserito un numero non corretto. \n");
            printf("Deve essere un numero maggiore di 0");
            return 0;
        }
        
        int d = sqrt(num);
        printf("D VALE %d \n", d);
        printf("I divisori di %d sono: ", num);
        for(int i = 1; i <= d; i++){
            if ((num % i) == 0){
                printf("%d ", i);
                if(i != num /i){
                    printf("%d ", num/i);
                }
            }
        }
        printf("\n");
    return 0;
}