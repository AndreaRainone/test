#include <stdio.h>
#include <strings.h>

int main(void){
    
    int binario;

    printf("Inserisci un numero secondo il sistema binario (0/1): ");
    scanf("%d", &binario);

    printf("\nIl numero inserito è %d", binario);

    int test = strlen((binario));
    printf("\n numeri caratteri: %d", test);
   // for (int i=0; i<= strlen((int)(binario)); i++){

   //}

}