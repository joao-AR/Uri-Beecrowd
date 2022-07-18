#include <stdio.h>

int main () {

    double  nota1,nota2,resultado;
    int SN ;

do 
{

    do{
        scanf ("%lf",&nota1);
        if (nota1 > 10 || nota1 < 0 ){
            printf ("nota invalida\n");
        }


    }while (nota1>10 || nota1 < 0);

    do
    {
        scanf ("%lf",&nota2);
        if (nota2 > 10 || nota2 < 0 ){
            rintf ("nota invalida\n");
        }
    } while (nota2>10 || nota2 < 0); 

    resultado = (nota1 + nota2) /2;

    printf ("media = %.2lf\n",resultado);

    
    do{
        printf ("novo calculo (1-sim 2-nao)\n");
        scanf ("%d",&SN);
        
    }while (SN< 1 || SN > 2);
    
} while (SN ==1); 

    return 0;
}