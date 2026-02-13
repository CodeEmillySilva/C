#include <stdio.h>

 float serie_nila (int n) {
        
        if (n==1) {
            return 4;
        } else {  
            if (n%2 != 0) {
                return 4.0/((n*2)-1)+serie_nila(n-1);
            } else {
                return -4.0/((n*2)-1)+serie_nila(n-1);
            }
        }
}

int main () {
    
    int n;
    
    printf ("Digite o valor de n:");
    scanf ("%d", &n);
    
    float total = serie_nila(n);
    
    printf ("O valor aproximado de pi é: %f", total);
    
    return 0;
}
