#include <stdio.h>

int main()
{
    int n, soma=0;
    
    printf ("Digite um número:\n");
    scanf ("%d", &n);
    
    for (int i=1; i<=n; i++) {
        soma+=i;
    }
    
    printf ("A soma dos 1 até %d é de: %d", n, soma);

    return 0;
}
