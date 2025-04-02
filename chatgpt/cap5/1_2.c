#include <stdio.h>
//2. Stabilire se un numero è pari o dispari usando if-else.

int main(){

    int num;

    printf("Inserire un numero: ");
    scanf("%d", &num);

    if ((num % 2) == 0){
        printf("\n\n");
        printf("Il numero è pari");
    } else {
        printf("\n\n");
        printf("Il numero è dispari");
    }

}