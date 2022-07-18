#include <stdio.h>
#include <stdlib.h>

int main () {

    double n1,n2,n3,n4,n_exame, media,media_final;
    media = 0;
    scanf ("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;

    if (media >= 7){
        printf ("Media: %.1lf\n",media);
        printf ("Aluno aprovado.\n");
    }
    if (media <= 5)
    { 
        printf ("Media: %.1lf\n",media);
        printf ("Aluno reprovado.\n");
    }

    if (media> 5 && media <= 6.9)
    {
        
        scanf ("%lf",&n_exame);
        media_final = (media + n_exame) /2;
        printf ("Media: %.1lf\n",media);
        printf ("Aluno em exame.\n");
        printf ("Nota do exame: %.1lf\n",n_exame);
        if (media_final >= 5)
        {   
            printf ("Aluno aprovado.\n");
        }
        if (media_final < 5)
        {
            printf ("Aluno reprovado.\n");
        }
        printf ("Media final: %.1lf\n",media_final);
    }
    return 0;
}