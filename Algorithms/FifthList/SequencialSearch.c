#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define X 20

int main()
{
 
    int v[N], i;
    
    srand(time(NULL));
    
    for(i=0; i<N; i++){
        v[i] = rand() % X;
        printf ("%dº: %d\t", i, v[i]);
    }
    printf ("\n\n");
    for (i=0; i<N; i++){
        if (v[i]==20){
            printf ("O valor 20 está no indice v[%d]\n", i);
        } else {
            printf ("Não há o valor 20 no vetor.\n");
        }
    }
    return 0;
}
