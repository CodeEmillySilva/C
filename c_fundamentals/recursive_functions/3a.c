#include <stdio.h>

float serie_harmonica (int x) {
    
    if (x==1)
        return 1;
    return (serie_harmonica(x-1)+(1.0/x));
}

int main () {
    
    int n;
    
    do {
        printf ("Digite um número positivo:\n");
        scanf ("%d", &n);
    } while (n<=0);

    float soma = serie_harmonica (n);
    
    printf ("O valor da série harmônica é: %f", soma);
    
    return 0;
}
