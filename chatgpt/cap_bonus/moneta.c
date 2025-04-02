#include <stdio.h>
//4. Formato Moneta: Chiedi un importo in euro (float) e stampalo come 'XX euro e YY centesimi'.
int main(){
    float importo;
    printf("Inserisci l'importo: ");
    scanf("%f", &importo);

    if (importo == 0){
        printf("L'importo inserito è 0 euro.");
    }else{
        
        printf("%d euro e %.0f centesimi", (int)importo, (importo - (int)importo) * 100);
    }
}