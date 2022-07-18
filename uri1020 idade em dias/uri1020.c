#include <stdio.h>
#include <stdlib.h>

int main (){
int n,anos,mes,dias,restanos,restmes;
    anos =0,mes= 0,dias=0;
    scanf ("%i",&n);

     if (n >=365)
    {
        anos = n /365;
        restanos = n %365;
        mes = restanos/30;
        restmes = restanos %30;
        dias = restmes % 30;
    } 
    
        else 
        {
            if ( n >=30 && n < 365)
            {
                mes = n /30;
                dias = n % 30;
            } 
                else 
                {
                
                    if (n < 30)
                    {
                        dias =n;
                    } 
                }
        }    
    printf ("%i ano (s)\n",anos);
    printf ("%i mes(es)\n",mes);
    printf ("%i dia(s)\n",dias);



    return 0;
}