#include <stdio.h>
//7. Controllare se un anno è bisestile (multiplo di 4 ma non di 100, salvo multipli di 400).

int main(){

    int anno;
    printf("Inserisci l'anno: ");
    scanf("%d", &anno);

    if ((anno % 4 == 0) && (anno % 100 != 0) || (anno % 400 == 0)){
        printf("Anno bisestile");
    }else {
		printf("Anno non bisestile");
	}
}