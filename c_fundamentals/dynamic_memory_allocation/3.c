#include <stdio.h>
#include <stdlib.h>

int main () {
    
    float *original, *maiores, soma=0, media;
    int tam, y_tam=0, i;
    
    printf ("Digite quantos espaços serão precisos:\n");
    scanf ("%d", &tam);
    
    original = malloc (tam*sizeof(float));
    
    if (original == NULL) {
        
        printf ("Ops! Ocorreu um problema, não há espaço na memória para alocar esse vetor...");
        
    } else {
        
        for (int i=0; i<tam; i++) {
            printf ("original [%d] = ", i);
            scanf ("%f", original+i);
            
            soma+=*(original+i);
            
            printf ("\n");
        }
        
        media=soma/tam;
        
        for (i=0; i<tam; i++) {
            if (*(original+i)>=media) {
                y_tam++;
            }
        }
        
        maiores = malloc (y_tam*sizeof(float));
        
        if (maiores==NULL) {
            
            printf ("Ops! Ocorreu um problema, não há espaço na memória para alocar esse vetor...");
            
        } else {
            
            int x=0;
            
            for (int j=0; j<tam; j++) {
                if (*(original+j)>=media) {
                    *(maiores+x)=*(original+j);
                    x++;
                }
            }
            
            for (int i=0; i<tam; i++) {
                printf ("original [%d] = %f\t", i, *(original+i));
            }
            
            printf ("\n\n");
            
            for (int j=0; j<x; j++) {
                printf ("maiores [%d] = %f\t", j, *(maiores+j));
            }
            
        }
        
    }
    
    return 0;
    
}
