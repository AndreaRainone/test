#include <stdio.h>
//6. Leggere un carattere con getchar() e ristamparlo con putchar().
int main(){

    char i;

    printf("Inserisci un carattere: ");
    i = getchar();
    getchar(); //Evita che l'enter rimanga nel buffer
    putchar('\n');
    putchar(i);

}