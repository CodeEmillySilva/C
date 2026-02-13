#include <stdio.h>

int main()
{
    int x, y, num1, num2, i, soma=0;
    
    printf("Digite dois números:\n");
    scanf ("%d%d", &x, &y);
    
    if (x==0 || y==0) {
        printf("Entrada inválida digite dois números inteiros:\n");
        scanf("%d%d", &x, &y);
    }
    else {
        if (x>y){
            num1=y;
            num2=x;
        }
        else {
            num1=x;
            num2=y;
        }
        
        char op = ' ';
        for (i=1; i<=num1; i++) {
            soma = soma + num2;
            printf ("%c%d", op, num2);
            op = '+';
        }
        printf (" = %d", soma);
    }

    return 0;
}



