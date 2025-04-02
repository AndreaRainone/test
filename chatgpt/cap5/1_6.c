#include <stdio.h>
//6. Chiedere all'utente un carattere e determinare se è una vocale o una consonante.

int main(){

    printf("Inserisci un carattere e ti dirò se è vocale o consonante: ");
    char carattere = getchar();
	//PER MIGLIORARLO, CONTROLLARE ANCHE LE LETTERE MAIUSCOLE
    if ((carattere == 'a') || (carattere == 'e') || (carattere == 'i') || (carattere =='o') || (carattere =='u')){
        printf("\n\n");
        printf("VOCALE");
    } else {
        printf("\n\n");
        printf("CONSONANTE");
    }
    return 0;
}