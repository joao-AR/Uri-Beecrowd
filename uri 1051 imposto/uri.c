#include <stdio.h>
#include <stdlib.h>

int main () 
{

    double salario,imposto,t1,t2;
    imposto =0;

    scanf("%lf",&salario);

    if (salario<= 2000)
    {
        printf ("Isento\n");
    }

    else
    {
        if (salario >= 2000.01 && salario <= 3000)
        {
            salario = salario - 2000;
            imposto = salario * 0.08;
        }

        if (salario >=3000.01 && salario <= 4500)
        {
            salario = salario - 2000;
            imposto = 1000 * 0.08;
            salario = salario - 1000;
            imposto = imposto + (salario * 0.18);
            
            
        }

        if (salario >4500)
        {
            salario = salario - 2000;
            imposto = 1000 *0.08;
            salario = salario -1000;
            imposto = imposto + (1500 * 0.18);
            salario = salario - 1500;
            imposto = imposto + (salario * 0.28);
            
        }
        printf ("R$ %.2lf\n",imposto);
            
        
    }

    return 0;
}