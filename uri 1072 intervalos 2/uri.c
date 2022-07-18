#include <stdio.h>

int main(){

    int n,dentro=0,fora=0,i=0;
    scanf ("%i",&n);
    int vet[n];

    while (i< n)
    {
        scanf ("%i",&vet[i]);
        if (vet[i]>=10 && vet[i]<=20)
        {
            dentro = dentro +1;
        }
        else 
        {
        fora = fora +1;
        }
        i = i +1;
        
    }
    printf ("%i in\n",dentro);
    printf ("%i out\n",fora);

    



    return 0;
}