#include <stdio.h>



int main () {

    int v1,v2,valor_menor,valor_maior;

    scanf ("%d %d", &v1,&v2);
    if (v1 > v2){
        valor_menor = v2+1;
        valor_maior = v1;
    }
    else {
        valor_menor = v1+1;
        valor_maior = v2;
    }

    
    for ( valor_menor; valor_menor < valor_maior; valor_menor++){
        if ( valor_menor % 5 == 3 ||valor_menor % 5 == 2)
        printf ("%d\n",valor_menor);

    }
    return 0;
}


