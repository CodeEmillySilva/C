
#include <stdio.h>

int main () {
    
    int n, i;
    float soma=0.0;
    
    do {
        printf ("Digite um número positivo:\n");
        scanf ("%d", &n);
    } while (n<=0);
    
    for (i=1; i<=n; i++) {
        soma += (1.0/i);
    }
    
    printf ("O valor da série harmônica é %f", soma);
    
    return 0;
}
