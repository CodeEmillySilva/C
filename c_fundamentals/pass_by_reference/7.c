#include <stdio.h>
#define M 3 
#define N 4

void min_matriz (float m [M][N], float *pMin, int *pI, int *pJ) {
    
    *pMin=m[0][0];
    *pI=0;
    *pJ=0;
    
    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            if (m[i][j]<*pMin) {
                *pMin=m[i][j];
                *pI=i;
                *pJ=j;
            }
        }
    }
    
    return;
}

int main () {
    
    int i, j;
    float m[M][N], min;
    
    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            printf ("%d%dº:\t", i, j);
            scanf ("%f", &m[i][j]);
        }
    }
    
    printf ("\nMatriz:\n");
    
    for (i=0; i<M; i++) {
        for (j=0; j<N; j++) {
            printf ("%f\t", m[i][j]);
        }
        printf ("\n");
    }
    
    float *pMin=&min;
    int *pI=&i;
    int *pJ=&j;
    
    min_matriz (m, pMin, pI, pJ);
    
    printf ("Menor valor: %f\nÍndice (i): %d\nÍndice (j): %d", *pMin, *pI, *pJ);
    
    return 0;
    
}
