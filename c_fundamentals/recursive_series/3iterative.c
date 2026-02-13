#include <stdio.h>

int main () {
    
    int n, i;
    float soma=0;
    
    printf ("Digite o n, para o número de termos:\n");
    scanf ("%d", &n);
    
    for (i=1; i<=n; i++) {
        soma+=1.0/i;
    }
    
    printf ("A soma da série harmônica %f", soma);

    return 0;
}
