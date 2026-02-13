#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define X 10

int *uniao ( int *v1, int n1, int *v2, int n2, int *p3 ) {
    
    int i, j, tam=0, *uniao3=NULL, existe;
    
    for (i=0; i<n1; i++) {
        existe=0;
        for (j=0; j<n2; j++) {
            if (uniao3[j]==v1[i]) {
                existe=1;
                break;
            }
        }
        
        if(existe==0) {
            uniao3=realloc(uniao3, (tam+1)*sizeof(int));
            
            if (uniao3!=NULL) {
                uniao3(tam++)=v1[i];
            } else {
                return NULL;
            }
        }
    }
    
    *p3=tam;
    
    return uniao3;
    
}

int main () {
    
    srand(time(NULL));
    
    int *v1, *v2, n1, n2, v3, p3, i;
    
    printf ("Digite quantos elementos você quer no 1º vetor:\n");
    scanf ("%d", &n1);
    
    printf ("Digite quantos elementos você quer no 2º vetor:\n");
    scanf ("%d", &n2);
    
    v1=malloc(n1*sizeof(int));
    
    if (v1!=NULL) {
        
        v2=malloc(n2*sizeof(int));
        
        if (v2!=NULL) {
            
            for (i=0; i<n1; i++) {
                v1[i]=rand()%X;
            }
            
            for (i=0; i<n2; i++) {
                v2[i]=rand()%X;
            }
            
            v3 = uniao (v1,n1,v2,n2,p3);
            
            if (v3!=NULL) {
                
                for (i=0; i<n1; i++) {
                    printf ("v1[%d]: %d", i, *(v1+i));
                }
                
                for (i=0; i<n2; i++) {
                    printf ("v2[%d]: %d", i, *(v2+i));
                }
                
                for (i=0; i<p3; i++) {
                    printf ("v3[%d]: %d", i, *(v3+i));
                }
                
                free(v3);
                free(v2);
                
            } else {
                printf ("Não há espaço na memória.");
            }
            
        } else {
            printf ("Não há espaço na memória.");
        }
        
    } else {
        printf ("Não há espaço na memória.");
    }
    
    return 0;
    
}
