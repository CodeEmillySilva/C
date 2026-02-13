#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define X 10
#define N 7

int num_primo (int num) {
    if (num<2)
        return 0;
    for (int g=2; g*g<=num; g++){ 
        if (num%g==0)
            return 0;
        return 1;
    }
}

int primo_soma (int h[], int tam) {
    int soma = 0;
    for (int j=0; j<tam; j++) {
        if (num_primo(h[j])) {
            printf ("%d é primo\n", h[j]);
            soma+=h[j];
        }
    }
    return soma;
}
 
int main () {
    
    srand(time(NULL));
    
    int c[N], i;
    
    for (i=0; i<N; i++) {
        c[i]=rand()%X;
        printf ("%dº: %d\t", i+1, c[i]);
    }
    
    printf ("\n\n");
    
    int _soma=primo_soma (c,7);
    
    printf ("\n\nA soma dos últimos primos do vetor é: %d", _soma);
    
    return 0;
}
