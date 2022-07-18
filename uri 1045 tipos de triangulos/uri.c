#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    double  vet1[3],ajuda1,ajuda2;
    int i;
    i=0;

    while (i<3)
    {   
        scanf ("%lf",&vet1[i]);
        i = i +1;
    }
    if (vet1 [0]< vet1[1])
    {   
        ajuda1 = vet1[1];
        ajuda2 = vet1[0];
        vet1[0]= ajuda1;
        vet1[1]= ajuda2;

    }

    if (vet1 [1] < vet1 [2])
    {
        ajuda1 = vet1[1];
        ajuda2 = vet1[2];
        vet1[2]= ajuda1;
        vet1[1]= ajuda2;
    } 
    if (vet1 [0]< vet1[1])
    {   
        ajuda1 = vet1[1];
        ajuda2 = vet1[0];
        vet1[0]= ajuda1;
        vet1[1]= ajuda2;
    }
    if (vet1 [0]<vet1[2])
    {   
        ajuda1 = vet1 [0];
        ajuda2 = vet1 [2];
        vet1 [0]= ajuda2;
        vet1 [2] = ajuda1;
    }
    //--------------------------------//
    // A =0 , B=1,C=2

    if (vet1[0]>= (vet1[1]+vet1[2]))
    {
        printf ("NAO FORMA TRIANGULO\n");
    }

    else
    {

    

        if (pow(vet1[0],2)== pow(vet1[1],2)+pow(vet1[2],2))
        {
            printf ("TRIANGULO RETANGULO\n");
        }
        
        if (pow(vet1[0],2)> pow(vet1[1],2)+pow(vet1[2],2))
        {
            printf ("TRIANGULO OBTUSANGULO\n");
        }
        
        if (pow(vet1[0],2 )< pow(vet1[1],2)+pow(vet1[2],2))
        {
            printf ("TRIANGULO ACUTANGULO\n");
        } 
        
        if (vet1[0]==vet1[1]&& vet1[1]==vet1[2])
        {
            printf ("TRIANGULO EQUILATERO\n");
        }

        if ((vet1[0]==vet1[1] && vet1[2]!= vet1[0])||(vet1[1]==vet1[2] && vet1[0]!= vet1[2])|| (vet1[0]==vet1[2] && vet1[0]!= vet1[1]))
        {
            printf ("TRIANGULO ISOSCELES\n");
        }
    }
    

    return 0;
}