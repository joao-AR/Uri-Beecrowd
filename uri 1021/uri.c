#include <stdio.h>


int main (){

    double dinheiro;
    int n100=0,n50=0,n20=0,n10=0,n5=0,n2=0;
    int m100=0,m50=0,m25=0,m10=0,m5=0,m1=0;
    scanf ("%lf",&dinheiro);

     n100 = dinheiro / 100;
     dinheiro = dinheiro -(n100*100);
     n50 = dinheiro / 50;
     dinheiro = dinheiro -(n50*50);
     n20 = dinheiro / 20;
     dinheiro = dinheiro -(n20*20);
     n10 = dinheiro / 10;
     dinheiro = dinheiro -(n10*10);
     n5 = dinheiro / 5;
     dinheiro = dinheiro -(n5*5);
     n2 = dinheiro / 2;
     dinheiro = dinheiro -(n2*2);
     m100 = dinheiro;
     dinheiro = dinheiro - (m100*1);
     
     
     
     m50 = dinheiro / 0.50;
     dinheiro = dinheiro -(m50*0.50);
     printf ("Dinheiro: %i \n",dinheiro);
     m25 = dinheiro / 0.25;
     dinheiro = dinheiro -(m25*0.25);
     m10 = dinheiro / 0.10;
     dinheiro = dinheiro -(m10*0.10);
     m5 = dinheiro / 0.05;
     dinheiro = dinheiro -(m5*0.05);
     m1 = dinheiro*100;
     

    printf  ("NOTAS:\n");
    printf (" %i nota(s) de R$ 100.00\n",n100);
    printf (" %i nota(s) de R$ 50.00\n",n50);
    printf (" %i nota(s) de R$ 20.00\n",n20);
    printf (" %i nota(s) de R$ 10.00\n",n10);
    printf (" %i nota(s) de R$ 5.00\n",n5);
    printf (" %i nota(s) de R$ 2.00\n",n2);
    printf ("MOEDAS:\n");
    printf (" %i moeda(s) de R$ 1.00\n",m100);
    printf (" %i moeda(s) de R$ 0.50\n",m50);
    printf (" %i moeda(s) de R$ 0.25\n",m25);
    printf (" %i moeda(s) de R$ 0.10\n",m10);
    printf (" %i moeda(s) de R$ 0.05\n",m5);
    printf (" %i moeda(s) de R$ 0.01\n",m1);
    return 0;
}