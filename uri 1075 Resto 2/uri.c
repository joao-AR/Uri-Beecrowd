#include <stdio.h>

int main () {
    int n,s;

    scanf("%i",&n);

    for ( s =1;s<10000;s++)
    {  
       if (  s % n ==2){    
        printf ("%i\n",s);
        }
    }


    return 0;
}