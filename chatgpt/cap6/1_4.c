#include <stdio.h>
//4. Chiedere all'utente un numero N e stampare i primi N numeri naturali.

int main(){
    int num;
    int i = 1;
    
    do{
        printf("Inserisci un numero maggiore di 0: ");
        scanf("%d", &num);
        if ((num<0) || (num==0)){
            printf("Il numero che hai inserito è minore di 0\n");
        }
    }while((num < 0) || (num==0));
    
    while(i<=num){
        printf("%d ", i);
        i++;
    }
   return 0;
}