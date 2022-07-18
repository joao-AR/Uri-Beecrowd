#include <stdio.h>

int main (){

    int n[5],par=0,i;
    
    for ( i = 0;i<=4; i++)
    {
        scanf ("%i",&n[i]);

        if (n[i]%2 ==0)
        {
            par = par +1;
        }
    }

    printf ("%i valores pares\n",par);


return 0;
}