#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    
    printf ("Digite um número natural:\n");
    scanf ("%d", &n);
    
    int i=1, soma=0, somasquare=0;
    float media;
    
    for (i=1; i<=n; i++){
        soma = soma + i;
        printf ("%d + ", i);
       
    }
        
        printf (" = %d\n", soma);
    
    for (i=1; i<=n; i++)  {
        
        printf ("%d ^2 + ", i);
        somasquare = somasquare + pow(i,2);
    }
        printf (" = %d \n", somasquare);
    
        media = soma / n;
        printf ("%d / %d = %f", soma, n, media);
    
    return 0;
}

