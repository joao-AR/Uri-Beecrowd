#include <stdio.h>

int main () {

    int n[5],par=0,impar=0,posi=0,neg=0,i;
    
    for ( i = 0;i<=4; i++)
    {
        scanf ("%i",&n[i]);

        if (n[i]%2 ==0)
        {
            par = par +1;
        }
        
        if (n[i]%2 != 0)
        {
            impar = impar +1;
        }
        
        if (n[i]> 0)
        {
            posi = posi +1;
        }

        if (n[i]<0)
        {
            neg = neg +1;
        }
    }
    printf ("%i valor(es) par(es)\n",par);
    printf ("%i valor(es) impar(es)\n",impar);
    printf ("%i valor(es) positivo(s)\n",posi);
    printf ("%i valor(es) negativo(s)\n",neg);




    return 0;
}