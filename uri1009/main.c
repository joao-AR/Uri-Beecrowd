#include <stdio.h>
#include <stdlib.h>

int main (){
    char nome;
    double fixo,comi,sfim,bonus;
    scanf("%s",&nome);
    //scanf("%lf %lf\n",&fixo, &comi);
    scanf("%lf %lf", &fixo,&comi );
    bonus = comi * .15;
    sfim = fixo + bonus;
    printf( "TOTAL = R$ %.2lf\n",sfim);


return 0;
}
