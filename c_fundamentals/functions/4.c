#include <stdio.h>

int calcula_soma (int x, int y) {
    int somaimpares=0, aux, i;
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
    
    return somaimpares;
}

int main () {
    int a, c;
    
    printf ("Digite dois números: \n");
    scanf ("%d%d", &a, &c);
    
    int calculo=calcula_soma(a,c);
    
    printf ("A soma dos números impares entre os dois números digitados é %d", calculo);

    return 0;
}
