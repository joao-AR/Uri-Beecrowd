#include <stdio.h>

int main (){

    int senha;

    scanf ("%i",&senha);

    if (senha == 2002)
    {
        printf ("Acesso Permitido\n");
    }
    else
    { 
        printf ("Senha Invalida\n");
        while (senha != 2002)
        {
            scanf ("%i",&senha);
            if (senha == 2002)
            {
                printf ("Acesso Permitido\n");
            }
            else{
                printf ("Senha Invalida\n");
            }
            

        }




    }
    return 0;
}