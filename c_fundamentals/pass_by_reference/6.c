#include <stdio.h>
#define N 10

void max_vetor (float v[N], float *pMax, int *pIndice) {
    
    *pMax=v[0];
    *pIndice=0;
    
    for (int i=0; i<N; i++) {
        if (*pMax<v[i]) {
            
            *pMax=v[i];
            *pIndice=i;
            
        }
    }
    
    return;
}

int main () {
    
    int i, in;
    float v [N], M;
    
    for (i=0; i<N; i++) {
        scanf ("%f", &v[i]);
    }
    
    for (i=0; i<N; i++) {
        printf ("%dº: %f\n", i, v[i]);
    }
    
    printf ("\n\n");
    
    float *pMax=&M;
    int *pIndice=&in;
    
    max_vetor (v, pMax, pIndice);
    
    printf ("Valor máximo: %f\nÍndice:%d", *pMax, *pIndice);
    
    return 0;    
    
}
