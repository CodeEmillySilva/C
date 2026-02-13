#include <stdio.h>

float fatorial (int m) {
    
    if (m == 0)
        return 1.0;
    
    return m * fatorial(m - 1);
}

float soma_fatorial (int e) {
    if (e == 0)
        return 1.0;
    
    return 1.0 / fatorial(e) + soma_fatorial (e - 1);
}

int main () {
    
    int n;
    float constante;
    
     do {
        printf ("Digite um número:\n");
        scanf ("%d", &n);
        
    } while (n<=0);
    
    constante = soma_fatorial(n);
    
    printf ("O valor da constante e é de: %f", constante);

    return 0;
}
