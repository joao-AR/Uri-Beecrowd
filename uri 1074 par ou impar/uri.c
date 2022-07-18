#include <stdio.h>

int  main () {

    int n,i=0;
    scanf ("%i",&n);

    int vet[n];

    while (i < n)
    {
        scanf ("%i",&vet[i]);
        i = i+1;
    }
    i = 0;

    while ( i < n)
    {
        if(vet[i]%2 ==0 && vet[i]!= 0)
        {
            printf ("ODD ");
        }
        if (vet[i]%2 !=0)
        {
            printf ("EVEN ");
        }
        
        if (vet[i]>0)
        {
            printf ("POSITIVE\n");
        }
        if (vet[i] <0)
        {
            printf ("NEGATIVE\n");
        }

        if (vet[i]==0)
        {
            printf ("NULL\n");
        }
        i = i+1;
        
    }
        

    return 0;
}