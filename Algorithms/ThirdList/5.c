#include <stdio.h>

int main()
{
    int n, soma=0, divisor, i;
    
    printf ("Digite um número inteiro positivo:\n");
    scanf ("%d", &n);
    
    for (divisor=1; divisor<=n; divisor++){
        printf ("Divisor %d\n", divisor);
        if (n%divisor==0){
            
            soma=soma+divisor;
            printf ("A soma é %d\n", soma);
        }
        
    }
    
    soma = soma/2;
    
    if (n==soma){
        printf("O número %d é perfeito", n);
    } else {
        printf ("O número %d não é perfeito", n);
    }

    return 0;
}
