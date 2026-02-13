#include <stdio.h>

int main() {
    int x, y, somaimpares=0, aux, i, n, j;
    
    printf ("Digite um numero n para repetir o processo:\n");
    scanf ("%d", &n);
    
    for (j=0; j<n; j++){
    
        printf ("Digite dois valores, X e Y:\n");
        scanf ("%d%d", &x, &y);
    
        if (x > y) {
            aux=x;
            x=y;
            y=aux;
        }
    
        if (x%2 != 0 && y%2 != 0) {
            for (i=x+1; i<y; i++) {
                if (i%2 != 0) {
                    somaimpares += i;
                }
            }
        } else if (x%2 != 0 && y%2 == 0) {
            for (i=x+1; i<y; i++) {
                if (i%2 != 0) {
                    somaimpares += i;
                }
            }
        } else if (x%2 == 0 && y%2 != 0) {
            for (i=x+1; i<y; i++) {
                if (i%2 != 0) {
                    somaimpares += i;
                }
            }
        } else if (x%2 == 0 && y%2 == 0) {
            for (i=x+1; i<=y; i++) {
                if (i%2 != 0) {
                    somaimpares += i;
                }
            }
        }
        
        printf ("A soma dos números impares é %dº: %d\n", j+1, somaimpares);
        somaimpares = 0;
        
    }
    
    return 0;
}
