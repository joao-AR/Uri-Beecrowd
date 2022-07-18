#include <stdio.h>


int  main () {

    int n,i=1;

    scanf ("%i",&n);

    while (i <= n)
    {
        if (i%2 == 0)
        {
            printf ("%i^2 = %i\n",i,i*i);
        }
        i = i+1;
    }
    




return 0;
}