#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define X 50

int main()
{
    srand (time(NULL));
    
    int i, j, v[N], aux;
    
    for (i=0; i<N; i++){
        v[i]  = rand() % X - (X/2);
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
        if(v[j]>=0){
            printf ("%dº: %d\t\n", j, v[j]);
        
        } else { 
            printf("O número é negativo, logo não aparecerá.\n");
            
        }
    }

    return 0;
}
