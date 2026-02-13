#include <stdio.h>

int main()
{
    int n, i, r, j, soma=0, an;
    
    printf ("Digite o número de termos:\n");
    scanf ("%d", &n);
    printf ("Digite o número inicial:\n");
    scanf ("%d", &i);
    printf ("Digite a razão:\n");
    scanf ("%d", &r);
    
    for (j=0; j<=n; j++){
        soma = (j-1)*r;
    }
    an=i+soma;
    
    printf ("%d", an);
    return 0;
}


