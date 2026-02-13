#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define X 20

void max_min (int v[N], int *pMin, int *pMax) {
    
    *pMin = v[0];
    *pMax = v[0];
    
    for (int i=0; i<N; i++) {
        
        if (v[i]<*pMin)
            *pMin=v[i];
        if (v[i]>*pMax)
            *pMax=v[i];
        
    }
    
    return;
    
}

int main () {
    
    srand(time(NULL));
    
    int v [N], i, m, M;
    
    for (i=0; i<N; i++) {
        v[i]=rand()%X;
        printf ("%dº: %d\t", i+1, v[i]);
    }
    
    printf ("\n\n");
    
    int *pMin=&m;
    int *pMax=&M;
    
    max_min (v, pMin, pMax);
    
    printf ("Valor Máximo: %d\nValor Mínimo: %d", *pMax, *pMin);
    
    return 0;    
    
}
