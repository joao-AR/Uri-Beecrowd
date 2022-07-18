#include <stdio.h>


int main () {
    
    int N,x,y,impar=0;

    scanf ("%i",&N);

    while (N > 0)
    {
        scanf ("%i %i",&x,&y);
            //x = x +1; y = y+1;
        if (x >= y)
        {   
            x = x-1;// y = y-1;
            while (x > y)
            {
                y++;

                if (y%2 != 0)
                {
                    impar = impar + y;
                }

            }
            

        }
        if (y > x)
        {
            y = y-1;
            while (y > x)
            {
                x++;

                if (x%2 != 0)
                {
                    impar = impar +x;
                }

            }

        }
        
        printf ("%i\n",impar);
        N = N -1;
        impar = 0;

    }

    return 0;
}