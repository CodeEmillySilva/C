#include <stdio.h>
#include <math.h>

int fatorial (int n) {
    
    if (n==0)
        return 1;
    return n*fatorial(n-1);
}

double serie_taylor (int x, int n) {
    
    if (n==0)
        return 1;
    return pow (x,n)/fatorial(n)+serie_taylor(x,n-1);
}

int main () {
    
    int n, x;
    
    printf ("Digite o valor de x:\n");
    scanf ("%d", &x);
    
    printf ("Digite os n termos que serão calculados:\n");
    scanf ("%d", &n);
    
    double soma = serie_taylor (x,n);
    
    printf ("O valor da constante e elevado a x é: %e", soma);
    
    return 0;
}
