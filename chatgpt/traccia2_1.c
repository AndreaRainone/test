/*Scrivere un programma in linguaggio C che simuli una versione semplificata di un calcolatore di paghe settimanali.
Requisiti:
Il programma chiede all'utente di inserire il numero di ore lavorate in una settimana e la paga oraria.
Se le ore lavorate superano le 40 ore, le ore extra sono considerate straordinari e vengono pagate con una maggiorazione del 50%.
Il programma deve calcolare e stampare:
Il numero totale di ore normali e ore straordinarie.
Il totale della paga settimanale.
L’utente può inserire dati più volte (quindi serve un ciclo), finché non inserisce un valore negativo per le ore lavorate (il programma in quel caso termina con un messaggio di uscita).
Organizza il codice usando almeno una funzione per calcolare la paga settimanale.*/

#include <stdio.h>

/*Funzione paga delle prime 40 ore.
Mi serve: ore totali, ore con paga base, paga, valore di ritorno*/
float base (float oretotali, float orebase, float pagabase, float incassobase){

    if (oretotali > 40){
        orebase = 40;
        incassobase = pagabase * orebase;
    }else{
        orebase = oretotali;
        incassobase = pagabase * orebase;
    }
    
    return incassobase;
}


/*Funzione paga degli straordinari, cioè oltre le 40 ore
Mi serve: ore totali, ore straordinari, paga straordinari, valore di ritorno*/
float straordinari (float oretotali, float orestr, float incassostr, float pagabase){

    if (oretotali > 40){
        orestr = oretotali-40;
        incassostr = 1.5*orestr*pagabase;
    }else{
        orestr = 0;
        incassostr = 0;
    }
    
    return incassostr;
}


//Funzione incasso settimanale
float incassoTotale (float oretotali, float pagabase){

    float orebase = 0, incassobase = 0;
    float orestr = 0, incassostr = 0;

    incassobase = base(oretotali, orebase, pagabase, incassobase);
    incassostr = straordinari(oretotali, orestr,incassostr, pagabase);

    return incassobase + incassostr;
}

int main(){

    float oretotali = 0, pagabase = 0;
    float orebase = 0, orestr = 0;

    while (oretotali >= 0){

        printf("\n\nOre lavorate settimanali totali (numero negativo per uscire): ");
        if ((scanf("%f", &oretotali)==1)){

            if (oretotali < 0){
                printf("\nEsco dal programma, buona giornata");
                return 0;
            }
            
            printf("\nInserisci la paga oraria");
            if ((scanf("%f", &pagabase)==1)){
                
                if (oretotali <= 40){
                    orebase = oretotali;
                    orestr = 0;
                }else{
                    orebase = 40;
                    orestr = oretotali - orebase;
                }
                printf("\nOre normali: %d", (int)orebase);
                printf("\nOre straordinari: %d", (int)orestr);
                printf("\nPaga settimanale: %0.2f", incassoTotale(oretotali, pagabase));

            }


        }else{
            printf("\nInput non valido. Riprova.");
        }

    }

    return 0;
}

