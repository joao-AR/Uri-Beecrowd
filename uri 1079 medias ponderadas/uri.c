# include <stdio.h>


int main () 
{
    int k;
    
    float quant[3];

    for (k = 0; k < 3;k++){

        scanf ("%f",&quant[k]);

        
    } 
    double media = (quant[0] *2 + quant [1]*3 + quant[2]*5)/10;

    printf ("%.1f\n",media);
    
    return  0;
}