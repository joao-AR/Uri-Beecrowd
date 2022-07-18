#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, hr;
    double dinheiro;
        scanf("%i %i %lf", &num,&hr ,&dinheiro);
    dinheiro = hr * dinheiro;
        printf("NUMBER = %i\n", num);
        printf("SALARY = U$ %.2lf", dinheiro);
    return 0;
}
