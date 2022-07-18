#include <stdio.h>

int main () {

    int val, maior=0,posiM=0,posi =0,k;

    for ( k = 0; k<=100;k++)
    {
        scanf ("%i",&val);
        if (val>maior)
        {
           maior = val;
           posiM = posi;
        }
        posi = posi +1;
    } 

    printf (" %i",maior);
    printf (" %i",posiM);





    return 0;
}