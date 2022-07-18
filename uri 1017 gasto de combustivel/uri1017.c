#include <stdio.h>
#include <stdlib.h>

int main (){
    double tempo_v,V_media,distancia;
    double gasto;
    distancia =0;

    scanf ("%lf %lf",&tempo_v,&V_media);
    distancia = (tempo_v * V_media) ;
    gasto = distancia /12;

    printf ("%.3lf",gasto);
    return 0;
}