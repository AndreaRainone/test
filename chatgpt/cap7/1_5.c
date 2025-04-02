#include <stdio.h>
//5. Stampare la tabella ASCII da 32 a 126.
int main(){
    int c;
    for (int i=32; i<=126; i++){
        printf("%c\n", i);
    }

    return 0;
}