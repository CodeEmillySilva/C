#include <stdio.h>

int main()
{   
    float n, maior;
    printf ("Digite um número:\n");
    scanf ("%f", &n);
    maior = n;

    while (n!=0){

        if (n > maior) {
            maior = n;
        }
        printf ("Digite um número:\n");
        scanf ("%f", &n);
    }
    
    printf("O maior valor é %f\n", maior);
    
    return 0;
}

