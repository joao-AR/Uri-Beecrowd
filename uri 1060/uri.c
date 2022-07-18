#include <stdio.h>

int main () {

  float num[5];
  int pos =0,i=0;
  

  for ( i ;i<=5;i++)
  {
    scanf ("%f",&num[i]);
   
    if (num[i]>0)
    {
        pos = pos +1;
    }
    
  }
  printf ("%i valores positivos\n",pos);
  


    return 0;
}