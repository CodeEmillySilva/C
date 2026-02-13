#include <stdio.h>

void vetor_fibonacci (int v[], int n) {
    
    if (n>=1)
        v[0]=1;
    if (n>=2)
        v[1]=1;
    
    for (int j=2; j<n; j++) {
        v[j]=v[j-1]+v[j-2];
    }
}

int main () {
    
    int m, i;
    
    do {
        printf ("Digite um número maior que 0 para gerar a sequência de fibo:\n");
        scanf ("%d", &m);
    } while (m<=0);
    
    int c[m];
    
    vetor_fibonacci (c, m);
    
    for (i=0; i<m; i++) {
        printf("%d\t", c[i]);
    }

    return 0;
}
