#include <stdio.h>

int main () {
    
    int n, i;
    float soma1, soma2;
    
    printf ("Digite o valor de n:\n");
    scanf ("%d", &n);
    
    for (i=1; i<=n; i++) {
        if (i%2!=0)
            soma1+=4.0/(i*2-1);
        else 
            soma2-=4.0/(i*2-1);
        
    }
    
    printf ("O valor do somatório aproximado de pi é: %f", soma1+soma2);
    
    return 0;
}
