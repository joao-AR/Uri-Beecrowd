#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int DDD;
    scanf ("%i",&DDD);
    if (DDD == 61||DDD == 71||DDD == 11||DDD ==21||DDD == 32||DDD == 19||DDD == 27||DDD == 31)
    {
        if (DDD == 61)
        {
            printf ("Brasilia\n");
        }
        if (DDD == 71)
        {
            printf ("Salvador\n");
        }
        if (DDD == 11 )
        {
            printf ("Sao Paulo\n");
        }
        if (DDD ==21 )
        {
            printf ("Rio de Janeiro\n");
        }
        if (DDD == 32)
        {
            printf ("Juiz de Fora\n");
        }
        if (DDD == 19)
        {
            printf ("Campinas\n");
        }
        if (DDD == 27)
        {
            printf ("Vitoria\n");
        }
        if (DDD == 31)
        {
            printf ("BeloHorizonte\n");
        }
    }
    else
    {
         printf ("DDD nao cadastrado\n");
    }
    
    return 0;
}