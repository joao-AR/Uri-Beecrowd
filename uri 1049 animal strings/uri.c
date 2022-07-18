#include <stdio.h>

int main ()
{
    char R1[100],R2[100],R3[100];
    scanf ("%s",&R1);
    scanf ("%s",&R2);
    scanf ("%s",R3);
    if (R1[0] == 'v')
    {   
        if (R2[0] == 'a')
        {   
            
            if (R3[0]== 'c')
            {
                printf ("aguia\n");
            }
            else printf ("pomba\n");
        }

        if (R2[0] == 'm')
        {
            ;
            if (R3[0] == 'o')
            {
                printf ("homem\n");
            }
            else printf ("vaca\n");
        }
    }


    if (R1[0] == 'i')
    {
        if (R2[0]=='i')
        {
            if (R3[2]=='m')
            {
                printf ("pulga\n");
            }
            else printf ("lagarta\n");
        }

        if (R2 [0]== 'a')
        {
            if (R3 [0]== 'h')
            {
                printf ("sanguessuga\n");
            }
            else printf ("minhoca\n");
        }
    }



return 0;
}