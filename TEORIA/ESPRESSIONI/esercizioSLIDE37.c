#include <stdio.h>

int main() {
    int numero;
    int risultato;
    
    // Input da tastiera
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

         // 1. Incremento di una unità
        numero += 1;
        
        // 2. Divisione per la metà del valore corrente
        int meta = numero / 2;
        if (meta == 0){
            printf("Errore: divisione per zero\n");
            return 1;
        }
        risultato = numero / meta;
        
        // 3. Sottrazione del doppio del valore corrente
        risultato -= (2 * risultato);
        
        // 4. Decremento di una unità
        risultato -= 1;
        
        // 5. Stampa del risultato finale
        printf("Risultato finale: %d\n", risultato);

        return 0;

}