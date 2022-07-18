#include <stdio.h>

int main(){

    double n1,n2,resultado;
    int total;
    scanf ("%i",&total);
    do{
        scanf ("%lf %lf",&n1,&n2);
        

        if (n2 != 0){
            resultado =  n1/n2;
            printf ("%.1lf\n",resultado);
        }
        else 
        printf ("divisao impossivel\n");
    }while (total > 0);
    
    


    return 0;
}