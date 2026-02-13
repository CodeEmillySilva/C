#include <stdio.h>

int main()
{
    int n, i;;
    printf ("Type the terms:\n");
    scanf ("%d", &n);
    
    int a=1, b=1, atual;
    
    printf ("1: 1\n2: 1\n");
    
    for (i=3; i<=n; i++){
        atual = a+b;
        if (atual<0){
            printf ("Estourou :(\n");
            break;
        }
        printf ("%d: %d\n", i, atual);
        a=b;
        b=atual;
    }

    return 0;
}

