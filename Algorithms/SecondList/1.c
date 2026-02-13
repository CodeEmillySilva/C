#include <stdio.h>

int main()
{
    int number;
    printf ("Digite um número de 1 a 9:\n");
    scanf ("%d", &number);
    
    if (number>=1 && number<=9) {
        printf ("O valor está na faixa permitida.");
    }
    else {
        printf ("O valor está fora da faixa permitida.");
    }

    return 0;
}
