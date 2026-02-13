#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define X 20

void gera_matriz (int m, int n, int v[m][n]) {
    
    srand(time(NULL));
    
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            v[i][j]=rand()%X;
        }
    }
}

void mostra_matriz (int m, int n, int v[m][n]) {
    
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            printf ("%d\t", v[i][j]);
        }
        printf ("\n");
    }
}

void gera_matriz_transposta (int m, int n, int v[m][n]) {
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            printf ("%d\t", v [j][i]);
        }
        printf ("\n");
    }
}

int main () {
    
    int m, n;
    
    do {
        
        printf ("Quantas linhas você quer que o vetor tenha?:\n");
        scanf ("%d", &m);
        printf ("E quantas colunas?:\n");
        scanf ("%d", &n);
        
    } while (m<1 && n<1);
    
    printf ("\nMatriz original:\n");
    
    int v[m][n];
    
    gera_matriz (m, n, v);
    
    mostra_matriz (m, n, v);
    
    printf ("\nMatriz transposta:\n");
    
    gera_matriz_transposta (m, n, v);
    
    return 0;
}
