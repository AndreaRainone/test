#include <stdio.h>

int main(){

    int a,b,c;
    printf("Inserire la grandezza dei lati dei triangoli (in sequenza): ");
    scanf("%d%d%d", &a, &b, &c);

    if ((a == b) && (a == c)){
        printf("\n Il triangolo è equilatero");
    } else if ((a==b) || (a==c) || (b==c) ){
        printf("\n Il triangolo è isoscele");
    }
    else {
        printf("\n Il triangolo è scaleno");
    }
}