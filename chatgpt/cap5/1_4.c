#include <stdio.h>
// 4. Implementare un sistema di votazione: 0-5 (insufficiente), 6-7 (sufficiente), 8-9 (buono), 10 (ottimo).

int main(){

    int voto;

    printf("Inserisci un voto da 0 a 10: ");
    scanf("%d", &voto);

    if ((voto < 0) || (voto > 10)){
        printf("\n\n");
        printf("Hai inserito un voto non valido");
    }
    else{
        if ((voto >=0) && (voto <=5)){
            printf("\n\n");
            printf("INSUFFICIENTE");
        }
        else if ((voto > 5) && (voto <=7)){
            printf("\n\n");
            printf("SUFFICIENTE");
        }
        else if ((voto > 7) && (voto <=9)){
            printf("\n\n");
            printf("BUONO");
        }
        else{
            printf("\n\n");
            printf("OTTIMO");
        }
    }
    return 0;
}