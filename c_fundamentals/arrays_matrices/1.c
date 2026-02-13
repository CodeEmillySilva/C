#include <stdio.h>

void preenche_vetor_somatorio (int t, int c[t]) {
    for (int j=0; j<t; j++) {
        c[j]=((1+j)*j)/2;
    }
}

void mostra_vetor (int t, int c[t]) {
    for (int m=0; m<t; m++) {
        printf ("%dº: %d\t", m+1, c[m]);
    }
}

int main () {
    
    int num;
    
    do {
    printf ("Digite um número que indicará o tamanho do vetor:\n");
    scanf ("%d", &num);
    
    } while (num<0);
    
    int v[num];
    
    for (int i=0; i<num; i++) {
        v[i]=0;
    }
    
    preenche_vetor_somatorio (num, v);
    
    mostra_vetor(num, v);
    
    return 0;
}
