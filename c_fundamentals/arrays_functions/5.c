#include <stdio.h>
#include <stdlib.h>
#define N 5

int busca_seq_rec (int m[], int n, int chave) {
    
    if (n<=0)
        return 0;
        
    if (m[n-1]==chave)
        return 1+busca_seq_rec(m, n-1, chave);
  
    return busca_seq_rec(m, n - 1, chave);
}

int main () {
    
    int v[N], i, num;
    
    printf ("Digite um número de 1 a 9, para ser achado:\n");
    scanf ("%d", &num);
    printf ("\nVetor:\n");
    
    for (i=0; i<N; i++) {
        printf ("Digite um número para ocupar v[%d]:\n", i+1);
        scanf ("%d", &v[i]);
    }
    
    for (i=0; i<N; i++) {
        printf ("%dº: %d\t", i+1, v[i]);
    }
    
    int acharchave=busca_seq_rec (v, N, num);
    
    printf ("\n");
    
    if (acharchave > 0) {
        printf("Achou %d em %d posições\n", num, acharchave);
    } else {
        printf("O número %d não foi encontrado no vetor.\n", num);
    }

    return 0;
}
