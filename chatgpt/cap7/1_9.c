#include <stdio.h>
#include <math.h>
//9. Mostrare l'arrotondamento di un numero con il casting.
int main(){
    float a = 15.0980923;
    printf("a originariamente vale: %.08f \n",a);
    printf("Arrotondato: %.0f\n", round(a)); // Arrotonda correttamente
    
    return 0;
}