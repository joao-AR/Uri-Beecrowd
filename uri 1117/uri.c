#include <stdio.h>

int main () {

   double  nota1,nota2,resultado;

   do{
       scanf ("%lf",&nota1);
       if (nota1 > 10 || nota1 < 0 ){
           printf ("nota invalida\n");
       }


   }while (nota1>10 || nota1 < 0);

   do
   {
       scanf ("%lf",&nota2);
       if (nota2 > 10 || nota2 < 0 ){
           printf ("nota invalida\n");
       }
   } while (nota2>10 || nota2 < 0); 

   resultado = (nota1 + nota2) /2;

   printf ("media = %.2lf\n",resultado);
   
   





    return 0;
}