#include <stdio.h>

int num_invertido (int b[], int tam) {
    int aux, inicio=0, fim = tam-1;
    
    while (fim>inicio) {
        aux=b[inicio]; 
        b[inicio]=b[fim]; 
        b[fim]=aux;
        
        inicio++;
        fim--;
    }
}

int main () {
    int v[5], i;
    
    for (i=0; i<5; i++) {
        printf ("Digite %dº número:\n", i+1);
        scanf ("%d", &v[i]);
    }
    for (i=0; i<5; i++) {
        printf ("%dº: %d\t", i+1, v[i]);
    }    
    
    num_invertido (v, 5);
    
    printf ("\nVetor invertido:\n");
    for (i=0; i<5; i++) {
        printf ("%dº: %d\t", i+1, v[i]);
    }
    return 0;
}
