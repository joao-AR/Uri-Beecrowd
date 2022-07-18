#include <stdio.h>

int main(){

    double salario,ajuste;

    scanf ("%lf",&salario);

    if (salario >0 && salario <= 400)
    {
        ajuste = salario * 0.15;
        printf ("Novo salario: %.2lf\n",salario + ajuste);
        printf ("Reajuste ganho: %.2lf\n",ajuste);
        printf ("Em percentual: 15 %%\n");

    }

    if (salario > 400 && salario <= 800)
    {
        ajuste = salario * 0.12;
        printf ("Novo salario: %.2lf\n",salario + ajuste);
        printf ("Reajuste ganho: %.2lf\n",ajuste);
        printf ("Em percentual: 12 %%\n");
    }

    if (salario > 800 && salario <= 1200)
    {
        ajuste = salario * 0.10;
        printf ("Novo salario: %.2lf\n",salario + ajuste);
        printf ("Reajuste ganho: %.2lf\n",ajuste);
        printf ("Em percentual: 10 %%\n");

    }

    if (salario > 1200 && salario <= 2000)
    {
        ajuste = salario * 0.07;
        printf ("Novo salario: %.2lf\n",salario + ajuste);
        printf ("Reajuste ganho: %.2lf\n",ajuste);
        printf ("Em percentual: 7 %%\n");

    }

    if (salario > 2000 )
    {
        ajuste = salario * 0.04;
        printf ("Novo salario: %.2lf\n",salario + ajuste);
        printf ("Reajuste ganho: %.2lf\n",ajuste);
        printf ("Em percentual: 4 %%\n");

    }

    return 0;
}