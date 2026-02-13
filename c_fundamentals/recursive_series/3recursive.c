#include <stdio.h>

float serie_harmonica (int n) {
    
    if (n==1)
        return 1;
    return 1.0/n+serie_harmonica(n-1);
}

int main () {
    
    int n;
    
    printf ("Digite os n termos:\n");
    scanf ("%d", &n);
    
    float soma=serie_harmonica(n);
    
    printf ("A soma da série harmônica é %f", soma);

    return 0;
}
