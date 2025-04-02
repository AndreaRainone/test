#include <stdio.h>
//8. Stampare la tabellina del 7 fino a 10x7 usando un ciclo for.

int main(){

    for (int i = 0; i < 11; i++){
        int risultato = i * 7;
        printf("%d x 7 = %d\n", i, risultato);
    }

}