#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define X 10

int *busca_seq (int *v, int n, int k) {
    
    int *vr = NULL, x=0;
        
    for (int i=0; i<n; i++) {
        if (v[i]==k) {
            
            vr=realloc(vr,(x+1)*sizeof(int));
            
            if (vr!=NULL) {
                
                vr[x++]=v[i];
                
            } else {
                return NULL;
            }
        }
    }
    
    if (x>0) {
        
        vr = realloc(vr, (x + 1) * sizeof(int));
        
        if (vr == NULL) {
            return NULL;
        } else {
            vr[x] = -1;
            return vr;
        }
    } else {
        return NULL;
    }
    
}

int main () {
    
    srand (time(NULL));

    int *v, *vr=NULL, n, k, i;
    
    printf ("Digite quantos elementos você deseja que o vetor tenha:\n");
    scanf ("%d", &n);
    
    printf ("Digite qual valor você deseja buscar:\n");
    scanf ("%d", &k);
    
    v=malloc(n*sizeof(int));
    
    if (v!=NULL) {
        
        for (i=0; i<n; i++) {
            v[i]=rand()%X;
        }
        
        vr=busca_seq (v, n, k);
        
        if (vr==NULL) {
            printf ("Não há espaço na memória");
        } else {
            printf ("Valor buscado: %d\n", k);
            printf ("Vetor original:\n");
            
            for (i=0; i<n; i++) {
                printf ("v[%d]: %d\t", i, *(v+i));
            }
            
            printf ("\nVetor resultante:\n");
            
            for (i=0; i<n; i++) {
                printf ("vr[%d]: %d\t", i, *(vr+i));
            }
        }
        
        free(v);
        free(vr);
        
    } else {
        printf ("Não há espaço na memória");
    }
    
    return 0;
    
}
