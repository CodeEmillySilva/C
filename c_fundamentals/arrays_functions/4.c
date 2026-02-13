#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define X 10

void busca_todos (int c[], int n, int key, int num[]) {

    for (int j=0; j<n; j++) {
        if(c[j]==key){
            num[j]=j;
        } else {
            num[j]=-1;
        }
    }

}

void ordem (int q[], int m) {
    
    for (int p=0; p<N-1; p++) {
        for (int t=0; t<N-1; t++){
            if (q[t]<q[t+1]){
                int aux=q[t];
                q[t]=q[t+1];
                q[t+1]=aux;
            }
        }
    }
    
}

int main () {

    srand(time(NULL));
 
    int v[N], i, k, chave, indices[N];

    printf ("Digite um número para ser achado no vetor:\n");
    scanf ("%d", &chave);

    printf ("\nVetor entrada:\n");

    for (i=0; i<N; i++) {
        v[i] = rand ()%X;
        printf ("%dº: %d\t", i+1, v[i]);
    }

    printf ("\n");

    busca_todos (v, 5, chave, indices);
    
    ordem (indices, 5);

    printf ("\nVetor saída:\n");

    for (k=0; k<N; k++) {
        printf ("%dº: %d\t", k+1, indices[k]);
    }
    
    return 0;
}
