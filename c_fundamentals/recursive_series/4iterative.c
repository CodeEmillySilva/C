#include <stdio.h>

int main () {
    
    int n, i;
    float soma1=0, soma2=0;
    
    printf ("Digite quais serão o n termos:\n");
    scanf ("%d", &n);
    
    for (i=1; i<=n; i++) {
        if (i%2==0)
            soma2-=1.0/i;
        if (i%2!=0)
            soma1+=1.0/i;
    }
    
    printf ("O somatório dos termos é: %f", soma1+soma2);

    return 0;
}
