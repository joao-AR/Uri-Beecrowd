#include <stdio.h>

int main () {

    int n,totn=0;
    scanf ("%i",&n);
    while (totn <6)
    {
        if (n % 2 != 0)
        {
            printf ("%i\n",n);
            totn = totn +1;
        }
        n = n+1;
    }



    return 0;
}