#include <stdio.h>

int main (){
    int hi,hf,mi,mf,q1,q2,tempo=0;
    
    
    scanf ("%i %i %i %i",&hi,&mi,&hf,&mf);
    q1 = mi + (hi*60);
    q2 = mf + (hf*60);
   

    if (q1 >= q2)
    {
        hf = hf +24;
        q1 = mi + (hi*60);
        q2 = mf + (hf*60);
        tempo = q2 - q1;

        printf ("O JOGO DUROU %i HORA(S) E %i MINUTO(S)",tempo/60,tempo %60);
    } 
    else
    {
        tempo = q2 - q1;

        printf ("O JOGO DUROU %i HORA(S) E %i MINUTO(S)",tempo/60,tempo %60);
    }
    


    return 0;
}