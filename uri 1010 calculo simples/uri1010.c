#include <stdio.h>
#include <stdlib.h>

int main (){
    int cod1,quant1,cod2,quant2;
    double dinheiro1,dinheiro2,pagar;

    
    scanf ("%i %i %lf",&cod1,&quant1,&dinheiro1);
    scanf ("%i %i %lf",&cod2,&quant2,&dinheiro2);

    
    pagar = (quant1 * dinheiro1)+(quant2 * dinheiro2);

    printf ("VALOR A PAGAR: R$ %.2lf \n",pagar);

    return 0;
}