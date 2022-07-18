#include <stdio.h>
#include <stdlib.h>

int main (){
    int vet1[3],vet2[3],i,ajuda1,ajuda2;
    i=0;

    while (i<3)
    {   
        scanf ("%i",&vet1[i]);
        vet2[i] = vet1[i];
        i = i +1 ;
    }
    if (vet1 [0]>vet1[1])
    {   
        ajuda1 = vet1 [0];
        ajuda2 = vet1 [1];
        vet1 [0]= ajuda2;
        vet1 [1] = ajuda1;
    }

    if (vet1 [1] > vet1 [2])
    {
        ajuda1 = vet1[1];
        ajuda2 = vet1 [2];
        vet1 [1] = ajuda2;
        vet1 [2] = ajuda1;
    } 
    if (vet1 [0]>vet1[1])
    {   
        ajuda1 = vet1 [0];
        ajuda2 = vet1 [1];
        vet1 [0]= ajuda2;
        vet1 [1] = ajuda1;
    }
    if (vet1 [0]>vet1[2])
    {   
        ajuda1 = vet1 [0];
        ajuda2 = vet1 [2];
        vet1 [0]= ajuda2;
        vet1 [2] = ajuda1;
    }
    
    i =0;
    while (i<3)
    {
        printf ("%i\n",vet1[i]);
        i = i+1;
    }
    i = 0;
    printf ("\n");
    while (i<3)
    {
        
        printf ("%i\n",vet2[i]);
        i = i+1;
    }
    

    return 0;
}