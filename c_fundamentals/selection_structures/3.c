#include <stdio.h>

int main()
{
    int x, y, somaimpares=0, aux, i;
    
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
        
    printf ("A soma dos números impares é %d\n", somaimpares);
    
    return 0;
}
