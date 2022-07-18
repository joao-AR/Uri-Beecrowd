#include <stdio.h>


int main () {
    double numero[5],resultado, soma;
    int posi,i;
    soma = 0,resultado =0,posi =0,i=0;    
    for ( i; i<=5 ;i++)
    {
        scanf ("%lf",&numero[i]);

        if (numero[i]>0)
        {
            posi = posi +1;
            soma = soma + numero[i];
        }

    }
    resultado = soma / posi;
    printf ("%i valores positivos\n",posi);
    printf ("%.1lf\n",resultado);
    



    return 0;
}