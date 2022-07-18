#include <stdio.h>

int main () {

    int x=1,y=1,tot=0;
    
    while (x > 0 && y>0){
        
        scanf ("%i %i",&x,&y);
        if (x >0 && y >0)
        {
            if (x > y){
                while (y <= x){
                printf ("%i ",y);
                tot = tot+y;
                y = y+1;
                }
                printf ("Sum=%i\n",tot);
            }
            else {
                while (x <= y){
                    printf ("%i ",x);
                    tot = tot+x;
                    x = x+1;
                }
                printf ("Sum=%i\n",tot);
            }
        }
        tot = 0;
    }
    return 0;
}