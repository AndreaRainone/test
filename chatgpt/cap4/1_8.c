#include <stdio.h>
//8. Verificare se un utente è maggiorenne (>=18) usando operatori logici.

int main() {
    int eta;
    printf("Inserisci i tuoi anni: ");
    scanf("%d", &eta);

    if (eta >= 18) {
        printf("Sei maggiorenne\n");
    } else {
        printf("Sei minorenne\n");
    }

    return 0;
}