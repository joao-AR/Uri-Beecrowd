#include <stdio.h>

int main () {

    int x,y,soma=0;
    scanf ("%i %i",&x,&y);

    if (x > y)
    {
        while (x > y)
        {
            y = y+1;
            if (y%2!=0 && y < x)
            {
                soma = soma +(y);
            }
        }
    } 
    
    if (y > x)
    {
        while (y > x)
        {
            x = x +1;
            if (x%2 != 0 && x < y)
            {
                soma = soma + (x);
            }
            
        }
    }
    printf ("%i\n",soma);  


    return 0;
}