#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define X 100

int main()
{
    int v[N], i, maior, soma;
    float media;
    
    srand (time(NULL));
   
    for (i=0; i<N; i++){
        
        v[i]=rand() % X;
        
        maior = v[0];
        
        printf ("%dº: %d\t", i, v[i] );
        
        if(v[i]>maior){
            maior=v[i];
        }
        
        soma+=v[i];
        
    }
    
    media=(float)soma/N;
    
    printf ("\nMAIOR VALOR: %d\nSOMA: %d\nMÉDIA: %f\n", maior, soma, media);
    
    for (i=0; i<N; i++){
        if (v[i]>media)
            printf ("O indíce %dº, de valor %d, é maior que média %f\n", i, v[i], media);
    }
    
    return 0;
}
