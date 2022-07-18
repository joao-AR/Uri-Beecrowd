#include <stdio.h>
#include <stdlib.h>

int main (){
int n,horas,minutos,segundos,resthoras,restmin;
horas =0,minutos=0,segundos=0;
    scanf ("%i",&n);

    if (n >=3600)
    {
        horas = n /3600;
        resthoras = n %3600;
        minutos = resthoras/60;
        restmin = resthoras %60;
        segundos = restmin % 60;
        
    } 
    
        else 
        {
            if ( 60>=n<3600)
            {
                minutos = n /60;
                segundos = n % 60;
            } 
                else 
                {
                    if (n <=59)
                    {
                        segundos =n;
                    } 
                }
        }    
    printf ("%i:%i:%i\n",horas,minutos,segundos);



    return 0;
}