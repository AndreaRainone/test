#include <stdio.h>

int main()
{

    float grado;
    printf("Inserisci un numero rappresentante il grado alcolico e ti dirò di che si tratta: ");
    scanf("%f", &grado);

    if (grado <= 10.5){
        printf("\n E' un vino leggero");
    } else if ( (grado > 10.5) && (grado <= 12) ){
        printf("\n E' un vino normale");
    } else if ((grado > 12) && (grado <= 15) ){
        printf("\n E' un vino forte");
    } else if ((grado > 15) && (grado <= 20) ){
        printf("\n E' un vino liquoroso");
    } else if ((grado > 20) && (grado <= 40) ){
        printf("\n E' un alcolico");
    } else if (grado > 40){
        printf("\n E' un superalcolico");
    }


}