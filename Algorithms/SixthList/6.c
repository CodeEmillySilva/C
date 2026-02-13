#include <stdio.h>

int main()
{
    int N, X;
    printf ("Digite dois números:\n");
    scanf ("%d%d", &N, &X);
    
    int i = 1;
    
    for (i==1; i <= N; i++) {
        printf ("%d\n", i);
        
        if (i%X == 0){
            printf ("%d é múltiplo de %d\n", i, X);
        }
    }
    
    return 0;
}

