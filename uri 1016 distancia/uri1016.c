#include <stdio.h>
#include <stdlib.h>

int main () {
    int distancia,tempo,distancia_carro;
    tempo =0;
    
    scanf ("%i",&distancia);

    while (distancia > 0){
        tempo = tempo + 2;
        distancia = distancia -1;
    }

    printf ("%i minutos",tempo);

    return 0;
}
