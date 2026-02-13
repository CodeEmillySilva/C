#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 30
#define X 10

int main()
{
    int v[N], i, j, aux, i_menor;
    
    srand (time(NULL));
   
    for (i=0; i<N; i++){
        
        v[i]=rand()%X;
        printf ("%dº: %d\t", i, v[i]);
        
    }
    
    printf ("\n\n");
    
    for (i=1; i<N; i++){
        
        aux=v[i];
        j=i-1;
        
        while ((j>=0) && (aux<v[j])){
            v[j+1]=v[j];
            j--;
        }
        
        v[j+1]=aux;
    }
    
    for (j=0; j<N; j++){
        printf ("%dº: %d\t\n", j, v[j]);
    }
    
    for (j=0; j<N; j++){
        if (v[j]==0){
            printf ("O vetor v[%d]: %d é igual a zero logo será trocado para 1.\n", j, v[j]);
            v[j]=1;
            printf ("v[%d]: %d\n", j, v[j]);
        } else {
            printf ("O vetor v[%d]: %d não é igual a zero.\n", j, v[j]);
        }
    }
   
    return 0;
}
