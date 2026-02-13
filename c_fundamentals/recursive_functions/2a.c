#include <stdio.h>

int soma (int m) {
    
    if (m==1) 
        return 1;
            
    return m + soma (m-1);
}

int main()
{
    int n, somatorio;
    
    do {
    printf ("Digite um número:\n");
    scanf ("%d", &n);
    } while (n<=0);
    
    somatorio = soma (n);

    printf ("A soma dos números de 1 até %d é: %d", n, somatorio);
    
    return 0;
}
