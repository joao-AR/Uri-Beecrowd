#include <stdio.h>

int main (){

    int N,T;

    scanf ("%i",&N);
    
    for (T = 1;T<=10;T++)
    {

        printf ("%i x %i = %i\n",T,N,T*N);


    }
    


    return 0;
}