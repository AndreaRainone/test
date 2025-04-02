#include <stdio.h>
// 5. Simulare un menu con switch-case (es. 1. Somma, 2. Sottrazione, 3. Moltiplicazione, 4. Esci).

int main(){

    int num1, num2;
    int op;
    printf("Inserisci due numeri: ");
    scanf("%d%d", &num1, &num2);
    printf("\n");
    printf("Inserisci 1 (somma), 2(sottrazione), 3(moltiplicazione), 4 (esc)");
    scanf("%d", &op);

    if ((op < 0) || (op > 4)){
        printf("\n");
        printf("Hai inserito un comando non valido");
        printf("\n");
        return 0;
    } else {
        switch (op){
            case 1:
                printf("La SOMMA tra i due numeri dati è: %d", num1 + num2);
                break;
            case 2:
                printf("La DIFFERENZA tra i due numeri dati è: %d", num1 - num2);
                break;
            case 3:
                printf("Il PRODOTTO tra i due numeri dati è: %d", num1 * num2);
                break;
			case 4:
				return 0;
            default:
                return 0;
        }
    }
    

}