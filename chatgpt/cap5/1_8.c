#include <stdio.h>
//Implementare un semplice calcolatore che accetta due numeri e un'operazione (+, -, *, /).

int main(){

    int num1, num2, op, risultato;

    printf("Inserisci due numeri: ");
    scanf("%d%d", &num1,&num2);
    printf("\n");
    printf("Inserisci l'operazione desiderata:");
    printf("\n1: addizione, 2: sottrazione, 3: moltiplicazione, 4: divisione, 5: esc ___ ");
    scanf("%d", &op);
    printf("\n\n");

    if ((op <= 0) || (op > 5)){
        printf("Hai inserito un'operazione non valida");
        return 0;
    } else {
        switch (op){
            case 1: 
                risultato = num1 + num2;
                printf("La somma è: %d", risultato);
                break;
            case 2:
                risultato = num1 - num2;
                printf("La differenza è: %d", risultato);
                break;
            case 3:
                risultato = num1 * num2;
                printf("Il prodotto è: %d", risultato);
                break;
            case 4:
                risultato = num1 / num2;
                printf("Il risultato della divisione è: %d", risultato);
                break;
            case 5:
                printf("Adios");
                break;
            default:
                return 0;
        }
    }
    return 0;
}