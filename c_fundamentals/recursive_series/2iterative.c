#include <stdio.h>
#include <math.h>

int main () {
    
    int n, x, fat=1, i;
    float e=0.0;
    
    printf ("Digite o valor de x:\n");
    scanf ("%d", &x);
    
    printf ("Digite os n termos que serão calculados:\n");
    scanf ("%d", &n);
    
    for (i=0; i<n; i++) {
        
        if (i>0)
            fat*=i;
        e+=(float)pow(x,i)/fat;
    }
    
    printf ("O valor da constante é %f", e);

    return 0;
}
