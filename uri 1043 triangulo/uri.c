#include <stdio.h>
#include <stdlib.h>

int main (){
    double a,b,c;
    
    scanf ("%lf %lf %lf",&a,&b,&c);
    

    if (a< b+c && b < a+c && c < a+b )
    {
        
        printf ("Perimetro = %.1lf\n",a + b+c);
    }
    else {
        
        printf ("Area = %lf\n",c*(a+b) / 2);
    }

return 0;
}