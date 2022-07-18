#include <stdio.h> 
#include <stdlib.h>

int main () {
    int codigo,quant;
    double total;

    scanf ("%i %i",&codigo,&quant); 

    if (codigo == 1)
    {
        total = quant * 4;
    } 

    if (codigo == 2)
    {
        total = quant * 4.50;
    }

    if (codigo ==3 )
    {
        total = quant * 5;
    }

    if (codigo == 4)

    {
        total = quant * 2;
    }

    if (codigo == 5)
    {
        total = quant * 1.50;
    } 

    printf ("Total: R$ %.2lf\n",total);
    return 0;
}