#include <stdio.h>
#define N 6

void funcao_um (int matriz[N][N]) {
    for (int i=0; i<N; i++) {
        matriz [0][i]=1;
        matriz [i][0]=1;
        matriz [N-1][i]=1;
        matriz [i][N-1]=1;
    }
}

void funcao_dois (int matriz[N][N]) {
    for (int i=1; i<N-1; i++) {
        matriz [1][i]=2;
        matriz [N-2][i]=2;
        matriz [i][N-2]=2;
        matriz [i][1]=2;
    }
}

void funcao_tres (int matriz[N][N]) {
    matriz[2][2]=3;
    matriz[2][3]=3;
    matriz[3][2]=3;
    matriz[3][3]=3;
}

int main () {
    
    int matriz[N][N], i, j;
    
    for (i=0; i<N; i++) {
        for (j=0; j<N; j++) {
            matriz [i][j] = 0;
        }
    }
    
    funcao_um (matriz);
    funcao_dois (matriz);
    funcao_tres (matriz);
    
    for (i=0; i<N; i++) {
        for (j=0; j<N; j++) {
            printf ("%d\t", matriz[i][j]);
        }
        printf ("\n");
    }

    return 0;
}
