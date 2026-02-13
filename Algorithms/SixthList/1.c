#include <stdio.h>

int main()
{
    int soma=0, x, y, num1, num2, i, x;
    
    printf ("Digite um número de inicio e outro de término para soma:\n");
    scanf ("%d%d", &x, &y);
    
    if (x>y){
        num1=y;
        num2=x;
    }
    else{
        num1=x;
        num2=y;
    }
    for (i=num1; i<=num2; i++){
        printf ("%d\n", i);
        soma=soma+i;
    }
    
    x=soma/i;
    
    printf ("A soma de todos os termos de num1 a num2 é de %d", soma);
    printf ("%d", x);
    return 0;
}


