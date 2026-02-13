#include <stdio.h>

int main () {
    
    int n, soma, i, fatorial=1;
    float e=1.0;
    
    do {
        printf ("Digite um número:\n");
        scanf ("%d", &n);
        
    } while (n<=0);
    
    for (int i = 1; i <= n; i++) {
        fatorial *= i; 
        e += 1.0 / fatorial;
    }
    
    printf ("O valor da constante é: %f", e);
    
    return 0;
}
