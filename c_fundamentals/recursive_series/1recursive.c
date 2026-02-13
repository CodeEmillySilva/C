#include <stdio.h>

int fatorial (int n) {
    
    if (n==0)
        return 1;
        
    return n * fatorial (n-1);
}

float serie_taylor (int n) {
    
    if (n==0)
        return 1;
    return (1.0/fatorial(n))+serie_taylor(n-1);
}

int main () {
    
    int n;
    
    do {
    printf ("Digite o valor n:\n");
    scanf ("%d", &n);
    } while (n<1);
        
    float soma=serie_taylor(n);
    
    printf ("O valor da constante e = %f", soma);
    
    return 0;
}
