#include <stdio.h>

int main (){
    
    int total_de_casos,Populacao_A,Populacao_B,acrescimo,TotalAnos;
    double Crescimento_A,Crescimento_B;

    scanf ("%d",&total_de_casos);

    for (total_de_casos; total_de_casos > 0;total_de_casos--){
        TotalAnos =0;
        scanf ("%d %d %lf %lf",&Populacao_A,&Populacao_B,&Crescimento_A,&Crescimento_B);
        

        do{
            acrescimo = (Populacao_A*Crescimento_A)/100;
            Populacao_A = Populacao_A + acrescimo;
            acrescimo = (Populacao_B*Crescimento_B)/100;
            Populacao_B = Populacao_B + acrescimo;
            TotalAnos = TotalAnos +1;
            if (TotalAnos > 100){
                break;
            }
        }while(Populacao_A <= Populacao_B);
        if (TotalAnos > 100){
            printf ("Mais de 1 seculo.\n");
        }
        else {
            printf ("%d anos.\n",TotalAnos);
        }
    }



    return 0;
}