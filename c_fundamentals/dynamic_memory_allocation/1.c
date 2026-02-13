#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define X 10

float *clone (float *v, int n) {
    
    float *copia = malloc(n*sizeof(float));
    
    if (copia != NULL) {
        
        for (int i=0; i<n; i++) {
            copia[i]=v[i];
        }
        
        return copia;
        
    } else {
     
        return NULL; 
        
    }
    
}

int main () {
    
    srand (time(NULL));
    
    float *v, *copia;
    int n, i;
    
    printf ("Digite o tamanho que você deseja seu vetor:\n");
    scanf ("%d", &n);
    
    v=malloc(n*sizeof(float));
    
    if (v!=NULL) {
        
        for (i=0; i<n; i++) {
            *(v+i)=rand()%X;
        }
        
        copia=clone (v, n);
        
        if (copia!=NULL) {
            
            printf ("Vetor original:\n");
            
            for (i=0; i<n; i++) {
                printf ("v[%d] : %f\t", i, *(v+i));
            }
            
            printf ("\nVetor copia:\n");
            
            for (i=0; i<n; i++) {
                printf ("copia[%d] : %f\t", i, *(copia+i));
            }
            
        } else {
            
            printf ("Não há memória suficiente para a quantidade pedida...\n");
            
        }
        
    } else {
        
        printf ("Não há memória suficiente para a quantidade pedida...\n");
        
    }

    return 0;
    
}
