#include <stdio.h>
#include <stdlib.h>

int main (){

    double numero;
    scanf ("%lf",&numero);
    if (numero >=0 && numero<=100 )  
    {
        if (numero>=0 && numero <= 25)
        {
            printf ("Intervalo [0,25]\n");
        }
        if (numero>25 && numero <=50)
        {
            printf ("Intervalo (25,50]\n");
        }
        if (numero>50 && numero <=75)
        {
            printf ("Intervalo (50,75]\n");
        }
        if (numero>75 && numero <=100)
        {
            printf ("Intervalo (75,100]\n");
        }
    }
    else 
    {
        printf ("Fora de intervalo\n");
    }

    return 0;
}