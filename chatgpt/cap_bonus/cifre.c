#include <stdio.h>

//3. Cifre di un Numero: Stampa le cifre di un numero intero partendo dalla meno significativa.
int main() {
    int numero;
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    printf("Le cifre del numero partendo dalla meno significativa sono:\n");
    if (numero == 0) {
        printf("0\n");
    } else {
        while (numero != 0) {
            printf("%d\n", numero % 10); // Stampa la cifra meno significativa
            numero /= 10;               // Rimuove la cifra meno significativa
        }
    }

    return 0;
}