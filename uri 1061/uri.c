#include <stdio.h>

int main () {
    int di,hi,mi,si,df,hf,mf,sf,q1,q2,tempo;

    scanf ("%i %i %i %i",&di,&hi,&mi,&si);
    scanf ("%i  %i %i %i",&df,&hf,&mf,&sf);

    q1 = si + (mi*60) +(hi*60*60) +(di*24*60*60);
    q2 = sf + (mf*60) +(hf*60*60) +(df*24*60*60);

   
        tempo = q2 - q1 ;
        
        
        printf ("%i dia(s)\n",tempo/(24*60*60));
        tempo = tempo% (24*60*60) ;
        printf ("%i hora(s)\n",tempo /(60*60));
        tempo = tempo % (60*60);
        printf ("%i minuto(s)\n",tempo/60);
        tempo = tempo % 60;
        printf ("%i segundo(s)\n",tempo);

    return 0; 
}