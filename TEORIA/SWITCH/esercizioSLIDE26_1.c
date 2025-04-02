#include <stdio.h>

int main()
{

    int num1, num2;

    do{
        printf("Inserisci due numeri interi: ");
        scanf("%d%d", &num1, &num2);

        if ((num1 == 0) || (num2 == 0)){
            printf("\n i numeri devono essere entrambi maggiore di 0 \n");
        }
        
    }while((num1==0) || (num2==0));

    
    if ((num1 > num2)){
        printf("\n %d", num1);
    }
    else { 
        printf("\n %d", num2);
    }

    return 0;
}