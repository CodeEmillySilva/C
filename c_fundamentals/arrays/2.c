#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define X 20
#define N 10

int main()
{
    srand(time(NULL));
    
    int i, v[N];
    
    for (i=0; i<N; i++) {
        v[i]=rand()%X;
        printf("%dº: %d\t", i+1, v[i]);
    }
    printf ("\n\n");
    for (i=0; i<N; i++) {
        if (v[i]%2==0)
            printf ("%dº: %d\t", i+1, v[i]/2);
        else 
            printf ("%dº: %d\t", i+1, v[i]*3);
    }
    return 0;
}
