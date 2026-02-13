#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define X 10
#define N 5

int vetor_igual (int n[], int m[], int tam) {
    
    int k[N], q, cont=0;
    
    for (q=0; q<tam; q++) {
        if (n[q]==m[q])
            cont++;
    }
    
    if (cont==(N))
        return 1;
    else
        return 0;
}

int main () {
    
    int i, j, v[N], c[N];
    srand(time(NULL));
    
    for (i=0; i<N; i++) {
        scanf ("%d", &v[i]);
    }
    
    printf ("\n\n");
   
    for (j=0; j<N; j++) {
        scanf ("%d", &c[j]);
    }
    
    printf ("\n\n");
    
    if (vetor_igual(v,c,N) == 1) {
        printf ("Os vetores são iguais.");
    } else {
        printf ("Os vetores não são iguais.");
    }
    
    return 0;
}
