#include <stdio.h>
#include <stdlib.h>

int main (){

    int i,f,contador,horas,ci;
    horas = 0;
    contador = 0;

    scanf ("%i %i",&i,&f);
    ci = i;
    

    if (i == f)
    {
        printf ("O JOGO DUROU 24 HORA(S)\n");
    }

    if (i > f)
    {
        while (ci < 24 )
        {
            horas = horas +1;
            ci = ci + 1;
        }
        ci =0;
        while (ci != f)
        {
            horas = horas +1;
            ci = ci+1;
        }
        printf ("O JOGO DUROU %i HORA(S)\n",horas);
    }

    if (f > i)
    {
        while (i < f)
        {
           horas = horas +1;
           i = i +1;
        }
        printf ("O JOGO DUROU %i HORA(S)\n",horas);
    }
    



    return 0;
}