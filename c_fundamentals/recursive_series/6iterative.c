#include <stdio.h>

int main () {
    
    int n, i;
    float soma=3.0;
    
    printf ("Digite o valor n:");
    scanf ("%d", &n);
    
    for (i=3;i<=n; i++) {
        
        if (i%2!=0)
            soma-=4.0/((i*2)-2*(i*2)-1*(i*2));
        else
            soma+=4.0/((i*2)-2*(i*2)-1*(i*2));
        
    }
    
    printf ("O valor aproximado de pi pela série de Nila é: %f", soma);
    
    return 0;
}
