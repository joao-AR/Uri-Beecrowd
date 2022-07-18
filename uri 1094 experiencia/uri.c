#include <stdio.h>


int main () {

    int N,quantia=0;
    double quantiaS=0,quantiaR=0,quantiaC=0,total=0;
    double porcentoS=0,porcentoC=0,porcentoR=0;
    char tipo;

    scanf ("%i",&N);

    for (N;N>0;N--){

        scanf ("%i %c",&quantia,&tipo);
        
        total = total + quantia;
        

        if (tipo == 'S')
        {
            quantiaS = quantiaS + quantia;
        }
        if (tipo == 'C')
        {
            quantiaC = quantiaC + quantia;
        }
        if (tipo == 'R')
        {
            quantiaR = quantiaR + quantia;
        }
        
    }
    porcentoS = (quantiaS * 100)/total;
    porcentoC = (quantiaC * 100)/total;
    porcentoR = (quantiaR * 100)/total;

    printf ("Total: %i cobaias\n",total);
    printf ("Total coelhos : %lf\n",quantiaC);
    printf  ("Total de ratos: %.0lf\n",quantiaR);
    printf  ("Total de sapos: %.0f\n",quantiaS);

    printf ("Percentual de coelhos: %.2lf %%\n",porcentoC);
    printf ("Percentual de ratos: %.2lf %%\n",porcentoR);
    printf ("Percentual de sapos: %.2lf %%\n",porcentoS);

    





    return 0 ;
}