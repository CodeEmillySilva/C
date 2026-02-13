#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 6
#define X 20

int main()
{
    int v[N], i, j, aux, i_menor;
    
    srand (time(NULL));
   
    for (i=0; i<N; i++){
        
        v[i]=rand() % X;
    
    printf ("%dº: %d\t", i, v[i]);
    
    }
    
    printf ("\n");
    
    for( i = 0 ; i < N ; i++ ){
        int i_menor = i;
        for(j = i+1 ; j < N ; j++ )
            if( v[j] < v[i_menor] )
                i_menor = j;

        int aux = v[i];
        v[i] = v[i_menor];
        v[i_menor] = aux;
        
        printf ("v[i]: %d \tv[i_menor]:%d \taux:%d \n", v[i], v[i_menor], aux);
        
    }
    
    
    return 0;
}
